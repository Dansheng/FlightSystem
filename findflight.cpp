#include "findflight.h"
#include "ui_findflight.h"
#include "QFile"
#include "QDebug"
#include <QTextCodec>  // 用于文件转码，解决乱码问题
#include <QStandardItemModel>  // TableView 控件
#include <QChar>
typedef struct AirInfoNode{
    QString StartPla;//始发站
    QString EndPla;//终点站
    QString FlightNum;//航班号
    QString PlaneNum;//飞机号
    QString TimeFly;//起飞时间
    QString TimeArr;//降落时间
    QString date;//星期几
    QString  Discount;//票价折扣
    QString  Price;//票价
    QString PassNum;//乘员定额
    QString TicketsRest;//余票量
    struct AirInfoNode *next;//下一个航班信息
}AirInfoNode,*Flight;
typedef struct FlightList{
    Flight Front;//指向航线头指针
    Flight Rear;//指向航线尾指针
    int length;
}FlightList;

const QString FILE_PATH("..\\assets\\flight\\flight.csv");//File_PATH为文件保存的路径及类型
//const QString FILE_PATH("/Users/wanghanyi/Desktop/FlightSystem/assets/flight/flight.csv");//File_PATH为文件保存的路径及类型

void ReadData(Flight &L);//文件中读取数据
void RaidSort(Flight &L);//基数排序
QString Trans(QString str);//三字码
void InitList(Flight &L);//初始化
int ListEmpty(Flight L);//判空
void MoveNode(Flight &P,Flight &L);//移动结点
FindFlight::FindFlight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindFlight)
{
    ui->setupUi(this);
    // CityStart
    ui->CityStart_ComboBox->addItem(tr("北京"));
    ui->CityStart_ComboBox->addItem(tr("西安"));
    ui->CityStart_ComboBox->addItem(tr("厦门"));
    ui->CityStart_ComboBox->addItem(tr("上海浦东"));
    ui->CityStart_ComboBox->addItem(tr("上海虹桥"));
    ui->CityStart_ComboBox->addItem(tr("深圳"));
    ui->CityStart_ComboBox->addItem(tr("广东"));
    ui->CityStart_ComboBox->addItem(tr("重庆"));
    ui->CityStart_ComboBox->addItem(tr("长沙"));
    ui->CityStart_ComboBox->addItem(tr("张家界"));
    ui->CityStart_ComboBox->addItem(tr("海口"));
    ui->CityStart_ComboBox->addItem(tr("昆明"));
    ui->CityStart_ComboBox->addItem(tr("南京"));

    // EndStart
    ui->CityStart_ComboBox->addItem(tr("北京"));
    ui->CityStart_ComboBox->addItem(tr("西安"));
    ui->CityStart_ComboBox->addItem(tr("厦门"));
    ui->CityStart_ComboBox->addItem(tr("上海浦东"));
    ui->CityStart_ComboBox->addItem(tr("上海虹桥"));
    ui->CityStart_ComboBox->addItem(tr("深圳"));
    ui->CityStart_ComboBox->addItem(tr("广东"));
    ui->CityStart_ComboBox->addItem(tr("重庆"));
    ui->CityStart_ComboBox->addItem(tr("长沙"));
    ui->CityStart_ComboBox->addItem(tr("张家界"));
    ui->CityStart_ComboBox->addItem(tr("海口"));
    ui->CityStart_ComboBox->addItem(tr("昆明"));
    ui->CityStart_ComboBox->addItem(tr("南京"));
    //TableView
    QStandardItemModel *model = new QStandardItemModel();
    model->setColumnCount(8);
    model->setHeaderData(0,Qt::Horizontal,"航班号");
    model->setHeaderData(1,Qt::Horizontal,"出发城市");
    model->setHeaderData(2,Qt::Horizontal,"到达城市");
    model->setHeaderData(3,Qt::Horizontal,"出发时间");
    model->setHeaderData(4,Qt::Horizontal,"到达时间");
    model->setHeaderData(5,Qt::Horizontal,"折后票价");
    model->setHeaderData(6,Qt::Horizontal,"折扣");
    model->setHeaderData(7,Qt::Horizontal,"余票");
    ui->TableView->setModel(model);
    FlightList L;
    L.length=0;
    L.Front=new AirInfoNode; // 头结点
    L.Front->next=NULL; // 置L的头结点为空
//    L.Rear->next=NULL;
    ReadData(L.Front);
    RaidSort(L.Front);
    Flight P=L.Front->next;
    for(int i=0;i<18;i++)
    {
        for(int j=0;j<8;j++)
        {
            model->setItem(i,0,new QStandardItem(P->FlightNum));
            model->setItem(i,1,new QStandardItem(P->StartPla));
            model->setItem(i,2,new QStandardItem(P->EndPla));
            model->setItem(i,3,new QStandardItem(P->TimeFly));
            model->setItem(i,4,new QStandardItem(P->TimeArr));
            model->setItem(i,5,new QStandardItem(P->Price));
            model->setItem(i,6,new QStandardItem(P->Discount));
            model->setItem(i,7,new QStandardItem(P->TicketsRest));
        }
        P=P->next;
    }



}
//读取csv文件中的信息，将其串成一个单链表

void ReadData(Flight &L)
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
        qDebug() << "111" << endl;
        // 单链表
        int count=18; // 目前已知数据有18条，由于csv文件的行数读取 利用at.end()方法并不奏效
                      // 因此暂时设定为常数
                      // 解决该问题的思路是，设立另外一个保存csv文件行数的count.txt 每次插入数据更新 count.txt
        for(int i=0;i<count;i++)
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
        // 事实上，L.Front->next指向的是最后一个插入的元素
        // L.Rear 指向的是第一个插入的元素
        // 因此我考虑是否调换Front 和 Rear的名称
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
void RaidSort(Flight &L)
{
       AirInfoNode*Bucket[26];
       int i,j,chToin;
       QString str,toThree;
       QChar Thumb;
       for (i=0; i<26; i++) {
           InitList(Bucket[i]);//初始化26个桶
       }
       int p=0;
       for (j=2; j>=0; j--) {//三字码
           while (!ListEmpty(L)) {
               str=L->next->StartPla;//获取首元结点的元素
               toThree=Trans(str);
               Thumb=toThree.at(j);
               chToin=(int)Thumb.unicode()-'A';
               MoveNode(Bucket[chToin], L);//把结点放进相应的桶中
               qDebug() << ++p << endl;
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
    return ThreeCode;
}
FindFlight::~FindFlight()
{
    delete ui;
}
