#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots: // 信号
    void on_Login_Button_clicked();

    void on_Register_Button_clicked();

    void on_Visitor_Button_clicked();


    void on_dev_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
