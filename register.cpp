#include "register.h"
#include "ui_register.h"
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
//    ui->IdCard_Edit->setMaxLength(18);
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
        QFile data("out.txt");
        if (data.open(QFile::WriteOnly | QFile::Truncate)) {
            QTextStream out(&data);
            out << "Result: " << qSetFieldWidth(10) << left << 3.14 << 2.7;
            // writes "Result: 3.14      2.7       "
        }
        accept();
    }
}
