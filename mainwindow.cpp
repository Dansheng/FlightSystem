#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImage>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Sure"); // 将按钮改为确认


}

MainWindow::~MainWindow()
{
    delete ui;
}
