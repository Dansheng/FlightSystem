#ifndef ADDFIGHT_H
#define ADDFIGHT_H

#include <QDialog>

namespace Ui {
class AddFight;
}

class AddFight : public QDialog
{
    Q_OBJECT

public:
    explicit AddFight(QWidget *parent = 0);
    ~AddFight();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddFight *ui;
};

#endif // ADDFIGHT_H
