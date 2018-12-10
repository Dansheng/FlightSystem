#ifndef FINDFLIGHT_H
#define FINDFLIGHT_H

#include <QDialog>
#include <QTableView>

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

    void on_Book_Button_clicked();

    void on_Find_Button_clicked();

    void on_CityRaider_Button_clicked();

private:
    Ui::FindFlight *ui;
};

#endif // FINDFLIGHT_H
