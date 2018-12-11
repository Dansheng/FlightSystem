/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
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
    QPushButton *Register_Button;
    QPushButton *Visitor_Button;
    QPushButton *Login_Button;
    QLabel *UserName_Label;
    QLabel *PassWord_Label;
    QLabel *Logo;
    QLabel *Background;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(388, 429);
        Login->setMinimumSize(QSize(388, 429));
        Login->setMaximumSize(QSize(388, 429));
        Login->setStyleSheet(QString::fromUtf8("/*\347\224\250\346\210\267\345\220\215\347\231\273\345\275\225\346\241\206\346\240\267\345\274\217*/\n"
"#UserName_Edit{\n"
"	border-top-left-radius:10px;\n"
"	border-top-right-radius:10px;\n"
"	border-bottom-right-radius:10px;\n"
"	border-bottom-left-radius:10px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"	padding-left:8px;\n"
"}\n"
"/*\345\257\206\347\240\201\347\231\273\345\275\225\346\241\206\346\240\267\345\274\217*/\n"
"#PassWord_Edit{\n"
"	border-top-left-radius:10px;\n"
"	border-top-right-radius:10px;\n"
"	border-bottom-right-radius:10px;\n"
"	border-bottom-left-radius:10px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"	padding-left:8px;\n"
"}\n"
"/*\347\224\250\346\210\267\345\220\215\347\231\273\345\275\225\346\241\206\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#UserName_Edit:hover{\n"
"	border:1px solid rgb(21,131,221)\n"
"}\n"
"/*\345\257\206\347\240\201\347\231\273\345\275\225\346\241\206\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/"
                        "\n"
"#PassWord_Edit:hover{\n"
"	border:1px solid rgb(21,131,221)\n"
"}\n"
"/*\347\231\273\345\275\225\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#Login_Button{\n"
"	border-radius:10px;\n"
"	border:none;\n"
"	background-color: rgb(37,88,184);\n"
"	color:#fff;\n"
"}\n"
"/*\347\231\273\345\275\225\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#Login_Button:hover{\n"
"	background-color:rgb(57,159,227);\n"
"}\n"
"/*\346\270\270\345\256\242\350\277\233\345\205\245\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#Visitor_Button{\n"
"	border-radius:4px;\n"
"	border:none;\n"
"	background-color: none;\n"
"	color:rgb(51,151,224);\n"
"}\n"
"/*\346\270\270\345\256\242\350\277\233\345\205\245\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#Visitor_Button:hover{\n"
"	background-color:none;\n"
"	color:rgb(43,58,141);\n"
"}\n"
"/*\346\263\250\345\206\214\346\214\211\351\222\256\346\240\267\345\274\217"
                        "*/\n"
"#Register_Button{\n"
"	border-radius:4px;\n"
"	border:none;\n"
"	background-color: none;\n"
"	color:rgb(51,151,224);\n"
"}\n"
"/*\346\263\250\345\206\214\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#Register_Button:hover{\n"
"	background-color:none;\n"
"	color:rgb(43,58,141);\n"
"}\n"
"/*\345\272\225\350\211\262*/\n"
"#Background{\n"
"	background-color:rgb(246,246,246)\n"
"}"));
        UserName_Edit = new QLineEdit(Login);
        UserName_Edit->setObjectName(QStringLiteral("UserName_Edit"));
        UserName_Edit->setGeometry(QRect(80, 230, 211, 31));
        PassWord_Edit = new QLineEdit(Login);
        PassWord_Edit->setObjectName(QStringLiteral("PassWord_Edit"));
        PassWord_Edit->setEnabled(true);
        PassWord_Edit->setGeometry(QRect(80, 280, 211, 31));
        PassWord_Edit->setStyleSheet(QStringLiteral(""));
        Register_Button = new QPushButton(Login);
        Register_Button->setObjectName(QStringLiteral("Register_Button"));
        Register_Button->setGeometry(QRect(290, 230, 51, 31));
        Visitor_Button = new QPushButton(Login);
        Visitor_Button->setObjectName(QStringLiteral("Visitor_Button"));
        Visitor_Button->setGeometry(QRect(290, 280, 71, 31));
        Login_Button = new QPushButton(Login);
        Login_Button->setObjectName(QStringLiteral("Login_Button"));
        Login_Button->setGeometry(QRect(130, 350, 121, 31));
        Login_Button->setStyleSheet(QLatin1String("font: 18pt \"Arial\";\n"
"font: 12pt \"Arial\";"));
        UserName_Label = new QLabel(Login);
        UserName_Label->setObjectName(QStringLiteral("UserName_Label"));
        UserName_Label->setGeometry(QRect(50, 230, 21, 31));
        UserName_Label->setStyleSheet(QStringLiteral("image: url(:/images/User_Black.png);"));
        PassWord_Label = new QLabel(Login);
        PassWord_Label->setObjectName(QStringLiteral("PassWord_Label"));
        PassWord_Label->setGeometry(QRect(50, 280, 21, 31));
        PassWord_Label->setStyleSheet(QStringLiteral("image: url(:/images/Password_Black.png);"));
        Logo = new QLabel(Login);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(50, -30, 271, 271));
        Logo->setStyleSheet(QStringLiteral("image: url(:/images/Top.jpeg);"));
        Background = new QLabel(Login);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(-20, -50, 461, 551));
        Background->raise();
        Logo->raise();
        UserName_Edit->raise();
        PassWord_Edit->raise();
        Register_Button->raise();
        Visitor_Button->raise();
        Login_Button->raise();
        UserName_Label->raise();
        PassWord_Label->raise();

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", Q_NULLPTR));
        Register_Button->setText(QApplication::translate("Login", "\346\263\250\345\206\214", Q_NULLPTR));
        Visitor_Button->setText(QApplication::translate("Login", "\346\270\270\345\256\242\350\277\233\345\205\245", Q_NULLPTR));
        Login_Button->setText(QApplication::translate("Login", "\347\231\273\345\275\225", Q_NULLPTR));
        UserName_Label->setText(QString());
        PassWord_Label->setText(QString());
        Logo->setText(QString());
        Background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
