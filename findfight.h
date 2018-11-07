#ifndef FINDFIGHT_H
#define FINDFIGHT_H

#include <QDialog>

namespace Ui {
class FindFight;
}

class FindFight : public QDialog
{
    Q_OBJECT

public:
    explicit FindFight(QWidget *parent = 0);
    ~FindFight();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FindFight *ui;
};

#endif // FINDFIGHT_H
