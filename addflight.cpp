#include "addflight.h"
#include "ui_addflight.h"
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QLine.h>
AddFlight::AddFlight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFlight)
{
    ui->setupUi(this);
    ui->TimeStart->setDisplayFormat("yyyy.MM.dd HH:mm:ss");
    ui->TimeEnd->setDisplayFormat("yyyy.MM.dd HH:mm:ss");
}
void SentMessage_(QString info)
{
    QMessageBox warning;
    warning.setWindowTitle("提示");
    warning.setText(info);
    warning.addButton("确定",QMessageBox::ActionRole);
    warning.exec();
}
AddFlight::~AddFlight()
{


    delete ui;
}

void AddFlight::on_pushButton_clicked()
{
    // read the data
    QString CityStart=ui->CityStart_Line->text();
    QString CityEnd=ui->CityEnd_Line->text();
    QString FightNumber=ui->FightNumber_Line->text();
    QString PlaneNumber=ui->PlaneNumber_Line->text();
    QString TimeStart=ui->TimeStart->text();
    QString TimeEnd=ui->TimeEnd->text();
    QString Price=ui->Price_Line->text();
    QString Discout=ui->Discout_Line->text();
    QString PeopleNumber=ui->PeopleNumber_Line->text();
    QString TicketLeft=ui->TicketLeft_Line->text();
    QString info;
    //write the data
    QFile data("..\\assets\\fight\\fight.csv");
    if (data.open(QFile::WriteOnly | QFile::Append)) {
        QTextStream out(&data);
        out << CityStart << "," << CityEnd << "," << FightNumber << "," << PlaneNumber << "," << TimeStart << "," << TimeEnd << "," << Price <<"," << Discout << ","<<
            PeopleNumber << "," << TicketLeft << "," << endl;
        data.flush();
        data.close();
        info="录入成功";
        SentMessage_(info);
    }
    accept();
}
