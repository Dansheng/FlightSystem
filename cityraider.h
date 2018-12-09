#ifndef CITYRAIDER_H
#define CITYRAIDER_H

#include <QDialog>

namespace Ui {
class CityRaider;
}

class CityRaider : public QDialog
{
    Q_OBJECT

public:
    explicit CityRaider(QWidget *parent = 0);
    ~CityRaider();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CityRaider *ui;
};

#endif // CITYRAIDER_H
