#include "cityraider.h"
#include "ui_cityraider.h"
#include <QDebug>
CityRaider::CityRaider(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CityRaider)
{
    ui->setupUi(this);

}

CityRaider::~CityRaider()
{
    delete ui;
}

/*西安火车站*/

void CityRaider::on_XianRailwayStation_QRB_clicked()
{
    qDebug() << ui->XianRailwayStation_QRB->isChecked() << endl;
    if(ui->XianRailwayStation_QRB->isChecked())
        ui->XianRailwayStation_Btn->setStyleSheet("image:url(:/images/XianRailwayStation2.png);");
    else
        ui->XianRailwayStation_Btn->setStyleSheet("image:url(:/images/XianRailwayStation.png);");
}

void CityRaider::on_XianRailwayStation_Btn_clicked()
{
    if(ui->XianRailwayStation_QRB->isChecked())
    {
        ui->XianRailwayStation_Btn->setStyleSheet("image:url(:/images/XianRailwayStation.png);");
        ui->XianRailwayStation_QRB->setChecked(false);
    }
    else
    {
        ui->XianRailwayStation_Btn->setStyleSheet("image:url(:/images/XianRailwayStation2.png);");
        ui->XianRailwayStation_QRB->setChecked(true);
    }
}

/*兵马俑*/

void CityRaider::on_TerraCottaWarriors_QRB_clicked()
{
    qDebug() << ui->TerraCottaWarriors_QRB->isChecked() << endl;
    if(ui->TerraCottaWarriors_QRB->isChecked())
        ui->TerraCottaWarriors_Btn->setStyleSheet("image:url(:/images/TerraCottaWarriors2.png);");
    else
        ui->TerraCottaWarriors_Btn->setStyleSheet("image:url(:/images/TerraCottaWarriors.png);");
}

void CityRaider::on_TerraCottaWarriors_Btn_clicked()
{
    if(ui->TerraCottaWarriors_QRB->isChecked())
    {
        ui->TerraCottaWarriors_Btn->setStyleSheet("image:url(:/images/TerraCottaWarriors.png);");
        ui->TerraCottaWarriors_QRB->setChecked(false);
    }
    else
    {
        ui->TerraCottaWarriors_Btn->setStyleSheet("image:url(:/images/TerraCottaWarriors2.png);");
        ui->TerraCottaWarriors_QRB->setChecked(true);
    }
}

/*陕历博*/

void CityRaider::on_ShaanxiHistoryMuseum_QRB_clicked()
{
    qDebug() << ui->ShaanxiHistoryMuseum_QRB->isChecked() << endl;
    if(ui->ShaanxiHistoryMuseum_QRB->isChecked())
        ui->ShaanxiHistoryMuseum_Btn->setStyleSheet("image:url(:/images/ShaanxiHistoryMuseum2.png);");
    else
        ui->ShaanxiHistoryMuseum_Btn->setStyleSheet("image:url(:/images/ShaanxiHistoryMuseum.png);");
}

void CityRaider::on_ShaanxiHistoryMuseum_Btn_clicked()
{
    if(ui->ShaanxiHistoryMuseum_QRB->isChecked())
    {
        ui->ShaanxiHistoryMuseum_Btn->setStyleSheet("image:url(:/images/ShaanxiHistoryMuseum.png);");
        ui->ShaanxiHistoryMuseum_QRB->setChecked(false);
    }
    else
    {
        ui->ShaanxiHistoryMuseum_Btn->setStyleSheet("image:url(:/images/ShaanxiHistoryMuseum2.png);");
        ui->ShaanxiHistoryMuseum_QRB->setChecked(true);
    }
}

/*鼓楼*/

void CityRaider::on_DrumTower_QRB_clicked()
{
    qDebug() << ui->DrumTower_QRB->isChecked() << endl;
    if(ui->DrumTower_QRB->isChecked())
        ui->DrumTower_Btn->setStyleSheet("image:url(:/images/DrumTower2.png);");
    else
        ui->DrumTower_Btn->setStyleSheet("image:url(:/images/DrumTower.png);");
}

void CityRaider::on_DrumTower_Btn_clicked()
{
    if(ui->DrumTower_QRB->isChecked())
    {
        ui->DrumTower_Btn->setStyleSheet("image:url(:/images/DrumTower.png);");
        ui->DrumTower_QRB->setChecked(false);
    }
    else
    {
        ui->DrumTower_Btn->setStyleSheet("image:url(:/images/DrumTower2.png);");
        ui->DrumTower_QRB->setChecked(true);
    }
}

/*钟楼*/

void CityRaider::on_BellTower_QRB_clicked()
{
    qDebug() << ui->BellTower_QRB->isChecked() << endl;
    if(ui->BellTower_QRB->isChecked())
        ui->BellTower_Btn->setStyleSheet("image:url(:/images/BellTower2.png);");
    else
        ui->BellTower_Btn->setStyleSheet("image:url(:/images/BellTower.png);");
}

void CityRaider::on_BellTower_Btn_clicked()
{
    if(ui->BellTower_QRB->isChecked())
    {
        ui->BellTower_Btn->setStyleSheet("image:url(:/images/BellTower.png);");
        ui->BellTower_QRB->setChecked(false);
    }
    else
    {
        ui->BellTower_Btn->setStyleSheet("image:url(:/images/BellTower2.png);");
        ui->BellTower_QRB->setChecked(true);
    }
}
