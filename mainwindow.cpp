#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImage>
#include <findfight.h>
#include <orderquery.h>
#include <userinfo.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Find_Button_clicked()
{
    FindFight findfight;
    this->hide();
    findfight.exec();
    this->show();
}

void MainWindow::on_Order_Button_clicked()
{
    OrderQuery orderquery;
    this->hide();
    orderquery.exec();
    this->show();
}

void MainWindow::on_User_Button_clicked()
{
    UserInfo user;
    this->hide();
    user.exec();
    this->show();
}

void MainWindow::on_Find_Button_pressed()
{
    ui->Find_Button->setStyleSheet("border-image: url(:/images/findpress_btn.png);");
}
void MainWindow::on_Find_Button_released()
{
    ui->Find_Button->setStyleSheet("border-image: url(:/images/find_btn.png);");
}
void MainWindow::on_Order_Button_pressed()
{
    ui->Order_Button->setStyleSheet("border-image: url(:/images/orderpress_btn.png);");

}

void MainWindow::on_Order_Button_released()
{
    ui->Order_Button->setStyleSheet("border-image: url(:/images/order_btn.png);");

}

void MainWindow::on_User_Button_pressed()
{
    ui->User_Button->setStyleSheet("border-image: url(:/images/userpress_btn.png);");
}


void MainWindow::on_User_Button_released()
{
    ui->User_Button->setStyleSheet("border-image: url(:/images/user_btn.png);");
}
