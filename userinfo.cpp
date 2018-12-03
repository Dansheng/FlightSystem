#include "userinfo.h"
#include "ui_userinfo.h"
#include <QDebug>
#include <QFile>
UserInfo::UserInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInfo)
{
    ui->setupUi(this);
    QFile data("..\\assets\\user\\login.txt");
    if (data.open(QFile::ReadOnly | QIODevice::Text)) {
        QTextStream in(&data);
        QString Name=in.readLine();
        if(Name=="Visitor")
        {
            ui->UserName_label->hide();
            ui->UserName->setText("您好，您是游客登陆");
        }
        else{
            ui->UserName->setText(Name);
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
