/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
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
    QLabel *Logo;
    QLabel *Background;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(403, 512);
        Register->setMinimumSize(QSize(403, 512));
        Register->setMaximumSize(QSize(403, 512));
        Register->setStyleSheet(QString::fromUtf8("/*\347\231\273\345\275\225\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#Sure_Button{\n"
"	border-radius:4px;\n"
"	border:none;\n"
"	background-color: rgb(20,72,165);\n"
"	color:#fff;\n"
"	padding-top:6px;\n"
"	padding-bottom:7px;\n"
"}\n"
"/*\347\231\273\345\275\225\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#Sure_Button:hover{\n"
"	background-color:rgb(9,163,220);\n"
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
""
                        "}\n"
"#IdCard_Edit:hover{\n"
"	\n"
"	border:1px solid rgb(21,131,221)\n"
"	\n"
"}\n"
"/*\350\276\223\345\205\245\346\241\206\346\240\267\345\274\217*/\n"
"#RealName_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"	padding-left:2px;\n"
"}\n"
"#UserName_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"	padding-left:2px;\n"
"}\n"
"#PassWord_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"	padding-left:2px;\n"
"}\n"
"#PassWordTwo_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px soli"
                        "d rgb(209,209,209);\n"
"	padding-left:2px;\n"
"}\n"
"#Place_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"	padding-left:2px;\n"
"}\n"
"#PhoneNumber_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"	padding-left:2px;\n"
"}\n"
"#IdCard_Edit{\n"
"	border-top-left-radius:4px;\n"
"	border-top-right-radius:4px;\n"
"	border-bottom-right-radius:4px;\n"
"	border-bottom-left-radius:4px;	\n"
"	border:1px solid rgb(209,209,209);\n"
"	padding-left:2px;\n"
"}\n"
"/*\345\272\225\350\211\262*/\n"
"#Background{\n"
"	background-color:rgb(246,246,246);\n"
"}\n"
"/*\346\240\207\347\255\276\351\242\234\350\211\262*/\n"
"#UserName_Label{\n"
"	color:rgb(63,63,63);\n"
"}\n"
"#PassWord_Label{\n"
"	color:rgb(63,63,63);\n"
"}\n"
"#PassWordTwo_Label{\n"
"	"
                        "color:rgb(63,63,63);\n"
"}\n"
"#Place_Label{\n"
"	color:rgb(63,63,63);\n"
"}\n"
"#RealName_Label{\n"
"	color:rgb(63,63,63);\n"
"}\n"
"#PhoneNumber_Label{\n"
"	color:rgb(63,63,63);\n"
"}\n"
"#IdCard_Label{\n"
"	color:rgb(63,63,63);\n"
"}"));
        UserName_Label = new QLabel(Register);
        UserName_Label->setObjectName(QStringLiteral("UserName_Label"));
        UserName_Label->setGeometry(QRect(60, 80, 41, 20));
        QFont font;
        font.setFamily(QStringLiteral("Songti SC"));
        font.setBold(false);
        font.setWeight(50);
        UserName_Label->setFont(font);
        UserName_Label->setStyleSheet(QStringLiteral(""));
        UserName_Label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        PassWord_Label = new QLabel(Register);
        PassWord_Label->setObjectName(QStringLiteral("PassWord_Label"));
        PassWord_Label->setGeometry(QRect(70, 120, 31, 16));
        PassWord_Label->setFont(font);
        PassWord_Label->setStyleSheet(QStringLiteral(""));
        PassWordTwo_Label = new QLabel(Register);
        PassWordTwo_Label->setObjectName(QStringLiteral("PassWordTwo_Label"));
        PassWordTwo_Label->setGeometry(QRect(50, 160, 51, 21));
        PassWordTwo_Label->setFont(font);
        PassWordTwo_Label->setStyleSheet(QStringLiteral(""));
        Place_Label = new QLabel(Register);
        Place_Label->setObjectName(QStringLiteral("Place_Label"));
        Place_Label->setGeometry(QRect(60, 200, 41, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Songti SC"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        Place_Label->setFont(font1);
        Place_Label->setStyleSheet(QStringLiteral(""));
        PhoneNumber_Label = new QLabel(Register);
        PhoneNumber_Label->setObjectName(QStringLiteral("PhoneNumber_Label"));
        PhoneNumber_Label->setGeometry(QRect(50, 280, 54, 20));
        PhoneNumber_Label->setFont(font);
        PhoneNumber_Label->setStyleSheet(QStringLiteral(""));
        RealName_Label = new QLabel(Register);
        RealName_Label->setObjectName(QStringLiteral("RealName_Label"));
        RealName_Label->setGeometry(QRect(50, 240, 52, 19));
        RealName_Label->setFont(font);
        RealName_Label->setStyleSheet(QStringLiteral(""));
        IdCard_Label = new QLabel(Register);
        IdCard_Label->setObjectName(QStringLiteral("IdCard_Label"));
        IdCard_Label->setGeometry(QRect(40, 320, 71, 16));
        IdCard_Label->setFont(font);
        IdCard_Label->setStyleSheet(QStringLiteral(""));
        UserName_Edit = new QLineEdit(Register);
        UserName_Edit->setObjectName(QStringLiteral("UserName_Edit"));
        UserName_Edit->setGeometry(QRect(110, 80, 241, 20));
        UserName_Edit->setBaseSize(QSize(0, 0));
        PassWord_Edit = new QLineEdit(Register);
        PassWord_Edit->setObjectName(QStringLiteral("PassWord_Edit"));
        PassWord_Edit->setGeometry(QRect(110, 120, 241, 20));
        PassWordTwo_Edit = new QLineEdit(Register);
        PassWordTwo_Edit->setObjectName(QStringLiteral("PassWordTwo_Edit"));
        PassWordTwo_Edit->setGeometry(QRect(110, 160, 241, 20));
        Place_Edit = new QLineEdit(Register);
        Place_Edit->setObjectName(QStringLiteral("Place_Edit"));
        Place_Edit->setGeometry(QRect(110, 200, 241, 20));
        RealName_Edit = new QLineEdit(Register);
        RealName_Edit->setObjectName(QStringLiteral("RealName_Edit"));
        RealName_Edit->setGeometry(QRect(110, 240, 241, 20));
        PhoneNumber_Edit = new QLineEdit(Register);
        PhoneNumber_Edit->setObjectName(QStringLiteral("PhoneNumber_Edit"));
        PhoneNumber_Edit->setGeometry(QRect(110, 280, 241, 20));
        IdCard_Edit = new QLineEdit(Register);
        IdCard_Edit->setObjectName(QStringLiteral("IdCard_Edit"));
        IdCard_Edit->setGeometry(QRect(110, 320, 241, 20));
        Sure_Button = new QPushButton(Register);
        Sure_Button->setObjectName(QStringLiteral("Sure_Button"));
        Sure_Button->setGeometry(QRect(150, 410, 93, 28));
        Sure_Button->setStyleSheet(QStringLiteral("font: 13pt \"Songti SC\";"));
        Logo = new QLabel(Register);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(0, 240, 351, 281));
        Logo->setStyleSheet(QStringLiteral("image: url(:/images/Backgroud_Regist.jpeg);"));
        Background = new QLabel(Register);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(-10, -40, 421, 621));
        Background->setMinimumSize(QSize(421, 621));
        Background->setMaximumSize(QSize(421, 621));
        Background->raise();
        Logo->raise();
        UserName_Label->raise();
        PassWord_Label->raise();
        PassWordTwo_Label->raise();
        Place_Label->raise();
        PhoneNumber_Label->raise();
        RealName_Label->raise();
        IdCard_Label->raise();
        UserName_Edit->raise();
        PassWord_Edit->raise();
        PassWordTwo_Edit->raise();
        Place_Edit->raise();
        RealName_Edit->raise();
        PhoneNumber_Edit->raise();
        IdCard_Edit->raise();
        Sure_Button->raise();

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
        Sure_Button->setText(QApplication::translate("Register", "\346\263\250\345\206\214", Q_NULLPTR));
        Logo->setText(QString());
        Background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
