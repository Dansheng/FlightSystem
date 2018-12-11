#include "orderquery.h"
#include "ui_orderquery.h"
#include <QFile>
#include <const.h>
#include <QTextCodec>
#include <QDebug>
#include <QMessageBox>
typedef struct AirInfoNode2{
    QString bookname;//订票人
    QString StartPla;//始发站
    QString EndPla;//终点站
    QString FlightNum;//航班号
    QString TimeFly;//起飞时间
    QString TimeArr;//降落时间
    QString date;//20180921
    QString Discount;//票价折扣
    QString Price;//票价
    QString TicketsRest;//余票量
    struct AirInfoNode2 *next;//下一个航班信息
}AirInfoNode2,*Flight2;
void SentMessage___(QString info);
typedef struct FlightList2{
    Flight2 Front;//指向航线头指针
    Flight2 Rear;//指向航线尾指针
    int length;
    QString loginusername;
}FlightList2;
FlightList2 L;
QStringList datelog;
QStringList StartPlalog;
QStringList EndPlalog;
QStringList FlightNumlog;
QStringList TimeFlylog;
QStringList TimeArrlog;
QStringList Pricelog;
QStringList Discountlog;
QStringList TicketsRestlog;
OrderQuery::OrderQuery(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderQuery)
{
    ui->setupUi(this);
    ui->CityStart->setAlignment(Qt::AlignRight);
    QFile login(FILE_LOGIN);
    QFile book(FILE_BOOK);
    QString Str;
    QStringList list;
    Flight2 S,K=L.Front;
    L.length=0;
    L.Front=new AirInfoNode2; // 头结点
    L.Front->next=NULL;
    K=L.Front;
    int booklength=0;//book信息条数
    if(login.open(QFile::ReadOnly))
    {
        QTextStream in(&login);
        L.loginusername= in.readLine();
        login.close();

    }
     if (book.open(QIODevice::ReadOnly))
     {
         QTextStream in(&book);
         while (!in.atEnd()) {
            QString line=in.readLine();
            booklength++;
         }
         book.close();
     }
    qDebug() << booklength;

    if(book.open(QIODevice::ReadWrite))
    {
        QTextCodec *codec = QTextCodec::codecForName("UTF-8");
        // 单链表
        for(int k=0;k<booklength;k++)
        {
            Str = codec->toUnicode(book.readLine());
            list = Str.split(",");
            qDebug() << list << endl;
            S= new AirInfoNode2;
            // 储存数据
            S->bookname=list[0];
            S->date=list[1];
            S->StartPla=list[3];
            S->EndPla=list[4];
            S->FlightNum=list[2];
            S->TimeFly=list[5];
            S->TimeArr=list[6];
            S->Price=list[7];
            S->Discount=list[8];
            S->TicketsRest=list[9];
            // 头插法
            S->next=K->next;
            K->next=S;
            L.length++;
        }
        book.close();
    }

    for(int i=0;i<L.length;i++)
    {
        K=L.Front->next;
        if(K->bookname==L.loginusername)
        {
            datelog<<K->date;
            StartPlalog<<K->StartPla;
            EndPlalog<<K->EndPla;
            FlightNumlog<<K->FlightNum;
            TimeFlylog<<K->TimeFly;
            TimeArrlog<<K->TimeArr;
            Pricelog<<K->Price;
            Discountlog<<K->Discount;
            TicketsRestlog<<K->TicketsRest;
        }
    }
    if(datelog.length())
    {
        ui->CityStart->setText(StartPlalog[0]);
        ui->CityEnd->setText(EndPlalog[0]);
        ui->PlaneNumber->setText(FlightNumlog[0]);
        ui->TimeStart->setText(TimeFlylog[0]);
        ui->TimeEnd->setText(TimeArrlog[0]);
        ui->Money->setText(Pricelog[0]);
        ui->Data->setText(datelog[0]);
    }
    else
    {
        qDebug() << "sorry" << endl;
    }


}

OrderQuery::~OrderQuery()
{
    delete ui;
}

void OrderQuery::on_Close_Btn_clicked()
{
    QString FliNum=ui->PlaneNumber->text();
    qDebug() << FliNum;

    Flight2 K=L.Front;
    Flight2 P=K;
    /* 删除结点 */
    for(int i=0;i< L.length; i++)
    {
        K=K->next;
        if(K->FlightNum==FliNum)
        {
            P->next=K->next;
            L.length--;
            free(K);
            qDebug() << "shanchu";
            break;
        }
        else
        {
            P=K;
            qDebug() << "next";

        }
    }

    /* 更新文件 */
    QFile up(FILE_BOOK);
    if(up.open(QFile::WriteOnly))
    {
        qDebug() << "2";
        QTextStream in(&up);
        K=L.Front->next;
        for(int i=0;i<L.length;i++)
        {
            in << L.loginusername << "," << K->date << "," << K->FlightNum << "," << K->StartPla << ","
               << K->EndPla << "," << K->TimeFly << "," << K->TimeArr << "," << K->Price << "," << K->Discount << ","
               << K->TicketsRest ;
            K=K->next;
        }
        up.close();
    }
    if(datelog.length()>=1)
    {
        datelog.clear();
        StartPlalog.clear();
        EndPlalog.clear();
        FlightNumlog.clear();
        TimeFlylog.clear();
        TimeArrlog.clear();
        Pricelog.clear();
        Discountlog.clear();
        TicketsRestlog.clear();
        int booklength=0;//book信息条数
        QFile book(FILE_BOOK);
        QString Str;
        QStringList list;
        Flight2 S,K=L.Front;
        if (book.open(QIODevice::ReadOnly))
         {
             QTextStream in(&book);
             while (!in.atEnd()) {
                QString line=in.readLine();
                booklength++;
             }
             book.close();
         }
        if(book.open(QIODevice::ReadWrite))
        {
            QTextCodec *codec = QTextCodec::codecForName("UTF-8");
            // 单链表
            for(int k=0;k<booklength;k++)
            {
                Str = codec->toUnicode(book.readLine());
                list = Str.split(",");
                qDebug() << list << endl;
                S= new AirInfoNode2;
                // 储存数据
                S->bookname=list[0];
                S->date=list[1];
                S->StartPla=list[3];
                S->EndPla=list[4];
                S->FlightNum=list[2];
                S->TimeFly=list[5];
                S->TimeArr=list[6];
                S->Price=list[7];
                S->Discount=list[8];
                S->TicketsRest=list[9];
                // 头插法
                S->next=K->next;
                K->next=S;
                L.length++;
            }
            book.close();
        }
        for(int i=0;i<L.length;i++)
        {
            K=L.Front->next;
            if(K->bookname==L.loginusername)
            {
                datelog<<K->date;
                StartPlalog<<K->StartPla;
                EndPlalog<<K->EndPla;
                FlightNumlog<<K->FlightNum;
                TimeFlylog<<K->TimeFly;
                TimeArrlog<<K->TimeArr;
                Pricelog<<K->Price;
                Discountlog<<K->Discount;
                TicketsRestlog<<K->TicketsRest;
            }
        }
    }
    qDebug() << datelog[0] << "[0]" << endl;
    /* 如果此时datelog并不是空的，也就是还有预定航班 */
    if(datelog.length())
    {
        ui->CityStart->setText(StartPlalog[0]);
        ui->CityEnd->setText(EndPlalog[0]);
        ui->PlaneNumber->setText(FlightNumlog[0]);
        ui->TimeStart->setText(TimeFlylog[0]);
        ui->TimeEnd->setText(TimeArrlog[0]);
        ui->Money->setText(Pricelog[0]);
        ui->Data->setText(datelog[0]);
    }
    else
    {
        qDebug() << "sorry" << endl;
        QString info="您没有预定的航班信息噢~";
        SentMessage___(info);
        accept();
    }

}
void SentMessage___(QString info)
{
    QMessageBox warning;
    warning.setWindowTitle("提示");
    warning.setText(info);
    warning.addButton("确定",QMessageBox::ActionRole);
    warning.exec();
}

