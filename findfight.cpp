#include "findfight.h"
#include "ui_findfight.h"

FindFight::FindFight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindFight)
{
    ui->setupUi(this);
}

FindFight::~FindFight()
{
    delete ui;
}

void FindFight::on_pushButton_clicked()
{

}
