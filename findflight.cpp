#include "findflight.h"
#include "ui_findflight.h"
#include "QFile"
#include "QDebug"
#include <QTextCodec>
typedef struct AirInfoNode{
    QString StartPla;//始发站
    QString EndPla;//终点站
    QString FlightNum;//航班号
    QString PlaneNum;//飞机号
    QString TimeFly;//起飞时间
    QString TimeArr;//降落时间
    QString date;//星期几
    QString  Discount;//票价折扣
    int  Price;//票价
    int PassNum;//乘员定额
    int TicketsRest;//余票量
    struct AirInfoNode *next;//下一个航班信息
}AirInfoNode,*Flight;
typedef struct FlightList{
    Flight Front;//指向航线头指针
    Flight Rear;//指向航线尾指针
    int length;
}FlightList;

const QString FILE_PATH("..\\assets\\flight\\flight.csv");//File_PATH为文件保存的路径及类型
//const QString FILE_PATH("/Users/wanghanyi/Desktop/FlightSystem/assets/flight");//File_PATH为文件保存的路径及类型

void ReadData();
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
    // EndStart
    ui->CityStart_ComboBox->addItem(tr("北京"));
    ui->CityStart_ComboBox->addItem(tr("西安"));
    ui->CityStart_ComboBox->addItem(tr("厦门"));
    ui->CityStart_ComboBox->addItem(tr("上海浦东"));
    ui->CityStart_ComboBox->addItem(tr("上海虹桥"));
    ui->CityStart_ComboBox->addItem(tr("深圳"));
    ui->CityStart_ComboBox->addItem(tr("广东"));
    ReadData();
}
//读取csv文件中的信息，将其串成一个单链表

void ReadData()
{
    QFile csvFile(FILE_PATH);//创建QFile对象 csvFile，File_PATH为csvFile文件保存的路径及类型
    QStringList CSVList,list;  //字符串列表
    QString Str;
    CSVList.clear();//清空
    Flight S;
    // 初始化L,并以L的Front为头结点
    FlightList L;
    L.length=0;
    L.Front=new AirInfoNode; // 头结点
    L.Front->next=NULL; // 置L的头结点为空
    L.Rear->next=NULL;
    if(csvFile.open(QIODevice::ReadWrite))
    {
        QTextCodec *codec = QTextCodec::codecForName("UTF-8");

        // 单链表
        int count=18; // 目前已知数据有18条，由于csv文件的行数读取 利用at.end()方法并不奏效
                      // 因此暂时设定为常数
                      // 解决该问题的思路是，设立另外一个保存csv文件行数的count.txt 每次插入数据更新 count.txt
        for(int i=0;i<count;i++)
        {
            Str = codec->toUnicode(csvFile.readLine());
            list = Str.split(",");
            S= new AirInfoNode;
            // 储存数据
            S->StartPla=list[0];
            S->EndPla=list[1];
            S->FlightNum=list[2];
            S->PlaneNum=list[3];
            S->TimeFly=list[4];
            S->TimeArr=list[5];
            S->date=list[6];
            S->Price=list[7].toInt();
            S->Discount=list[8];
            S->PassNum=list[8].toInt();
            S->TicketsRest=list[9].toInt();
            // 头插法
            S->next=L.Front->next;
            L.Front->next=S;
            L.length++;
        }
        qDebug() << "成功读入行数:" << L.length << endl;
        // 事实上，L.Front->next指向的是最后一个插入的元素
        // L.Rear 指向的是第一个插入的元素
        // 因此我考虑是否调换Front 和 Rear的名称
    }
    csvFile.close();
    qDebug() << S->StartPla << endl;
    qDebug() << S->TicketsRest << endl;

}

FindFlight::~FindFlight()
{
    delete ui;
}

void FindFlight::on_pushButton_clicked()
{

}
