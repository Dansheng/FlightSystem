#include "register.h"
#include "ui_register.h"
#include <QString>
#include <QLine.h>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->PassWord_Edit->setEchoMode(QLineEdit::Password);
    ui->PassWordTwo_Edit->setEchoMode(QLineEdit::Password);
    ui->IdCard_Edit->setMaxLength(18);
    ui->IdCard_Edit->setMaxLength(18);
    // 添加初始化的效果
}

Register::~Register()
{
    delete ui;
}
void SentMessage(QString info)
{
    QMessageBox warning;
    warning.setWindowTitle("提示");
    warning.setText(info);
    warning.addButton("确定",QMessageBox::ActionRole);
    warning.exec();
}

void Register::on_Sure_Button_clicked()
{
    // read the data
    QString UserName=ui->UserName_Edit->text().trimmed();
    QString PassWord=ui->PassWord_Edit->text();
    QString Place=ui->Place_Edit->text();
    QString PassWordTwo=ui->PassWordTwo_Edit->text();
    QString PhoneNumber=ui->PhoneNumber_Edit->text();
    QString IdCard=ui->IdCard_Edit->text();
    QString RealName=ui->RealName_Edit->text();
    //declare the warning windows
    QString info;
    // to do: 完善表单验证
    //用户名校验
    int flag=0;
    for(int i=0;i<RealName.length();i++)
    {
        if((RealName.at(i)>=1 &&RealName.at(i)<=64)||(RealName.at(i)>=91&&RealName.at(i)<=96)||(RealName.at(i)>=123&&RealName.at(i)<=127))
        {
            flag=1;
        }
    }

    if(UserName.length()==0)
    {
        info="用户名不能为空";
        SentMessage(info);
        qDebug() << "1" << endl;
    }
    else if(UserName.length()>=15)
    {
        info="用户名不能超过15个字符";
        SentMessage(info);
        qDebug() << "2" << endl;
    }
    else if(PassWord.length()==0)
    {
        info="密码不能为空";
        SentMessage(info);
        qDebug() << "3" << endl;
    }
    else if(PassWord!=PassWordTwo)
    {
        info="您输入的两次密码不同";
        SentMessage(info);
        qDebug() << "4" << endl;
    }
    else if(RealName.length()==0)
    {
        info="真实姓名不能为空";
        SentMessage(info);
        qDebug() << "5" << endl;
    }
    else if(flag)
    {
        info="真实姓名不合法";
        SentMessage(info);
    }
    else if(PhoneNumber.length()==0)
    {
        info="手机号码不能为空";
        SentMessage(info);
        qDebug() << "7" << endl;
    }
    else if(PhoneNumber.length()!=11)
    {
        info="您的手机号输入有误,请重新输入";
        SentMessage(info);
        qDebug() << "8" << endl;
    }
    else if(PhoneNumber.mid(0,2)!="13"&&PhoneNumber.mid(0,2)!="18"&&(PhoneNumber.mid(0,2)!="15"||PhoneNumber.mid(0,3)=="154")&&PhoneNumber.mid(0,3)!="145"&&PhoneNumber.mid(0,3)!="147")
    {
        info="您的手机号不合法,请重新输入";
        SentMessage(info);
        qDebug() << "9" << endl;
    }
    else if(IdCard.length()!=18)
    {
        info="身份证号码不合法";
        SentMessage(info);
    }
    else
    {
        qDebug() << "10" << endl;
        // to do: write the data to csv

        // issue: 这里使用相对路径原因是工作路径和exe文件构建路径不在一个地方
        // win平台下使用管理员模式打开合适
        QFile data("..\\assets\\user\\user.csv");
        if (data.open(QFile::WriteOnly | QFile::Append))
        {
            qDebug() << "successful!!" << endl;
            QTextStream out(&data);
            out << UserName << "," << PassWord << "," << Place << "," << RealName << "," << PhoneNumber << "," << IdCard <<endl;
            data.flush();
            data.close();
            info="注册成功";
            SentMessage(info);
        }
        accept();
    }
}



void Register::on_Sure_Button_pressed()
{
//    ui->Sure_Button->setStyleSheet("border-image: url(:/images/find_btn.png);");
}

void Register::on_Sure_Button_released()
{
    ui->Sure_Button->setStyleSheet("border-image: url(:/images/sure_btn.png);");
}
