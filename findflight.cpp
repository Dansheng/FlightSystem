#include "findflight.h"
#include "ui_findflight.h"

FindFlight::FindFlight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindFlight)
{
    ui->setupUi(this);
    // CityStart
    ui->CityStart_comboBox->addItem(tr("北京"));
    ui->CityStart_comboBox->addItem(tr("西安"));
    ui->CityStart_comboBox->addItem(tr("厦门"));
    ui->CityStart_comboBox->addItem(tr("上海浦东"));
    ui->CityStart_comboBox->addItem(tr("上海虹桥"));
    ui->CityStart_comboBox->addItem(tr("深圳"));
    ui->CityStart_comboBox->addItem(tr("广东"));
    // EndStart
    ui->CityEnd_comboBox->addItem(tr("北京"));
    ui->CityEnd_comboBox->addItem(tr("西安"));
    ui->CityEnd_comboBox->addItem(tr("厦门"));
    ui->CityEnd_comboBox->addItem(tr("上海浦东"));
    ui->CityEnd_comboBox->addItem(tr("上海虹桥"));
    ui->CityEnd_comboBox->addItem(tr("深圳"));
    ui->CityEnd_comboBox->addItem(tr("广东"));
}

FindFlight::~FindFlight()
{
    delete ui;
}

void FindFlight::on_pushButton_clicked()
{

}
