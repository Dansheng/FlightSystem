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
    QString PassWord=ui->PassWordTwo_Edit->text();
    QString PassWordTwo=ui->PassWordTwo_Edit->text();
    QString Place=ui->Place_Edit->text();
    QString PhoneNumber=ui->PhoneNumber_Edit->text();
    QString IdCard=ui->IdCard_Edit->text();
    QString RealName=ui->RealName_Edit->text();
    //declare the warning windows
    QString info;
    // to do: 完善表单验证
    if(PassWord!=PassWordTwo)
    {
        info="您输入的两次密码不同";
        SentMessage(info);
    }
    else if(PhoneNumber.length()!=11)
    {
        info="您的手机号输入有误";
        SentMessage(info);
    }
    else
    {
        // to do: write the data to csv

        // issue: 这里使用相对路径原因是工作路径和exe文件构建路径不在一个地方
        // win平台下使用管理员模式打开合适
        QFile data("..\\assets\\user\\user.csv");
        if (data.open(QFile::WriteOnly | QFile::Append)) {
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


