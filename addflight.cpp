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
    ui->TimeStart->setDisplayFormat("HH:mm");
    ui->TimeEnd->setDisplayFormat("HH:mm");
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
    QString Times;
    if(ui->Monday->isChecked()) Times.append('1'); else Times.append('0');
    if(ui->Tuesday->isChecked()) Times.append('1'); else Times.append('0');
    if(ui->Wednesday->isChecked()) Times.append('1'); else Times.append('0');
    if(ui->Thursday->isChecked()) Times.append('1'); else Times.append('0');
    if(ui->Friday->isChecked()) Times.append('1'); else Times.append('0');
    if(ui->Saturday->isChecked()) Times.append('1'); else Times.append('0');
    if(ui->Sunday->isChecked()) Times.append('1'); else Times.append('0');
    qDebug()<< Times << endl;
    QString info;
    //write the data
    QFile data("..\\assets\\flight\\flight.csv");
    QFile count("..\\assets\\flight\\count.txt");
    // 如果是mac,此处的文件地址需要修改
    if (data.open(QFile::WriteOnly | QFile::Append)) {
        QTextStream out(&data);
        out << CityStart << "," << CityEnd << "," << FightNumber << "," << PlaneNumber << "," << TimeStart << "," << TimeEnd << "," << Times << ","<< Price <<"," << Discout << ","<<
            PeopleNumber << "," << TicketLeft << ","  << endl;
        // 更改条数记录
        if(count.open(QFile::ReadOnly |QFile::Text))
        {
            QTextStream counts(&count);
            int length = counts.readLine().toInt();
            qDebug() << "length:" << length << endl;
            count.close();
            if(count.open(QFile::WriteOnly | QFile::Text))
            {
                QTextStream counts(&count);
                counts << (length+1) << endl;
                count.close();
            }
        }
        data.flush();
        data.close();
        info="录入成功";
        SentMessage_(info);
    }
    accept();
}
