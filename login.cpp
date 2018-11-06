#include "login.h"
#include "ui_login.h"
#include "QString"       // Qt里的字符串类型
#include "QMessageBox"   // 引入QMessageBox类，用于弹窗
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->Login_Button->setText("登陆");
}

Login::~Login()
{
    delete ui;
}

void Login::on_Login_Button_clicked()
{
    QString UserName=ui->UserName_Edit->text();
    QString PassWord=ui->PassWord_Edit->text();
    if(UserName == "suliangcai" && PassWord == "123456789")
    {
        accept();
    }
    else
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
