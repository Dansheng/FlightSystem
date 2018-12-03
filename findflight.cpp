#include "findflight.h"
#include "ui_findflight.h"

FindFlight::FindFlight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindFlight)
{
    ui->setupUi(this);
}

FindFlight::~FindFlight()
{
    delete ui;
}

void FindFlight::on_pushButton_clicked()
{

}
