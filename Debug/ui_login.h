/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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
    QLabel *label;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(446, 387);
        Login->setStyleSheet(QString::fromUtf8("#UserName_Edit{\n"
"	border-top-left-radius:10px;\n"
"	border-top-right-radius:10px;\n"
"	border-bottom-right-radius:10px;\n"
"	border-bottom-left-radius:10px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"}\n"
"#PassWord_Edit{\n"
"	border-top-left-radius:10px;\n"
"	border-top-right-radius:10px;\n"
"	border-bottom-right-radius:10px;\n"
"	border-bottom-left-radius:10px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"}\n"
"#UserName_Edit:hover{\n"
"	\n"
"	border:1px solid rgb(21,131,221)\n"
"	\n"
"}\n"
"#PassWord_Edit:hover{\n"
"	\n"
"	border:1px solid rgb(21,131,221)\n"
"	\n"
"}\n"
"\n"
"/*\347\231\273\345\275\225\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#Login_Button{\n"
"	border-radius:10px;\n"
"	border:none;\n"
"	background-color: #09A3DC;\n"
"	color:#fff;\n"
"}\n"
"\n"
"/*\347\231\273\345\275\225\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#Login_Button:hover{\n"
"	background-color:rgb(60,195,245);\n"
"}\n"
"/*\347\231\273\345\275\225\346\214"
                        "\211\351\222\256\346\240\267\345\274\217*/\n"
"#Visitor_Button{\n"
"	border-radius:4px;\n"
"	border:none;\n"
"	background-color: #09A3DC;\n"
"	color:#fff;\n"
"}\n"
"\n"
"/*\347\231\273\345\275\225\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#Visitor_Button:hover{\n"
"	background-color:rgb(60,195,245);\n"
"}\n"
"/*\347\231\273\345\275\225\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#Register_Button{\n"
"	border-radius:4px;\n"
"	border:none;\n"
"	background-color: #09A3DC;\n"
"	color:#fff;\n"
"}\n"
"\n"
"/*\347\231\273\345\275\225\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#Register_Button:hover{\n"
"	background-color:rgb(60,195,245);\n"
"}"));
        UserName_Edit = new QLineEdit(Login);
        UserName_Edit->setObjectName(QStringLiteral("UserName_Edit"));
        UserName_Edit->setGeometry(QRect(130, 90, 211, 31));
        PassWord_Edit = new QLineEdit(Login);
        PassWord_Edit->setObjectName(QStringLiteral("PassWord_Edit"));
        PassWord_Edit->setEnabled(true);
        PassWord_Edit->setGeometry(QRect(130, 150, 211, 31));
        PassWord_Edit->setStyleSheet(QStringLiteral(""));
        Register_Button = new QPushButton(Login);
        Register_Button->setObjectName(QStringLiteral("Register_Button"));
        Register_Button->setGeometry(QRect(90, 310, 75, 23));
        Visitor_Button = new QPushButton(Login);
        Visitor_Button->setObjectName(QStringLiteral("Visitor_Button"));
        Visitor_Button->setGeometry(QRect(290, 310, 75, 23));
        Login_Button = new QPushButton(Login);
        Login_Button->setObjectName(QStringLiteral("Login_Button"));
        Login_Button->setGeometry(QRect(110, 220, 251, 41));
        Login_Button->setStyleSheet(QLatin1String("font: 18pt \"Arial\";\n"
"font: 12pt \"Arial\";"));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(21, 100, 211, 201));
        label->setStyleSheet(QStringLiteral("background-image: url(:/images/User_Label.png);"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
        Register_Button->setText(QApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        Visitor_Button->setText(QApplication::translate("Login", "\346\270\270\345\256\242\350\277\233\345\205\245", nullptr));
        Login_Button->setText(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
