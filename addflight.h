#ifndef ADDFLIGHT_H
#define ADDFlIGHT_H

#include <QDialog>

namespace Ui {
class AddFlight;
}

class AddFlight : public QDialog
{
    Q_OBJECT

public:
    explicit AddFlight(QWidget *parent = 0);
    ~AddFlight();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddFlight *ui;
};

#endif // ADDFLIGHT_H
