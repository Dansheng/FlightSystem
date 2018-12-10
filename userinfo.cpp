#include "userinfo.h"
#include "ui_userinfo.h"
#include <QDebug>
#include <QFile>
#include <const.h>
#include <QTextCodec>
UserInfo::UserInfo(QWidget *parent) :
    QDialog(parent),
//    QDialog(parent,Qt::Dialog|Qt::FramelessWindowHint),
    ui(new Ui::UserInfo)
{
    ui->setupUi(this);
    QFile data(FILE_LOGIN);
    QFile user(FILE_USERS);
    QFile usercount(FILE_USERCOUNTS);
    int length;
    if(usercount.open(QFile::ReadOnly |QFile::Text))
    {
        QTextStream counts(&usercount);
        length= counts.readLine().toInt();
        qDebug() << "length:" << length << endl;
        usercount.close();
    }
    if (data.open(QFile::ReadOnly | QIODevice::Text)) {
        QTextStream in(&data);
        QString Name=in.readLine();
        QString list;
        QString name;
        QStringList User;
        if(Name=="Visitor")
        {
            ui->UserName->setText("您好，您是游客登陆");
        }
        else{
            ui->UserName->setText(Name);

            if (user.open(QFile::ReadOnly | QIODevice::Text))
            {
                for(int i=0;i<length;i++){
                    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
                    list = codec->toUnicode(user.readLine());
                    User = list.split(",");
                    name=User[0];
                    if(name==Name)
                    {
                        ui->Place->setText(User[2]);
                        ui->RealName->setText(User[3]);
                        ui->PhoneNumber->setText(User[4]);
                        ui->IdCard->setText(User[5]);
                    }
            }
            }
        }

        qDebug() << Name <<endl;
        data.flush();
        data.close();
    }
}

UserInfo::~UserInfo()
{
    delete ui;
}

