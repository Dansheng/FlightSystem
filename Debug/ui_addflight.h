/********************************************************************************
** Form generated from reading UI file 'addflight.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFLIGHT_H
#define UI_ADDFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_AddFlight
{
public:
    QLabel *AddFight_label;
    QLineEdit *CityStart_Line;
    QLabel *CityStart_label;
    QLabel *CityEnd_label;
    QLineEdit *CityEnd_Line;
    QLineEdit *FightNumber_Line;
    QLabel *FightNumber_label;
    QLineEdit *PlaneNumber_Line;
    QLabel *PlaneNumber_label;
    QLabel *TimeStart_label;
    QLabel *TimeEnd_label;
    QLabel *Price_label;
    QLineEdit *Price_Line;
    QLabel *Discount_label;
    QLineEdit *Discout_Line;
    QLabel *PeopleNumber_label;
    QLineEdit *PeopleNumber_Line;
    QLabel *TicketLeft_Label;
    QLineEdit *TicketLeft_Line;
    QPushButton *pushButton;
    QTimeEdit *TimeStart;
    QTimeEdit *TimeEnd;
    QLabel *TimeEnd_label_2;
    QCheckBox *Monday;
    QCheckBox *Tuesday;
    QCheckBox *Wednesday;
    QCheckBox *Thursday;
    QCheckBox *Friday;
    QCheckBox *Sunday;
    QCheckBox *Saturday;
    QLabel *Background;
    QLabel *Logo2;

    void setupUi(QDialog *AddFlight)
    {
        if (AddFlight->objectName().isEmpty())
            AddFlight->setObjectName(QStringLiteral("AddFlight"));
        AddFlight->resize(621, 598);
        AddFlight->setMinimumSize(QSize(621, 598));
        AddFlight->setMaximumSize(QSize(621, 598));
        AddFlight->setStyleSheet(QLatin1String("#CityStart_Line{\n"
"	border:1px solid rgb(209,209,209);\n"
"	border-radius:6px;\n"
"}\n"
"#CityStart_Line:hover{\n"
"	border:1px solid rgb(21,131,221);\n"
"}\n"
"#CityEnd_Line{\n"
"	border:1px solid rgb(209,209,209);\n"
"	border-radius:6px;\n"
"}\n"
"#CityEnd_Line:hover{\n"
"	border:1px solid rgb(21,131,221);\n"
"}\n"
"#Discout_Line{\n"
"	border:1px solid rgb(209,209,209);\n"
"	border-radius:6px;\n"
"}\n"
"#Discout_Line:hover{\n"
"	border:1px solid rgb(21,131,221);\n"
"}\n"
"#FightNumber_Line{\n"
"	border:1px solid rgb(209,209,209);\n"
"	border-radius:6px;\n"
"}\n"
"#FightNumber_Line:hover{\n"
"	border:1px solid rgb(21,131,221);\n"
"}\n"
"#PeopleNumber_Line{\n"
"	border:1px solid rgb(209,209,209);\n"
"	border-radius:6px;\n"
"}\n"
"#PeopleNumber_Line:hover{\n"
"	border:1px solid rgb(21,131,221);\n"
"}\n"
"#PlaneNumber_Line{\n"
"	border:1px solid rgb(209,209,209);\n"
"	border-radius:6px;\n"
"}\n"
"#PlaneNumber_Line:hover{\n"
"	border:1px solid rgb(21,131,221);\n"
"}\n"
"#Price_Line{\n"
"	border:1px solid rgb(20"
                        "9,209,209);\n"
"	border-radius:6px;\n"
"}\n"
"#Price_Line:hover{\n"
"	border:1px solid rgb(21,131,221);\n"
"}\n"
"#TicketLeft_Line{\n"
"	border:1px solid rgb(209,209,209);\n"
"	border-radius:6px;\n"
"}\n"
"#TicketLeft_Line:hover{\n"
"	border:1px solid rgb(21,131,221);\n"
"}\n"
"\n"
"#pushButton{\n"
"	border:none;\n"
"	border-radius:6px;\n"
"	background-color:rgb(20,72,156);\n"
"	color:#fff;\n"
"}\n"
"#pushButton:hover{\n"
"	border:none;\n"
"	background-color:rgb(21,131,221);\n"
"	color:#fff;\n"
"}\n"
"#Background{	\n"
"	background-color:rgb(247,247,247);\n"
"}\n"
"#Logo{\n"
"	\n"
"	border-image: url(:/images/Logo_AddFlight2.png);\n"
"}\n"
"#Logo2{\n"
"	\n"
"	border-image: url(:/images/Logo2.png);\n"
"	\n"
"}"));
        AddFight_label = new QLabel(AddFlight);
        AddFight_label->setObjectName(QStringLiteral("AddFight_label"));
        AddFight_label->setGeometry(QRect(190, 20, 181, 41));
        QFont font;
        font.setFamily(QStringLiteral("STKaiti"));
        font.setPointSize(30);
        AddFight_label->setFont(font);
        CityStart_Line = new QLineEdit(AddFlight);
        CityStart_Line->setObjectName(QStringLiteral("CityStart_Line"));
        CityStart_Line->setGeometry(QRect(130, 90, 113, 20));
        CityStart_label = new QLabel(AddFlight);
        CityStart_label->setObjectName(QStringLiteral("CityStart_label"));
        CityStart_label->setGeometry(QRect(60, 90, 61, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("STKaiti"));
        font1.setPointSize(14);
        CityStart_label->setFont(font1);
        CityEnd_label = new QLabel(AddFlight);
        CityEnd_label->setObjectName(QStringLiteral("CityEnd_label"));
        CityEnd_label->setGeometry(QRect(60, 130, 61, 21));
        CityEnd_label->setFont(font1);
        CityEnd_Line = new QLineEdit(AddFlight);
        CityEnd_Line->setObjectName(QStringLiteral("CityEnd_Line"));
        CityEnd_Line->setGeometry(QRect(130, 130, 113, 20));
        FightNumber_Line = new QLineEdit(AddFlight);
        FightNumber_Line->setObjectName(QStringLiteral("FightNumber_Line"));
        FightNumber_Line->setGeometry(QRect(130, 170, 113, 20));
        FightNumber_label = new QLabel(AddFlight);
        FightNumber_label->setObjectName(QStringLiteral("FightNumber_label"));
        FightNumber_label->setGeometry(QRect(70, 170, 41, 21));
        FightNumber_label->setFont(font1);
        PlaneNumber_Line = new QLineEdit(AddFlight);
        PlaneNumber_Line->setObjectName(QStringLiteral("PlaneNumber_Line"));
        PlaneNumber_Line->setGeometry(QRect(130, 210, 113, 20));
        PlaneNumber_label = new QLabel(AddFlight);
        PlaneNumber_label->setObjectName(QStringLiteral("PlaneNumber_label"));
        PlaneNumber_label->setGeometry(QRect(70, 210, 41, 21));
        PlaneNumber_label->setFont(font1);
        TimeStart_label = new QLabel(AddFlight);
        TimeStart_label->setObjectName(QStringLiteral("TimeStart_label"));
        TimeStart_label->setGeometry(QRect(30, 250, 91, 21));
        TimeStart_label->setFont(font1);
        TimeEnd_label = new QLabel(AddFlight);
        TimeEnd_label->setObjectName(QStringLiteral("TimeEnd_label"));
        TimeEnd_label->setGeometry(QRect(30, 290, 91, 21));
        TimeEnd_label->setFont(font1);
        Price_label = new QLabel(AddFlight);
        Price_label->setObjectName(QStringLiteral("Price_label"));
        Price_label->setGeometry(QRect(80, 360, 31, 21));
        Price_label->setFont(font1);
        Price_Line = new QLineEdit(AddFlight);
        Price_Line->setObjectName(QStringLiteral("Price_Line"));
        Price_Line->setGeometry(QRect(130, 360, 113, 20));
        Discount_label = new QLabel(AddFlight);
        Discount_label->setObjectName(QStringLiteral("Discount_label"));
        Discount_label->setGeometry(QRect(80, 400, 31, 21));
        Discount_label->setFont(font1);
        Discout_Line = new QLineEdit(AddFlight);
        Discout_Line->setObjectName(QStringLiteral("Discout_Line"));
        Discout_Line->setGeometry(QRect(130, 400, 113, 20));
        PeopleNumber_label = new QLabel(AddFlight);
        PeopleNumber_label->setObjectName(QStringLiteral("PeopleNumber_label"));
        PeopleNumber_label->setGeometry(QRect(60, 440, 61, 21));
        PeopleNumber_label->setFont(font1);
        PeopleNumber_Line = new QLineEdit(AddFlight);
        PeopleNumber_Line->setObjectName(QStringLiteral("PeopleNumber_Line"));
        PeopleNumber_Line->setGeometry(QRect(130, 440, 113, 20));
        TicketLeft_Label = new QLabel(AddFlight);
        TicketLeft_Label->setObjectName(QStringLiteral("TicketLeft_Label"));
        TicketLeft_Label->setGeometry(QRect(70, 480, 41, 21));
        TicketLeft_Label->setFont(font1);
        TicketLeft_Line = new QLineEdit(AddFlight);
        TicketLeft_Line->setObjectName(QStringLiteral("TicketLeft_Line"));
        TicketLeft_Line->setGeometry(QRect(130, 480, 113, 20));
        pushButton = new QPushButton(AddFlight);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 540, 93, 28));
        TimeStart = new QTimeEdit(AddFlight);
        TimeStart->setObjectName(QStringLiteral("TimeStart"));
        TimeStart->setGeometry(QRect(130, 250, 118, 22));
        TimeEnd = new QTimeEdit(AddFlight);
        TimeEnd->setObjectName(QStringLiteral("TimeEnd"));
        TimeEnd->setGeometry(QRect(130, 290, 118, 22));
        TimeEnd_label_2 = new QLabel(AddFlight);
        TimeEnd_label_2->setObjectName(QStringLiteral("TimeEnd_label_2"));
        TimeEnd_label_2->setGeometry(QRect(80, 320, 41, 31));
        TimeEnd_label_2->setFont(font1);
        Monday = new QCheckBox(AddFlight);
        Monday->setObjectName(QStringLiteral("Monday"));
        Monday->setGeometry(QRect(130, 330, 51, 16));
        Monday->setFont(font1);
        Monday->setChecked(false);
        Tuesday = new QCheckBox(AddFlight);
        Tuesday->setObjectName(QStringLiteral("Tuesday"));
        Tuesday->setGeometry(QRect(200, 330, 71, 16));
        Tuesday->setFont(font1);
        Wednesday = new QCheckBox(AddFlight);
        Wednesday->setObjectName(QStringLiteral("Wednesday"));
        Wednesday->setGeometry(QRect(270, 330, 71, 16));
        Wednesday->setFont(font1);
        Thursday = new QCheckBox(AddFlight);
        Thursday->setObjectName(QStringLiteral("Thursday"));
        Thursday->setGeometry(QRect(340, 330, 71, 16));
        Thursday->setFont(font1);
        Friday = new QCheckBox(AddFlight);
        Friday->setObjectName(QStringLiteral("Friday"));
        Friday->setGeometry(QRect(410, 330, 71, 16));
        Friday->setFont(font1);
        Sunday = new QCheckBox(AddFlight);
        Sunday->setObjectName(QStringLiteral("Sunday"));
        Sunday->setGeometry(QRect(550, 330, 71, 16));
        Sunday->setFont(font1);
        Saturday = new QCheckBox(AddFlight);
        Saturday->setObjectName(QStringLiteral("Saturday"));
        Saturday->setGeometry(QRect(480, 330, 71, 16));
        Saturday->setFont(font1);
        Background = new QLabel(AddFlight);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(-10, -50, 701, 741));
        Logo2 = new QLabel(AddFlight);
        Logo2->setObjectName(QStringLiteral("Logo2"));
        Logo2->setGeometry(QRect(240, 50, 451, 451));
        Background->raise();
        Logo2->raise();
        AddFight_label->raise();
        CityStart_Line->raise();
        CityStart_label->raise();
        CityEnd_label->raise();
        CityEnd_Line->raise();
        FightNumber_Line->raise();
        FightNumber_label->raise();
        PlaneNumber_Line->raise();
        PlaneNumber_label->raise();
        TimeStart_label->raise();
        TimeEnd_label->raise();
        Price_label->raise();
        Price_Line->raise();
        Discount_label->raise();
        Discout_Line->raise();
        PeopleNumber_label->raise();
        PeopleNumber_Line->raise();
        TicketLeft_Label->raise();
        TicketLeft_Line->raise();
        pushButton->raise();
        TimeStart->raise();
        TimeEnd->raise();
        TimeEnd_label_2->raise();
        Monday->raise();
        Tuesday->raise();
        Wednesday->raise();
        Thursday->raise();
        Friday->raise();
        Sunday->raise();
        Saturday->raise();

        retranslateUi(AddFlight);

        QMetaObject::connectSlotsByName(AddFlight);
    } // setupUi

    void retranslateUi(QDialog *AddFlight)
    {
        AddFlight->setWindowTitle(QApplication::translate("AddFlight", "Dialog", Q_NULLPTR));
        AddFight_label->setText(QApplication::translate("AddFlight", "\346\267\273\345\212\240\350\210\252\347\217\255\344\277\241\346\201\257", Q_NULLPTR));
        CityStart_label->setText(QApplication::translate("AddFlight", "\345\207\272\345\217\221\345\237\216\345\270\202", Q_NULLPTR));
        CityEnd_label->setText(QApplication::translate("AddFlight", "\345\210\260\350\276\276\345\237\216\345\270\202", Q_NULLPTR));
        FightNumber_label->setText(QApplication::translate("AddFlight", "\350\210\252\347\217\255\345\217\267", Q_NULLPTR));
        PlaneNumber_Line->setText(QString());
        PlaneNumber_label->setText(QApplication::translate("AddFlight", "\351\243\236\346\234\272\345\217\267", Q_NULLPTR));
        TimeStart_label->setText(QApplication::translate("AddFlight", "\351\242\204\350\256\241\350\265\267\351\243\236\346\227\266\351\227\264", Q_NULLPTR));
        TimeEnd_label->setText(QApplication::translate("AddFlight", "\351\242\204\350\256\241\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        Price_label->setText(QApplication::translate("AddFlight", "\347\245\250\344\273\267", Q_NULLPTR));
        Price_Line->setText(QString());
        Discount_label->setText(QApplication::translate("AddFlight", "\346\212\230\346\211\243", Q_NULLPTR));
        Discout_Line->setText(QString());
        PeopleNumber_label->setText(QApplication::translate("AddFlight", "\344\271\230\345\221\230\345\256\232\351\242\235", Q_NULLPTR));
        PeopleNumber_Line->setText(QString());
        TicketLeft_Label->setText(QApplication::translate("AddFlight", "\344\275\231\347\245\250\351\207\217", Q_NULLPTR));
        TicketLeft_Line->setText(QString());
        pushButton->setText(QApplication::translate("AddFlight", "\346\267\273\345\212\240", Q_NULLPTR));
        TimeEnd_label_2->setText(QApplication::translate("AddFlight", "\345\221\250\346\234\237", Q_NULLPTR));
        Monday->setText(QApplication::translate("AddFlight", "\345\221\250\344\270\200", Q_NULLPTR));
        Tuesday->setText(QApplication::translate("AddFlight", "\345\221\250\344\272\214", Q_NULLPTR));
        Wednesday->setText(QApplication::translate("AddFlight", "\345\221\250\344\270\211", Q_NULLPTR));
        Thursday->setText(QApplication::translate("AddFlight", "\345\221\250\345\233\233", Q_NULLPTR));
        Friday->setText(QApplication::translate("AddFlight", "\345\221\250\344\272\224", Q_NULLPTR));
        Sunday->setText(QApplication::translate("AddFlight", "\345\221\250\346\227\245", Q_NULLPTR));
        Saturday->setText(QApplication::translate("AddFlight", "\345\221\250\345\205\255", Q_NULLPTR));
        Background->setText(QString());
        Logo2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddFlight: public Ui_AddFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFLIGHT_H
