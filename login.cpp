#include "login.h"
#include "ui_login.h"
#include "QString"       // Qt里的字符串类型
#include "QMessageBox"   // 引入QMessageBox类，用于弹窗
#include "QLineEdit"
#include "register.h"
#include <QDialog>
#include <QFile>
#include <QDebug>
#include <QFontDatabase> // 为了使用fontawesome
Login::Login(QWidget *parent) :
    QDialog(parent),
    // QDialog(parent,Qt::Dialog|Qt::FramelessWindowHint),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->UserName_Edit->setPlaceholderText(" 请 输 入 用 户 名"); // 占位符
    ui->PassWord_Edit->setPlaceholderText(" 请 输 入  密  码"); // 占位符
    ui->PassWord_Edit->setEchoMode(QLineEdit::Password);// 将密码框改为加密模式(输入时则为加密模式）
                                                        // QLineEdit::PasswordEchoOnEdit 则为输入结束后隐藏字符串

}
Login::~Login()
{
    delete ui;
}

void Login::on_Login_Button_clicked()
{
    QString UserName=ui->UserName_Edit->text().trimmed(); // 去除用户名输入的空格
    QString PassWord=ui->PassWord_Edit->text();
    // to do： 读取文件 账号和密码
    if( (UserName == "suliangcai" && PassWord == "123456789") ||(UserName == "liangcai" && PassWord == "123456789"))
    {
        QFile data("..\\assets\\user\\login.txt");
        if (data.open(QFile::WriteOnly)) {
            QTextStream out(&data);
            out << UserName <<endl;
            data.flush();
            data.close();
        }
        qDebug() << "success" << endl;
        accept();
    }
    else
        // 错误提示
    {
        QMessageBox warning;
        QString info;
        warning.setWindowTitle("错误");
        info="您输入的用户名或者密码有误";
        warning.setText(info);
        warning.addButton("确定",QMessageBox::ActionRole);
        warning.exec();

    }

}


void Login::on_Register_Button_clicked()
{
    Register reg;
    reg.setWindowTitle("注册");
    // to do: hide the windows
    if(reg.exec() == QDialog::Accepted)
    {
        //to do: 返回登陆界面或者直接进入主窗口并显示用户信息
    }
}

void Login::on_Visitor_Button_clicked()
{
    QFile data("..\\assets\\user\\login.txt");
    if (data.open(QFile::WriteOnly)) {
        QTextStream out(&data);
        out << "Visitor" <<endl;
        data.flush();
        data.close();
    }
    accept();
}
