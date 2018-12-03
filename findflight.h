#ifndef FINDFLIGHT_H
#define FINDFLIGHT_H

#include <QDialog>

namespace Ui {
class FindFlight;
}

class FindFlight : public QDialog
{
    Q_OBJECT

public:
    explicit FindFlight(QWidget *parent = 0);
    ~FindFlight();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FindFlight *ui;
};

#endif // FINDFLIGHT_H
