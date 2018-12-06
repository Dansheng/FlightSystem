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
    ui->CityStart_comboBox->addItem(tr("北京"));
    ui->CityStart_comboBox->addItem(tr("西安"));
    ui->CityStart_comboBox->addItem(tr("厦门"));
    ui->CityStart_comboBox->addItem(tr("上海浦东"));
    ui->CityStart_comboBox->addItem(tr("上海虹桥"));
    ui->CityStart_comboBox->addItem(tr("深圳"));
    ui->CityStart_comboBox->addItem(tr("广东"));
    // EndStart
    ui->CityEnd_comboBox->addItem(tr("北京"));
    ui->CityEnd_comboBox->addItem(tr("西安"));
    ui->CityEnd_comboBox->addItem(tr("厦门"));
    ui->CityEnd_comboBox->addItem(tr("上海浦东"));
    ui->CityEnd_comboBox->addItem(tr("上海虹桥"));
    ui->CityEnd_comboBox->addItem(tr("深圳"));
    ui->CityEnd_comboBox->addItem(tr("广东"));
    ReadData();
}
//读取csv文件中的信息，将其串成一个单链表

void ReadData()
{
    QFile csvFile(FILE_PATH);//创建QFile对象 csvFile，File_PATH为csvFile文件保存的路径及类型
    QStringList CSVList,list;  //字符串列表
    QString Str;
    CSVList.clear();//清空
    Flight S,P;
//    FlightList L;

    if(csvFile.open(QIODevice::ReadWrite))
    {
        QTextCodec *codec = QTextCodec::codecForName("UTF-8");
        Str = codec->toUnicode(csvFile.readLine());
        list = Str.split(",");
        S= new AirInfoNode;
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

    }
    csvFile.close();

    qDebug() << S->StartPla << endl;
    qDebug() << S->TicketsRest << endl;

//    Str= codec->toUnicode(stream.readLine());
//    qDebug() << Str << endl;
//    list=Str.split(",");
//    qDebug() << list.at(0) << endl;
//    qDebug() << list.at(1) << endl;
//    qDebug() << list.at(2) << endl;
//    qDebug() << list.at(3) << endl;

//    L.Front->next=NULL;
//    P=L.Front;
//    int i=0;
//    if (csvFile.open(QIODevice::ReadWrite))  //打开成功
//       {
//           QTextStream stream(&csvFile); //读取文件csvFile
//            while (!stream.atEnd())
//               {
//                   Str=stream.readLine(i);//读取txt文件中每一行的航班信息，作为单链表的一个结点
//                   list =Str.split(",");
//                   S=new AirInfoNode;
//                   S->StartPla=list[0];
//                   S->EndPla=list[1];
//                   S->FlightNum=list[2];
//                   S->PlaneNum=list[3];
//                   S->TimeFly=list[4];
//                   S->TimeArr=list[5];
//                   S->Price=list[6];
//                   S->Discount=list[7];
//                   S->PassNum=list[8].toInt();//乘员定额字符串转数字
//                   S->TicketsRest=list[9].toInt();//余票量字符串转数字
//                   S->next=NULL;
//                   P->next=S;
//                   P=P->next;
//                   L.Rear=S;
//                   i++;
//                }
//             csvFile.close();
//            }
}

FindFlight::~FindFlight()
{
    delete ui;
}

void FindFlight::on_pushButton_clicked()
{

}
