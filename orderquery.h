#ifndef ORDERQUERY_H
#define ORDERQUERY_H

#include <QDialog>

namespace Ui {
class OrderQuery;
}

class OrderQuery : public QDialog
{
    Q_OBJECT

public:
    explicit OrderQuery(QWidget *parent = 0);
    ~OrderQuery();

private slots:
    void on_Close_Btn_clicked();


private:
    Ui::OrderQuery *ui;
};

#endif // ORDERQUERY_H
