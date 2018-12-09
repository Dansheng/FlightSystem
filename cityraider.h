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

    void on_XianRailwayStation_QRB_clicked();

    void on_XianRailwayStation_Btn_clicked();

    void on_TerraCottaWarriors_QRB_clicked();

    void on_TerraCottaWarriors_Btn_clicked();

    void on_ShaanxiHistoryMuseum_QRB_clicked();

    void on_ShaanxiHistoryMuseum_Btn_clicked();

    void on_DrumTower_QRB_clicked();

    void on_DrumTower_Btn_clicked();

    void on_BellTower_QRB_clicked();

    void on_BellTower_Btn_clicked();

private:
    Ui::CityRaider *ui;
};

#endif // CITYRAIDER_H
