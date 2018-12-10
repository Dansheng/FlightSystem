#include "orderquery.h"
#include "ui_orderquery.h"
#include <QFile>
#include <const.h>
#include <QTextCodec>
#include <QDebug>
OrderQuery::OrderQuery(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderQuery)
{
    ui->setupUi(this);
    ui->CityStart->setAlignment(Qt::AlignRight);

    // to do :读取数据并且保存在qstring类型里
    //
    QStringList date;
    QStringList timefly;
    QStringList timeend;
    QStringList citystart;
    QStringList cityend;
    QStringList lineinfo;
    QStringList flightnumber;
    QString name;
    QString info;
    QString loginuser;
    QFile data(FILE_BOOK);
    QFile log(FILE_LOGIN);
    int count=0;
    if (data.open(QIODevice::ReadOnly | QIODevice::Text)){
         QTextStream infom(&data);
         while (!infom.atEnd()) {
             QString line = infom.readLine();
             count++;
         }
      data.close();
    }
         qDebug() << count <<endl;
     //to do
    if(data.open(QFile::ReadOnly))
    {
       QTextCodec *in = QTextCodec::codecForName("UTF-8");
        info = in->toUnicode(data.readLine());
        if (log.open(QFile::ReadOnly | QIODevice::Text))
        {
            QTextStream login(&log);
            loginuser=login.readLine();
            log.close();
        }
        qDebug() << loginuser << endl;
        if(loginuser!="Visitor")
        {
            for(int i=0;i<count;i++)
            {
                lineinfo=info.split(",");
                name=lineinfo[0];
                qDebug() << lineinfo <<endl;
                if(name==loginuser)
                {
                    date << lineinfo[1];
                    timefly << lineinfo[5];
                    timeend << lineinfo[6];
                    citystart << lineinfo[3];
                    cityend << lineinfo[4];
                    flightnumber<<lineinfo[2];
                }
            }
         }
    }
    // 默认输出为第一条预定的消息
   QString temp;
   temp=citystart.at(0);
   qDebug() <<temp;
//    qDebug() <<citystart.at(0);
//    ui->CityStart->setText(citystart[0]);

}

OrderQuery::~OrderQuery()
{
    delete ui;
}
