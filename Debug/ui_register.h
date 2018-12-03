/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

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

class Ui_Register
{
public:
    QLabel *UserName_Label;
    QLabel *PassWord_Label;
    QLabel *PassWordTwo_Label;
    QLabel *Place_Label;
    QLabel *PhoneNumber_Label;
    QLabel *RealName_Label;
    QLabel *IdCard_Label;
    QLineEdit *UserName_Edit;
    QLineEdit *PassWord_Edit;
    QLineEdit *PassWordTwo_Edit;
    QLineEdit *Place_Edit;
    QLineEdit *RealName_Edit;
    QLineEdit *PhoneNumber_Edit;
    QLineEdit *IdCard_Edit;
    QPushButton *Sure_Button;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(394, 551);
        UserName_Label = new QLabel(Register);
        UserName_Label->setObjectName(QStringLiteral("UserName_Label"));
        UserName_Label->setGeometry(QRect(40, 120, 54, 12));
        PassWord_Label = new QLabel(Register);
        PassWord_Label->setObjectName(QStringLiteral("PassWord_Label"));
        PassWord_Label->setGeometry(QRect(40, 160, 54, 12));
        PassWordTwo_Label = new QLabel(Register);
        PassWordTwo_Label->setObjectName(QStringLiteral("PassWordTwo_Label"));
        PassWordTwo_Label->setGeometry(QRect(40, 200, 54, 12));
        Place_Label = new QLabel(Register);
        Place_Label->setObjectName(QStringLiteral("Place_Label"));
        Place_Label->setGeometry(QRect(40, 240, 54, 12));
        PhoneNumber_Label = new QLabel(Register);
        PhoneNumber_Label->setObjectName(QStringLiteral("PhoneNumber_Label"));
        PhoneNumber_Label->setGeometry(QRect(40, 320, 54, 12));
        RealName_Label = new QLabel(Register);
        RealName_Label->setObjectName(QStringLiteral("RealName_Label"));
        RealName_Label->setGeometry(QRect(40, 280, 54, 12));
        IdCard_Label = new QLabel(Register);
        IdCard_Label->setObjectName(QStringLiteral("IdCard_Label"));
        IdCard_Label->setGeometry(QRect(40, 360, 71, 16));
        UserName_Edit = new QLineEdit(Register);
        UserName_Edit->setObjectName(QStringLiteral("UserName_Edit"));
        UserName_Edit->setGeometry(QRect(110, 120, 241, 20));
        PassWord_Edit = new QLineEdit(Register);
        PassWord_Edit->setObjectName(QStringLiteral("PassWord_Edit"));
        PassWord_Edit->setGeometry(QRect(110, 160, 241, 20));
        PassWordTwo_Edit = new QLineEdit(Register);
        PassWordTwo_Edit->setObjectName(QStringLiteral("PassWordTwo_Edit"));
        PassWordTwo_Edit->setGeometry(QRect(110, 200, 241, 20));
        Place_Edit = new QLineEdit(Register);
        Place_Edit->setObjectName(QStringLiteral("Place_Edit"));
        Place_Edit->setGeometry(QRect(110, 240, 241, 20));
        RealName_Edit = new QLineEdit(Register);
        RealName_Edit->setObjectName(QStringLiteral("RealName_Edit"));
        RealName_Edit->setGeometry(QRect(110, 280, 241, 20));
        PhoneNumber_Edit = new QLineEdit(Register);
        PhoneNumber_Edit->setObjectName(QStringLiteral("PhoneNumber_Edit"));
        PhoneNumber_Edit->setGeometry(QRect(110, 320, 241, 20));
        IdCard_Edit = new QLineEdit(Register);
        IdCard_Edit->setObjectName(QStringLiteral("IdCard_Edit"));
        IdCard_Edit->setGeometry(QRect(110, 360, 241, 20));
        Sure_Button = new QPushButton(Register);
        Sure_Button->setObjectName(QStringLiteral("Sure_Button"));
        Sure_Button->setGeometry(QRect(120, 410, 111, 51));
        Sure_Button->setStyleSheet(QStringLiteral("border-image: url(:/images/sure_btn.png);"));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", Q_NULLPTR));
        UserName_Label->setText(QApplication::translate("Register", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        PassWord_Label->setText(QApplication::translate("Register", "\345\257\206\347\240\201", Q_NULLPTR));
        PassWordTwo_Label->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        Place_Label->setText(QApplication::translate("Register", "\345\270\270\351\251\273\345\234\260", Q_NULLPTR));
        PhoneNumber_Label->setText(QApplication::translate("Register", "\346\211\213\346\234\272\345\217\267\347\240\201", Q_NULLPTR));
        RealName_Label->setText(QApplication::translate("Register", "\347\234\237\345\256\236\345\247\223\345\220\215", Q_NULLPTR));
        IdCard_Label->setText(QApplication::translate("Register", "\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201", Q_NULLPTR));
        Sure_Button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
