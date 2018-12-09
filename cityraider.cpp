#include "cityraider.h"
#include "ui_cityraider.h"

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

void CityRaider::on_pushButton_clicked()
{
    ui->pushButton->setText("1111");
}
