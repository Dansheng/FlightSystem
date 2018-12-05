/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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
    QPushButton *pushButton;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(394, 551);
        Register->setStyleSheet(QString::fromUtf8("\n"
"/*\347\231\273\345\275\225\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#pushButton{\n"
"	border-radius:4px;\n"
"	border:none;\n"
"	background-color: #09A3DC;\n"
"	color:#fff;\n"
"}\n"
"\n"
"/*\347\231\273\345\275\225\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#pushButton:hover{\n"
"	background-color:rgb(60,195,245);\n"
"}\n"
"/*\350\276\223\345\205\245\346\241\206\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#RealName_Edit:hover{\n"
"	\n"
"	border:1px solid rgb(21,131,221)\n"
"	\n"
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
"#PassWordTwo_Edit:hover{\n"
"	\n"
"	border:1px solid rgb(21,131,221)\n"
"	\n"
"}\n"
"#Place_Edit:hover{\n"
"	\n"
"	border:1px solid rgb(21,131,221)\n"
"	\n"
"}\n"
"#PhoneNumber_Edit:hover{\n"
"	\n"
"	border:1px solid rgb(21,131,221)\n"
"	\n"
"}\n"
"#IdCard_Edit:hover{\n"
"	\n"
"	bord"
                        "er:1px solid rgb(21,131,221)\n"
"	\n"
"}\n"
"/*\347\224\250\346\210\267\345\220\215\350\276\223\345\205\245\346\241\206\346\240\267\345\274\217*/\n"
"#RealName_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"}\n"
"#UserName_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"}\n"
"#PassWord_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"}\n"
"#PassWordTwo_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"}\n"
"#Place_Edit{\n"
"	border-top-left-radius:4px"
                        ";\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"}\n"
"#PhoneNumber_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"}\n"
"#IdCard_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        UserName_Label = new QLabel(Register);
        UserName_Label->setObjectName(QStringLiteral("UserName_Label"));
        UserName_Label->setGeometry(QRect(40, 120, 54, 20));
        UserName_Label->setStyleSheet(QStringLiteral("font: 8pt \"Arial\";"));
        UserName_Label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        PassWord_Label = new QLabel(Register);
        PassWord_Label->setObjectName(QStringLiteral("PassWord_Label"));
        PassWord_Label->setGeometry(QRect(40, 160, 54, 12));
        PassWord_Label->setStyleSheet(QLatin1String("font: 8pt \"Arial\";\n"
""));
        PassWordTwo_Label = new QLabel(Register);
        PassWordTwo_Label->setObjectName(QStringLiteral("PassWordTwo_Label"));
        PassWordTwo_Label->setGeometry(QRect(40, 200, 54, 12));
        PassWordTwo_Label->setStyleSheet(QStringLiteral("font: 8pt \"Arial\";"));
        Place_Label = new QLabel(Register);
        Place_Label->setObjectName(QStringLiteral("Place_Label"));
        Place_Label->setGeometry(QRect(40, 240, 54, 12));
        Place_Label->setStyleSheet(QStringLiteral("font: 8pt \"Arial\";"));
        PhoneNumber_Label = new QLabel(Register);
        PhoneNumber_Label->setObjectName(QStringLiteral("PhoneNumber_Label"));
        PhoneNumber_Label->setGeometry(QRect(40, 320, 54, 12));
        PhoneNumber_Label->setStyleSheet(QStringLiteral("font: 8pt \"Arial\";"));
        RealName_Label = new QLabel(Register);
        RealName_Label->setObjectName(QStringLiteral("RealName_Label"));
        RealName_Label->setGeometry(QRect(40, 280, 54, 12));
        RealName_Label->setStyleSheet(QStringLiteral("font: 8pt \"Arial\";"));
        IdCard_Label = new QLabel(Register);
        IdCard_Label->setObjectName(QStringLiteral("IdCard_Label"));
        IdCard_Label->setGeometry(QRect(40, 360, 71, 16));
        IdCard_Label->setStyleSheet(QStringLiteral("font: 8pt \"Arial\";"));
        UserName_Edit = new QLineEdit(Register);
        UserName_Edit->setObjectName(QStringLiteral("UserName_Edit"));
        UserName_Edit->setGeometry(QRect(110, 120, 241, 20));
        UserName_Edit->setBaseSize(QSize(0, 0));
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
        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 440, 93, 28));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", nullptr));
        UserName_Label->setText(QApplication::translate("Register", "\347\224\250\346\210\267\345\220\215", nullptr));
        PassWord_Label->setText(QApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        PassWordTwo_Label->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        Place_Label->setText(QApplication::translate("Register", "\345\270\270\351\251\273\345\234\260", nullptr));
        PhoneNumber_Label->setText(QApplication::translate("Register", "\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        RealName_Label->setText(QApplication::translate("Register", "\347\234\237\345\256\236\345\247\223\345\220\215", nullptr));
        IdCard_Label->setText(QApplication::translate("Register", "\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
