/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *UserName_Edit;
    QLineEdit *PassWord_Edit;
    QLabel *UserName_Label;
    QLabel *PassWord_Label;
    QPushButton *Login_Button;
    QPushButton *Register_Button;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(418, 514);
        UserName_Edit = new QLineEdit(Login);
        UserName_Edit->setObjectName(QStringLiteral("UserName_Edit"));
        UserName_Edit->setGeometry(QRect(170, 170, 211, 31));
        PassWord_Edit = new QLineEdit(Login);
        PassWord_Edit->setObjectName(QStringLiteral("PassWord_Edit"));
        PassWord_Edit->setGeometry(QRect(170, 240, 211, 31));
        UserName_Label = new QLabel(Login);
        UserName_Label->setObjectName(QStringLiteral("UserName_Label"));
        UserName_Label->setGeometry(QRect(80, 180, 54, 12));
        PassWord_Label = new QLabel(Login);
        PassWord_Label->setObjectName(QStringLiteral("PassWord_Label"));
        PassWord_Label->setGeometry(QRect(80, 250, 54, 12));
        Login_Button = new QPushButton(Login);
        Login_Button->setObjectName(QStringLiteral("Login_Button"));
        Login_Button->setGeometry(QRect(110, 310, 75, 23));
        Register_Button = new QPushButton(Login);
        Register_Button->setObjectName(QStringLiteral("Register_Button"));
        Register_Button->setGeometry(QRect(230, 310, 75, 23));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", Q_NULLPTR));
        UserName_Label->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        PassWord_Label->setText(QApplication::translate("Login", "\345\257\206\347\240\201", Q_NULLPTR));
        Login_Button->setText(QApplication::translate("Login", "\347\231\273\351\231\206", Q_NULLPTR));
        Register_Button->setText(QApplication::translate("Login", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
