#include "findflight.h"
#include "ui_findflight.h"
#include "QFile"
#include "QDebug"
#include <QTextCodec>  // 用于文件转码，解决乱码问题
#include <QStandardItemModel>  // TableView 控件
#include <QChar>
#include <QMessageBox>
#include <QDateTime>
#include <const.h>
#include <cityraider.h>
// 整个文件还比较冗长，后期再进行降维优化。
#define Inf 65535
#define OVERFLOW -1
typedef struct QNode{//队列结构体
    QString name;
    QString planenum;
    QString rest;
    struct QNode *next;
}QNode,*QueuePtr;
typedef struct {
    QueuePtr front;
    QueuePtr rear;
}QueueList;
void InitQueue(QueueList &Q);//队列数据结构
void EnQueue(QueueList &Q,QString nam,QString planenu,QString rest);
void DeQueue(QueueList &Q,QString &nam,QString &planenu,QString &rest);
typedef struct {
    int arcs[26][26];//邻接矩阵
    int vexnum,arcnum;//图的当前顶点数和弧数
}MGraph;

typedef int PathMaxtrix;//存储最短路径的下标
typedef int ShortPathTable;//存储到各点最短路径的权值
typedef int Transform;
typedef struct{
    int *base;
    int *top;
    int stacksize;
}SqStack;
//求最短路径
void ShorttestPath_Dijkstra(MGraph G,int v0,PathMaxtrix *P,ShortPathTable *D);
void ShortPath(int i,int j,PathMaxtrix *P);
void Improve(PathMaxtrix *P,ShortPathTable *D,int k);
void PrintFlight(QStringList Result);
void InitStack(SqStack &S);//栈的初始化
void Push(SqStack &S,int e);//入栈
void Pop(SqStack &S,int &e);//出栈
int StackEmpty(SqStack S);//判空
typedef struct AirInfoNode{
    QString StartPla;//始发站
    QString EndPla;//终点站
    QString FlightNum;//航班号
    QString PlaneNum;//飞机号
    QString TimeFly;//起飞时间
    QString TimeArr;//降落时间
    QString date;//星期几
    QString Discount;//票价折扣
    QString Price;//票价
    QString PassNum;//乘员定额
    QString TicketsRest;//余票量
    struct AirInfoNode *next;//下一个航班信息
}AirInfoNode,*Flight;
typedef struct FlightList{
    Flight Front;//指向航线头指针
    Flight Rear;//指向航线尾指针
    int length;
}FlightList;

/* 全局变量设定 */
static FlightList L;
static QStringList CityTable,HeaderTable;
MGraph G;
static int numbers=0;
static QStringList Citys;
static QueueList Q;//存求票顾客的队列


/* 函数声明 */
void ReadData(Flight &L,int length);//文件中读取数据
void RaidSort(Flight &L);//基数排序
QString Trans(QString str);//三字码
void InitList(Flight &L);//初始化
int ListEmpty(Flight L);//判空
void MoveNode(Flight &P,Flight &L);//移动结点
int ToWeek(QString data);//日期转星期
void SentMessage__(QString info);
void Cleartable();
void PrintL(Ui::FindFlight *ui);
FindFlight::FindFlight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindFlight)
{
    ui->setupUi(this);
    CityTable << "北京" << "西安" << "厦门" << "上海浦东" << "上海虹桥" << "深圳" << "广州" << "重庆"
              << "长沙" << "张家界" << "海口" << "昆明" << "南京" << "成都" << "武汉" << "杭州" << "秦皇岛"
              << "三亚" <<"青岛" << "温州" << "沈阳" << "桂林" << "呼和浩特" << "哈尔滨" << "大连" << "天津";
    HeaderTable << "航班号" << "出发城市" << "到达城市" << "出发时间" << "到达时间" << "折后票价" << "折扣" << "余票" ;
    qDebug() << CityTable.indexOf("桂林") << endl;
    for(int i=0;i<CityTable.length();i++)
    {
        ui->CityStart_ComboBox->addItem(CityTable.at(i));
        ui->CityEnd_ComboBox->addItem(CityTable.at(i));
    }
    //TableView
    QStandardItemModel *model = new QStandardItemModel();
    model->setColumnCount(8);
    for(int i=0;i<8;i++)
        model->setHeaderData(i,Qt::Horizontal,HeaderTable.at(i));
    ui->TableView->setModel(model);
    ui->TableView->setSelectionBehavior(QAbstractItemView::SelectRows);//整行选中
    ui->TableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可编辑

    L.length=0;
    L.Front=new AirInfoNode; // 头结点
    L.Front->next=NULL; // 置L的头结点为空
    QFile count(FILE_FLIGHTCOUNTS);
    if(count.open(QFile::ReadOnly |QFile::Text))
    {
        QTextStream counts(&count);
        L.length= counts.readLine().toInt();
        qDebug() << "length:" << L.length << endl;
        count.close();
    }
    //L.Rear->next=NULL;
    ReadData(L.Front,L.length);
    RaidSort(L.Front);
    Flight P=L.Front->next;
    // 显示数据并居中
    for(int i=0;i<L.length;i++)
    {
        model->setItem(i,0,new QStandardItem(P->FlightNum));
        model->setItem(i,1,new QStandardItem(P->StartPla));
        model->setItem(i,2,new QStandardItem(P->EndPla));
        model->setItem(i,3,new QStandardItem(P->TimeFly));
        model->setItem(i,4,new QStandardItem(P->TimeArr));
        model->setItem(i,5,new QStandardItem(P->Price));
        model->setItem(i,6,new QStandardItem(P->Discount));
        model->setItem(i,7,new QStandardItem(P->TicketsRest));
        //居中
        for(int j=0;j<7;j++)
            model->item(i,j)->setTextAlignment(Qt::AlignCenter);
        P=P->next;
    }
    model->item(0,7)->setTextAlignment(Qt::AlignCenter);
    // 设置初始时间
    QDateTime Current_Date_Time =QDateTime::currentDateTime();
    ui->TimeStart->setDateTime(Current_Date_Time);
InitQueue(Q);

}
/* 读取数据 */
void ReadData(Flight &K,int length)
{
    QFile csvFile(FILE_PATH);//创建QFile对象 csvFile，File_PATH为csvFile文件保存的路径及类型
    QStringList CSVList,list;  //字符串列表
    QString Str;
    CSVList.clear();//清空
    Flight S;
    int i,j,k;
    // 初始化L,并以L的Front为头结点
    if(csvFile.open(QIODevice::ReadWrite))
    {
        QTextCodec *codec = QTextCodec::codecForName("UTF-8");
        // 单链表
        for(int m=0;m<26;m++){
            for(int n=0;n<26;n++)
                G.arcs[m][n]=Inf;
        }
        for(k=0;k<length;k++)
        {
            Str = codec->toUnicode(csvFile.readLine());
            list = Str.split(",");
            qDebug() << list << endl;
            S= new AirInfoNode;
            // 储存数据
            S->StartPla=list[0];
            S->EndPla=list[1];
            S->FlightNum=list[2];
            S->PlaneNum=list[3];
            S->TimeFly=list[4];
            S->TimeArr=list[5];
            S->date=list[6];
            S->Price=list[7];
            S->Discount=list[8];
            S->PassNum=list[9];
            S->TicketsRest=list[10];
            // 头插法
            S->next=K->next;
            K->next=S;
            i=CityTable.indexOf(S->StartPla);
            j=CityTable.indexOf(S->EndPla);
            G.vexnum=26;
            if(S->Price<G.arcs[i][j])
                G.arcs[i][j]=S->Price.toInt();
        }
    }

    csvFile.close();
}
void InitList(Flight &L)
{
    L=new AirInfoNode;
    L->next=NULL;
}
int ListEmpty(Flight L)
{
    if (!L->next) {
        return 1;
    }
    else return 0;
}
void MoveNode(Flight &P,Flight &L)
{
    Flight Q,R;
    Q=P;
    while (Q->next) {
        Q=Q->next;
    }
    R=L->next;
    L->next=R->next;
    Q->next=R;
    R->next=NULL;
}
/* 基排序三字码 */
void RaidSort(Flight &L)
{
       AirInfoNode*Bucket[26];
       int i,j,chToin;
       QString str,toThree;
       QChar Thumb;
       for (i=0; i<26; i++) {
           InitList(Bucket[i]);//初始化26个桶
       }
       for (j=2; j>=0; j--) {//三字码
           while (!ListEmpty(L)) {
               str=L->next->StartPla;//获取首元结点的元素
               toThree=Trans(str);
               Thumb=toThree.at(j);
               chToin=(int)Thumb.unicode()-'A';
               MoveNode(Bucket[chToin], L);//把结点放进相应的桶中
           }
           for (i=0; i<26; i++) {
               while (!ListEmpty(Bucket[i])) {
                   MoveNode(L, Bucket[i]);//把桶中的元素重新放回单链表
               }
           }
       }
       for (i=0; i<26; i++) {
           delete (Bucket[i]);
       }
}
/* 转换为三字码 */
QString Trans(QString str)
{
    QString ThreeCode;
    if(str=="北京") ThreeCode="PEK";
    if(str=="上海虹桥") ThreeCode="SHA";
    if(str=="上海浦东") ThreeCode="PVG";
    if(str=="广州") ThreeCode="CAN";
    if(str=="深圳") ThreeCode="SZX";
    if(str=="成都") ThreeCode="CTU";
    if(str=="海口") ThreeCode="HAK";
    if(str=="昆明") ThreeCode="KMG";
    if(str=="杭州") ThreeCode="HAK";
    if(str=="武汉") ThreeCode="WUH";
    if(str=="秦皇岛") ThreeCode="SHP";
    if(str=="沈阳") ThreeCode="SHE";
    if(str=="桂林") ThreeCode="KWL";
    if(str=="张家界") ThreeCode="DYG";
    if(str=="呼和浩特") ThreeCode="HET";
    if(str=="南京") ThreeCode="NKG";
    if(str=="天津") ThreeCode="TSN";
    if(str=="温州") ThreeCode="WNZ";
    if(str=="大连") ThreeCode="DLC";
    if(str=="厦门") ThreeCode="XMN";
    if(str=="长沙") ThreeCode="CSX";
    if(str=="西安") ThreeCode="XIY";
    if(str=="重庆") ThreeCode="CKG";
    if(str=="三亚") ThreeCode="SYX";
    if(str=="青岛") ThreeCode="TAO";
    if(str=="哈尔滨") ThreeCode="HRB";

    return ThreeCode;
}

/* 预定航班 */
void FindFlight::on_Book_Button_clicked()
{
    int row = ui->TableView->currentIndex().row();
    QAbstractItemModel *model = ui->TableView->model();
    QModelIndex index = model->index(row,0);
    QString BookFlightNum = model->data(index).toString();//指定航班号
    QString info;
    if(row==-1)
    {
        info="请选择您要预定的航班";
        SentMessage__(info);
    }
    else
    {
        QFile login(FILE_LOGIN);
        QString LoginUser;//顾客姓名
        if(login.open(QFile::ReadOnly))
        {
            QTextStream  in_login(&login);
            LoginUser=in_login.readLine();
            if(LoginUser=="Visitor")
            {
                info="游客无法预定噢，请登录";
                SentMessage__(info);
            }
            else
            {
                // 判断余票量是否充足
                index=model->index(row,7);
                if( model->data(index).toString().toInt()>0)
                {
                    //保存预定信息
                    QFile book(FILE_BOOK);
                    if(book.open(QFile::ReadWrite|QFile::Append))
                    {
                        QTextStream in_book(&book);
                        in_book << LoginUser ;
                        in_book << "," << ui->TimeStart->text();
                        qDebug() << ui->TimeStart->text();
                        for(int i=0;i<8;i++)
                        {
                            index = model->index(row,i);
                            in_book << "," << model->data(index).toString() ;
                        }
                        info="预定成功！";
                        SentMessage__(info);
                    }
                    book.close();
                    //根据航班号找航班
                    Flight P=L.Front->next;
                    for(int g=0;g<L.length;g++)
                    {

                        if(P->FlightNum==BookFlightNum)
                        {
                            P->TicketsRest=QString::number(P->TicketsRest.toInt()-1);
                            P->TicketsRest.append("\r\n");
                            qDebug() << P->TicketsRest;
                            PrintL(ui);
                        }
                        P=P->next;
                    }
                    //重新把当前的链表传入文件中
                    QFile data(FILE_PATH);
                    if (data.open(QFile::WriteOnly )) {
                        QTextStream out(&data);
                        Flight P=L.Front->next;
                        for(int i=0;i<L.length;i++)
                        {
                            out << P->StartPla << ","<< P->EndPla << ","<< P->FlightNum << ","<< P->PlaneNum << ","<< P->TimeFly << ","<<
                                   P->TimeArr  << ","<< P->date   << ","<< P->Price     << ","<< P->Discount << ","<< P->PassNum << ","<<
                                   P->TicketsRest ;
                            P=P->next;
                        }
                        data.flush();
                        data.close();
                    }
                }
                else
                {
                    info="您要订购的航班没票啦！\n您已进入候补名单！";
                    QFile wait(FILE_BOOKQUEUE);
                    QStringList swait;
                    QString waitname,i,j,k;
                    QString waitnum;
                    QString strwait;
                    QString res="wjk";
                    int waitlength=0;
                    if (wait.open(QIODevice::ReadOnly | QIODevice::Text)){//求文件行数
                         QTextStream infom(&wait);
                         while (!infom.atEnd()) {
                             QString line = infom.readLine();
                             waitlength++;
                         }
                         wait.close();
                    qDebug()<<waitlength<<endl;
                    }
                    if(wait.open(QIODevice::ReadWrite))//把文件信息读入队列
                    {
                        QTextCodec *cwait = QTextCodec::codecForName("UTF-8");
                        for(int i=0;i<waitlength;i++)
                        {
                            strwait = cwait->toUnicode(wait.readLine());
                            swait = strwait.split(",");
                            waitname=swait[0];
                            waitnum=swait[1];
                            EnQueue(Q,waitname,waitnum,res);
                            DeQueue(Q,i,j,k);
                            qDebug() << waitname<<waitnum<<endl;
                        }
                        wait.close();
                    }

                    EnQueue(Q,LoginUser,BookFlightNum,res);//入队
                    QFile bookqueue(FILE_BOOKQUEUE);
                    if(bookqueue.open(QIODevice::WriteOnly|QFile::Append))
                    {
                        QTextStream customer(&bookqueue);
                        customer << LoginUser<<","<<BookFlightNum<<","<<res<<endl;

                    }
                    bookqueue.close();
                    SentMessage__(info);
                }

            }
            login.close();
        }
    }
}

/* 查询航班功能 */
void FindFlight::on_Find_Button_clicked()
{
    QString BookCityStart=ui->CityStart_ComboBox->currentText();
    QString BookCityEnd=ui->CityEnd_ComboBox->currentText();
    QString BookTimeStart=ui->TimeStart->text();
    qDebug() << "预定的出发城市为:" << BookCityStart << endl;
    qDebug() << "预定的抵达城市为:" << BookCityEnd << endl;
    qDebug() << "预定的出发日期为:" << BookTimeStart << endl;
    qDebug() << "预定的出发为星期:" << ToWeek(BookTimeStart) << endl;
    QStandardItemModel *model = new QStandardItemModel();
    ui->TableView->setModel(model);
    model->setColumnCount(8);
    model->setHeaderData(0,Qt::Horizontal,"航班号");
    model->setHeaderData(1,Qt::Horizontal,"出发城市");
    model->setHeaderData(2,Qt::Horizontal,"到达城市");
    model->setHeaderData(3,Qt::Horizontal,"出发时间");
    model->setHeaderData(4,Qt::Horizontal,"到达时间");
    model->setHeaderData(5,Qt::Horizontal,"折后票价");
    model->setHeaderData(6,Qt::Horizontal,"折扣");
    model->setHeaderData(7,Qt::Horizontal,"余票");
    Flight P;
    P=L.Front->next;
    int k=0; // 代表第k+1行
    for(int i=0;i<L.length;i++)
    {
        if(P->StartPla==BookCityStart && P->EndPla==BookCityEnd)
        {
            qDebug() << ToWeek(BookTimeStart) << endl;
            qDebug() << P->date.length() << endl;
            model->setItem(k,0,new QStandardItem(P->FlightNum));
            model->setItem(k,1,new QStandardItem(P->StartPla));
            model->setItem(k,2,new QStandardItem(P->EndPla));
            model->setItem(k,3,new QStandardItem(P->TimeFly));
            model->setItem(k,4,new QStandardItem(P->TimeArr));
            model->setItem(k,5,new QStandardItem(P->Price));
            model->setItem(k,6,new QStandardItem(P->Discount));
            model->setItem(k,7,new QStandardItem(P->TicketsRest));
            k++;
        }
        P=P->next;
    }
    //没有找到的情况
    if(!k)
    {
        k=0;
        Transform T[L.length];
        PathMaxtrix K[26];
        ShortPathTable D[26];
        int start=CityTable.indexOf(BookCityStart);
        int end=CityTable.indexOf(BookCityEnd);
        ShorttestPath_Dijkstra(G,start,K,D);
        Improve(K,D,start);
        ShortPath(start,end,K);
        for(int g=0;g<numbers;g++)
        {
           qDebug()<<Citys[g];
        }
        for(int j=0;j<Citys.length()-1;j++)
        {
            P=L.Front->next;
            for(int i=0;i<L.length;i++)
            {
                if(P->StartPla==Citys[j] && P->EndPla==Citys[j+1])
                {
                    model->setItem(k,0,new QStandardItem(P->FlightNum));
                    model->setItem(k,1,new QStandardItem(P->StartPla));
                    model->setItem(k,2,new QStandardItem(P->EndPla));
                    model->setItem(k,3,new QStandardItem(P->TimeFly));
                    model->setItem(k,4,new QStandardItem(P->TimeArr));
                    model->setItem(k,5,new QStandardItem(P->Price));
                    model->setItem(k,6,new QStandardItem(P->Discount));
                    model->setItem(k,7,new QStandardItem(P->TicketsRest));
                    k++;
                }
                P=P->next;
            }
        }
    }
}
/* 判断星期几 */
int ToWeek(QString data)
{
    int y,m,d;
    QStringList b=data.split("/");
    y=b[0].toInt();m=b[1].toInt();d=b[2].toInt();
    if(m==1||m==2) {
        m+=12;
        y--;
     }
    int week=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1;
    return week;
}

/* 发送消息 */
void SentMessage__(QString info)
{
    QMessageBox warning;
    warning.setWindowTitle("提示");
    warning.setText(info);
    warning.addButton("确定",QMessageBox::ActionRole);
    warning.exec();
}

FindFlight::~FindFlight()
{
    delete ui;
}
void ShorttestPath_Dijkstra(MGraph G,int v0,PathMaxtrix *P,ShortPathTable *D)
{
    int v,w,k,min;
    int final[G.vexnum];//final[w]=1表示已经求得顶点v0至v的最短路径
    for (v=0; v<G.vexnum; v++) {//初始化数据
        final[v]=0;//全部顶点初始化为未知最短路径状态
        D[v]=G.arcs[v0][v];//将与v0有连线的顶点加上权值
        P[v]=0;//初始化路径数组P为0
    }
    D[v0]=0;//自己到自己的路径为0
    final[v0]=1;//自回路无需求路径
    for (v=1; v<G.vexnum; v++) {//开始主循环，每次求得v0到某个v顶点的最短路径
        min=Inf;//当前已知离v0顶点的最近距离
        for (w=0; w<G.vexnum; w++) {//寻找离v0最近的点
            if (!final[w]&&D[w]<min) {
                k=w;
                min=D[w];//w顶点离v0更近
            }
        }
        final[k]=1;//将目前找到的最近的顶点置为1
        for (w=0; w<G.vexnum; w++) {//修正当前最短路径及距离
            if (!final[w]&&(min+G.arcs[k][w])<D[w]) {//如果经过v顶点的路径比现在这条路径的长度短的话
                D[w]=min+G.arcs[k][w];//说明找到的更短的路径，修改D[w]和P[w]
                P[w]=k;
            }
        }
    }
}
void ShortPath(int i,int j,PathMaxtrix *P)
{
    int x,e;
    Citys.clear();
    numbers=0;
    qDebug()<< "numbers:" << numbers;
    x=j;
    SqStack S;
    InitStack(S);
    Push(S, x);
    while (x!=i) {
        if (P[x]==65535) {
            printf("不可达!\n");
            return;
        }
        x=P[x];
        Push(S, x);
    }
    while (!StackEmpty(S)) {
        Pop(S, e);
//        T[k]=e;
        qDebug() << e;
        Citys << CityTable.at(e);
        numbers++;
//        k++;
    }

}
void InitStack(SqStack &S)
{
    S.base=(int *)malloc(sizeof(int)*100);
    if (!S.base) {
        exit(OVERFLOW);
    }
    S.top=S.base;
    S.stacksize=100;
}
void Push(SqStack &S,int e)
{//    if (S.top-S.base>=S.stacksize) {
    //        S.base=(SElemType *)realloc(S.base, sizeof(SElemType)*(INT_STACK_SIZE+STACKINCREMENT));
    //        if (!S.base) {
    //            exit(OVERFLOW);
    //        }
    //        S.top=S.base+S.stacksize;
    //        S.stacksize+=STACKINCREMENT;
    //    }
    *S.top++=e;
}
void Pop(SqStack &S,int &e)
{
    if (S.base==S.top) {
        return;
    }
    e=*--S.top;
}
int StackEmpty(SqStack S)
{
    if (S.top==S.base) {
        return 1;
    }
    else return 0;
}
void Improve(PathMaxtrix *P,ShortPathTable *D,int k)
{
    int i;
    for (i=0; i<26; i++) {
        if (D[i]==65535) {
            P[i]=65535;
        }
    }
    for (i=0; i<26; i++) {
        if (i!=k&&P[i]==0) {
            P[i]=k;
        }
    }
}

/* 旅游推荐 */
void FindFlight::on_CityRaider_Button_clicked()
{
    CityRaider cityraiders;
    if(cityraiders.exec() == QDialog::Accepted)
    {

    }
}
void PrintL(Ui::FindFlight *ui)
{
    QStandardItemModel *model = new QStandardItemModel();
    ui->TableView->setModel(model);
    model->setColumnCount(8);
    model->setHeaderData(0,Qt::Horizontal,"航班号");
    model->setHeaderData(1,Qt::Horizontal,"出发城市");
    model->setHeaderData(2,Qt::Horizontal,"到达城市");
    model->setHeaderData(3,Qt::Horizontal,"出发时间");
    model->setHeaderData(4,Qt::Horizontal,"到达时间");
    model->setHeaderData(5,Qt::Horizontal,"折后票价");
    model->setHeaderData(6,Qt::Horizontal,"折扣");
    model->setHeaderData(7,Qt::Horizontal,"余票");
    Flight P=L.Front->next;
    // 显示数据并居中
    ui->TableView->horizontalHeader()->setStretchLastSection(true);//关键
    for(int i=0;i<L.length;i++)
    {
        model->setItem(i,0,new QStandardItem(P->FlightNum));
        model->setItem(i,1,new QStandardItem(P->StartPla));
        model->setItem(i,2,new QStandardItem(P->EndPla));
        model->setItem(i,3,new QStandardItem(P->TimeFly));
        model->setItem(i,4,new QStandardItem(P->TimeArr));
        model->setItem(i,5,new QStandardItem(P->Price));
        model->setItem(i,6,new QStandardItem(P->Discount));
        model->setItem(i,7,new QStandardItem(P->TicketsRest));
        //居中
        for(int j=0;j<7;j++)
            model->item(i,j)->setTextAlignment(Qt::AlignCenter);
        P=P->next;
    }

}
void InitQueue(QueueList &Q)//队列数据结构
{
    Q.front=(QueuePtr)malloc(sizeof(QNode));
    Q.rear=Q.front;
    Q.front->next=NULL;
}
void EnQueue(QueueList &Q,QString nam,QString planenu,QString res)
{
    QueuePtr P;
    P=new QNode;
    P->name=nam;
    P->planenum=planenu;
    P->rest=res;
    P->next=NULL;
    Q.rear->next=P;
    Q.rear=P;
}
void DeQueue(QueueList &Q,QString &nam,QString &planenu,QString &res)
{
    if (Q.front==Q.rear) {
        return;
    }
    QueuePtr P;
    P=Q.front->next;
    nam=P->name;
    planenu=P->planenum;
    res=P->rest;
    Q.front->next=P->next;
    if (P==Q.rear) {
        Q.rear=Q.front;
    }
    free(P);
}
