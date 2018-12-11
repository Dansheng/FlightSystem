#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //find_btn slots
    void on_Find_Button_clicked();

    //order_btn slots
    void on_Order_Button_clicked();

    //user_btn slots
    void on_User_Button_clicked();


    void on_AddFlight_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
