#include "login.h"
#include "ui_login.h"
#include "QString"       // Qt里的字符串类型
#include "QMessageBox"   // 引入QMessageBox类，用于弹窗
#include "QLineEdit"
#include "register.h"
#include <QDialog>
#include "QFile"
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->Login_Button->setText("登陆");
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
    if(UserName == "suliangcai" && PassWord == "123456789")
    {
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
    accept();
}
