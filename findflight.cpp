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
// 整个文件还比较冗长，后期再进行降维优化。

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
// 文件地址
/* 全局变量设定 */
FlightList L;

//const QString FILE_PATH("..\\assets\\flight\\flight.csv");//File_PATH为文件保存的路径及类型（航线数据）
//const QString FILE_BOOK("..\\assets\\user\\book.txt");
//const QString FILE_LOGIN("..\\assets\\user\\login.txt");
//const QString FILE_FLIGHTCOUNTS("..\\assets\\flight\\count.txt");

//const QString FILE_PATH("/Users/wanghanyi/Desktop/FlightSystem/assets/flight/flight.csv");//File_PATH为文件保存的路径及类型



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

FindFlight::FindFlight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindFlight)
{
    ui->setupUi(this);
    QStringList CityTable,HeaderTable;
    CityTable << "北京" << "西安" << "厦门" << "上海浦东" << "上海虹桥" << "深圳" << "广州" << "重庆"
              << "长沙" << "张家界" << "海口" << "昆明" << "南京" << "成都" << "武汉" << "杭州" << "秦皇岛"
              << "三亚" <<"青岛" << "温州" << "沈阳" << "桂林" << "呼和浩特" << "哈尔滨" << "大连" << "天津";
    HeaderTable << "航班号" << "出发城市" << "到达城市" << "出发时间" << "到达时间" << "折后票价" << "折扣" << "余票" ;
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
        for(int j=0;j<8;j++)
            model->item(i,j)->setTextAlignment(Qt::AlignCenter);
        P=P->next;
    }
    // 设置初始时间
    QDateTime Current_Date_Time =QDateTime::currentDateTime();
    ui->TimeStart->setDateTime(Current_Date_Time);


}
/* 读取数据 */
void ReadData(Flight &L,int length)
{
    QFile csvFile(FILE_PATH);//创建QFile对象 csvFile，File_PATH为csvFile文件保存的路径及类型
    QStringList CSVList,list;  //字符串列表
    QString Str;
    CSVList.clear();//清空
    Flight S;
    // 初始化L,并以L的Front为头结点
    if(csvFile.open(QIODevice::ReadWrite))
    {
        QTextCodec *codec = QTextCodec::codecForName("UTF-8");
        // 单链表
        for(int i=0;i<length;i++)
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
            S->next=L->next;
            L->next=S;
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
    QString BookFlightNum = model->data(index).toString();
    QString info;
    if(row==-1)
    {
        info="请选择您要预定的航班";
        SentMessage__(info);
    }
    else
    {
        QFile login(FILE_LOGIN);
        QString LoginUser;
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
                //保存预定信息
                QFile book(FILE_BOOK);
                if(book.open(QFile::ReadWrite|QFile::Append))
                {
                    QTextStream in_book(&book);
                    in_book << LoginUser ;
                    for(int i=0;i<8;i++)
                    {
                        index = model->index(row,i);
                        in_book << "," << model->data(index).toString() ;
                        info="预定成功！";
                        SentMessage__(info);
                    }
                }
                book.close();
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
