#include "orderquery.h"
#include "ui_orderquery.h"

OrderQuery::OrderQuery(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderQuery)
{
    ui->setupUi(this);
}

OrderQuery::~OrderQuery()
{
    delete ui;
}
