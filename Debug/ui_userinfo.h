/********************************************************************************
** Form generated from reading UI file 'userinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFO_H
#define UI_USERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserInfo
{
public:
    QLabel *UserName;
    QLabel *Logo;
    QLabel *Photo;
    QLabel *RealName_Label;
    QLabel *PhoneNumber_Label;
    QLabel *IdCard_Label;
    QLabel *Place_Label;
    QLabel *RealName;
    QLabel *PhoneNumber;
    QLabel *Place;
    QLabel *IdCard;
    QLabel *Background;
    QLabel *UserName_Label;
    QLabel *NotLoggedIn;
    QPushButton *LogIn_Btn;

    void setupUi(QDialog *UserInfo)
    {
        if (UserInfo->objectName().isEmpty())
            UserInfo->setObjectName(QStringLiteral("UserInfo"));
        UserInfo->resize(353, 495);
        UserInfo->setMinimumSize(QSize(353, 495));
        UserInfo->setMaximumSize(QSize(353, 495));
        UserInfo->setStyleSheet(QString::fromUtf8("/*\345\205\263\351\227\255\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#Close{\n"
"	color:rgb(226,227,230);\n"
"}\n"
"/*\345\205\263\351\227\255\346\214\211\351\222\256\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#Close:hover{\n"
"	color:rgb(0,0,0);\n"
"}\n"
"/*\350\203\214\346\231\257\350\211\262*/\n"
"#Background{\n"
"	background:rgb(247,247,247);\n"
"}\n"
"#LogIn_Btn{\n"
"	border:1px solids rgb(199,199,199);\n"
"	border-radius:8px;\n"
"	color:#fff;\n"
"	background-color:rgb(10,114,200);\n"
"}\n"
"#LogIn_Btn:hover{\n"
"	background-color:rgb(49,175,235);\n"
"}"));
        UserName = new QLabel(UserInfo);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(150, 200, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Songti SC"));
        font.setPointSize(12);
        UserName->setFont(font);
        Logo = new QLabel(UserInfo);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(130, 0, 241, 221));
        Logo->setStyleSheet(QStringLiteral("image: url(:/images/Backgroud_userinfo.jpeg);"));
        Photo = new QLabel(UserInfo);
        Photo->setObjectName(QStringLiteral("Photo"));
        Photo->setGeometry(QRect(40, 80, 81, 71));
        Photo->setStyleSheet(QStringLiteral("image: url(:/images/Photo.png);"));
        RealName_Label = new QLabel(UserInfo);
        RealName_Label->setObjectName(QStringLiteral("RealName_Label"));
        RealName_Label->setGeometry(QRect(50, 250, 111, 31));
        RealName_Label->setFont(font);
        PhoneNumber_Label = new QLabel(UserInfo);
        PhoneNumber_Label->setObjectName(QStringLiteral("PhoneNumber_Label"));
        PhoneNumber_Label->setGeometry(QRect(50, 300, 121, 31));
        PhoneNumber_Label->setFont(font);
        IdCard_Label = new QLabel(UserInfo);
        IdCard_Label->setObjectName(QStringLiteral("IdCard_Label"));
        IdCard_Label->setGeometry(QRect(50, 400, 121, 31));
        IdCard_Label->setFont(font);
        Place_Label = new QLabel(UserInfo);
        Place_Label->setObjectName(QStringLiteral("Place_Label"));
        Place_Label->setGeometry(QRect(50, 350, 121, 31));
        Place_Label->setFont(font);
        RealName = new QLabel(UserInfo);
        RealName->setObjectName(QStringLiteral("RealName"));
        RealName->setGeometry(QRect(150, 250, 111, 31));
        RealName->setFont(font);
        PhoneNumber = new QLabel(UserInfo);
        PhoneNumber->setObjectName(QStringLiteral("PhoneNumber"));
        PhoneNumber->setGeometry(QRect(150, 300, 111, 31));
        PhoneNumber->setFont(font);
        Place = new QLabel(UserInfo);
        Place->setObjectName(QStringLiteral("Place"));
        Place->setGeometry(QRect(150, 350, 111, 31));
        Place->setFont(font);
        IdCard = new QLabel(UserInfo);
        IdCard->setObjectName(QStringLiteral("IdCard"));
        IdCard->setGeometry(QRect(150, 400, 251, 31));
        IdCard->setFont(font);
        Background = new QLabel(UserInfo);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(-50, -30, 541, 561));
        Background->setStyleSheet(QStringLiteral(""));
        UserName_Label = new QLabel(UserInfo);
        UserName_Label->setObjectName(QStringLiteral("UserName_Label"));
        UserName_Label->setEnabled(true);
        UserName_Label->setGeometry(QRect(50, 200, 111, 31));
        UserName_Label->setFont(font);
        NotLoggedIn = new QLabel(UserInfo);
        NotLoggedIn->setObjectName(QStringLiteral("NotLoggedIn"));
        NotLoggedIn->setGeometry(QRect(60, 240, 231, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("STKaiti"));
        font1.setPointSize(24);
        NotLoggedIn->setFont(font1);
        LogIn_Btn = new QPushButton(UserInfo);
        LogIn_Btn->setObjectName(QStringLiteral("LogIn_Btn"));
        LogIn_Btn->setGeometry(QRect(110, 340, 113, 32));
        Background->raise();
        Logo->raise();
        UserName->raise();
        Photo->raise();
        RealName_Label->raise();
        PhoneNumber_Label->raise();
        IdCard_Label->raise();
        Place_Label->raise();
        RealName->raise();
        PhoneNumber->raise();
        Place->raise();
        IdCard->raise();
        UserName_Label->raise();
        NotLoggedIn->raise();
        LogIn_Btn->raise();

        retranslateUi(UserInfo);

        QMetaObject::connectSlotsByName(UserInfo);
    } // setupUi

    void retranslateUi(QDialog *UserInfo)
    {
        UserInfo->setWindowTitle(QApplication::translate("UserInfo", "Dialog", Q_NULLPTR));
        UserName->setText(QApplication::translate("UserInfo", " UserName", Q_NULLPTR));
        Logo->setText(QString());
        Photo->setText(QString());
        RealName_Label->setText(QApplication::translate("UserInfo", "\347\234\237\345\256\236\345\247\223\345\220\215", Q_NULLPTR));
        PhoneNumber_Label->setText(QApplication::translate("UserInfo", "\346\211\213\346\234\272\345\217\267\347\240\201", Q_NULLPTR));
        IdCard_Label->setText(QApplication::translate("UserInfo", "\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201", Q_NULLPTR));
        Place_Label->setText(QApplication::translate("UserInfo", "\345\270\270\351\251\273\345\234\260", Q_NULLPTR));
        RealName->setText(QApplication::translate("UserInfo", "\350\213\217\350\211\257\346\211\215", Q_NULLPTR));
        PhoneNumber->setText(QApplication::translate("UserInfo", "18791098362", Q_NULLPTR));
        Place->setText(QApplication::translate("UserInfo", "\345\216\246\351\227\250", Q_NULLPTR));
        IdCard->setText(QApplication::translate("UserInfo", "622222199907289999 ", Q_NULLPTR));
        Background->setText(QString());
        UserName_Label->setText(QApplication::translate("UserInfo", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        NotLoggedIn->setText(QApplication::translate("UserInfo", "\346\202\250\350\277\230\346\234\252\347\231\273\345\275\225\357\274\214\350\257\267\347\231\273\345\275\225", Q_NULLPTR));
        LogIn_Btn->setText(QApplication::translate("UserInfo", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserInfo: public Ui_UserInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_H
