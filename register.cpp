#include "register.h"
#include "ui_register.h"
#include <QString>
<<<<<<< HEAD
#include <QLine.h>
=======
>>>>>>> 9dce730fb474817a16c68880c0b36e3292325b84
#include <QMessageBox>
#include <QDebug>
#include <QFile>
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
<<<<<<< HEAD
    ui->PassWord_Edit->setEchoMode(QLineEdit::Password);
    ui->PassWordTwo_Edit->setEchoMode(QLineEdit::Password);
    ui->IdCard_Edit->setMaxLength(18);
=======
//    ui->IdCard_Edit->setMaxLength(18);
>>>>>>> 9dce730fb474817a16c68880c0b36e3292325b84
}

Register::~Register()
{
    delete ui;
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
    QMessageBox warning;
    QString info;
    warning.setWindowTitle("错误");
<<<<<<< HEAD
    // to do: 完善表单验证
=======
>>>>>>> 9dce730fb474817a16c68880c0b36e3292325b84
    if(PassWord!=PassWordTwo)
    {
        info="您输入的两次密码不同";
        warning.setText(info);
        warning.addButton("确定",QMessageBox::ActionRole);
        warning.exec();

    }
    else if(PhoneNumber.length()!=11)
    {
        info="您的手机号输入有误";
        warning.setText(info);
        warning.addButton("确定",QMessageBox::ActionRole);
        warning.exec();
    }
    else
    {
        // to do: write the data to csv
<<<<<<< HEAD
        // issue: 这里使用相对路径原因是工作路径和exe文件构建路径不在一个地方
        // win平台下使用管理员模式打开合适
        QFile data("..\\assets\\user\\user.csv");
        if (data.open(QFile::WriteOnly | QFile::Append)) {
            QTextStream out(&data);
            out << UserName << "," << PassWord << "," << Place << "," << RealName << "," << PhoneNumber << "," << IdCard <<endl;
            data.flush();
            data.close();
=======
        QFile data("out.txt");
        if (data.open(QFile::WriteOnly | QFile::Truncate)) {
            QTextStream out(&data);
            out << "Result: " << qSetFieldWidth(10) << left << 3.14 << 2.7;
            // writes "Result: 3.14      2.7       "
>>>>>>> 9dce730fb474817a16c68880c0b36e3292325b84
        }
        accept();
    }
}
