/********************************************************************************
** Form generated from reading UI file 'addfight.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFIGHT_H
#define UI_ADDFIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddFight
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
    QDateTimeEdit *TimeStart;
    QDateTimeEdit *TimeEnd;
    QLabel *Price_label;
    QLineEdit *Price_Line;
    QLabel *Discount_label;
    QLineEdit *Discout_Line;
    QLabel *PeopleNumber_label;
    QLineEdit *PeopleNumber_Line;
    QLabel *TicketLeft_Label;
    QLineEdit *TicketLeft_Line;
    QPushButton *pushButton;

    void setupUi(QDialog *AddFight)
    {
        if (AddFight->objectName().isEmpty())
            AddFight->setObjectName(QStringLiteral("AddFight"));
        AddFight->resize(474, 631);
        AddFight_label = new QLabel(AddFight);
        AddFight_label->setObjectName(QStringLiteral("AddFight_label"));
        AddFight_label->setGeometry(QRect(40, 20, 121, 61));
        CityStart_Line = new QLineEdit(AddFight);
        CityStart_Line->setObjectName(QStringLiteral("CityStart_Line"));
        CityStart_Line->setGeometry(QRect(130, 90, 113, 20));
        CityStart_label = new QLabel(AddFight);
        CityStart_label->setObjectName(QStringLiteral("CityStart_label"));
        CityStart_label->setGeometry(QRect(60, 70, 101, 51));
        CityEnd_label = new QLabel(AddFight);
        CityEnd_label->setObjectName(QStringLiteral("CityEnd_label"));
        CityEnd_label->setGeometry(QRect(60, 110, 101, 51));
        CityEnd_Line = new QLineEdit(AddFight);
        CityEnd_Line->setObjectName(QStringLiteral("CityEnd_Line"));
        CityEnd_Line->setGeometry(QRect(130, 130, 113, 20));
        FightNumber_Line = new QLineEdit(AddFight);
        FightNumber_Line->setObjectName(QStringLiteral("FightNumber_Line"));
        FightNumber_Line->setGeometry(QRect(130, 170, 113, 20));
        FightNumber_label = new QLabel(AddFight);
        FightNumber_label->setObjectName(QStringLiteral("FightNumber_label"));
        FightNumber_label->setGeometry(QRect(60, 160, 101, 51));
        PlaneNumber_Line = new QLineEdit(AddFight);
        PlaneNumber_Line->setObjectName(QStringLiteral("PlaneNumber_Line"));
        PlaneNumber_Line->setGeometry(QRect(130, 220, 113, 20));
        PlaneNumber_label = new QLabel(AddFight);
        PlaneNumber_label->setObjectName(QStringLiteral("PlaneNumber_label"));
        PlaneNumber_label->setGeometry(QRect(60, 210, 101, 51));
        TimeStart_label = new QLabel(AddFight);
        TimeStart_label->setObjectName(QStringLiteral("TimeStart_label"));
        TimeStart_label->setGeometry(QRect(60, 260, 101, 51));
        TimeEnd_label = new QLabel(AddFight);
        TimeEnd_label->setObjectName(QStringLiteral("TimeEnd_label"));
        TimeEnd_label->setGeometry(QRect(60, 310, 101, 51));
        TimeStart = new QDateTimeEdit(AddFight);
        TimeStart->setObjectName(QStringLiteral("TimeStart"));
        TimeStart->setGeometry(QRect(150, 280, 194, 22));
        TimeEnd = new QDateTimeEdit(AddFight);
        TimeEnd->setObjectName(QStringLiteral("TimeEnd"));
        TimeEnd->setGeometry(QRect(150, 320, 194, 22));
        Price_label = new QLabel(AddFight);
        Price_label->setObjectName(QStringLiteral("Price_label"));
        Price_label->setGeometry(QRect(60, 360, 101, 51));
        Price_Line = new QLineEdit(AddFight);
        Price_Line->setObjectName(QStringLiteral("Price_Line"));
        Price_Line->setGeometry(QRect(140, 370, 113, 20));
        Discount_label = new QLabel(AddFight);
        Discount_label->setObjectName(QStringLiteral("Discount_label"));
        Discount_label->setGeometry(QRect(60, 410, 101, 51));
        Discout_Line = new QLineEdit(AddFight);
        Discout_Line->setObjectName(QStringLiteral("Discout_Line"));
        Discout_Line->setGeometry(QRect(130, 420, 113, 20));
        PeopleNumber_label = new QLabel(AddFight);
        PeopleNumber_label->setObjectName(QStringLiteral("PeopleNumber_label"));
        PeopleNumber_label->setGeometry(QRect(60, 460, 101, 51));
        PeopleNumber_Line = new QLineEdit(AddFight);
        PeopleNumber_Line->setObjectName(QStringLiteral("PeopleNumber_Line"));
        PeopleNumber_Line->setGeometry(QRect(130, 470, 113, 20));
        TicketLeft_Label = new QLabel(AddFight);
        TicketLeft_Label->setObjectName(QStringLiteral("TicketLeft_Label"));
        TicketLeft_Label->setGeometry(QRect(60, 510, 101, 51));
        TicketLeft_Line = new QLineEdit(AddFight);
        TicketLeft_Line->setObjectName(QStringLiteral("TicketLeft_Line"));
        TicketLeft_Line->setGeometry(QRect(130, 520, 113, 20));
        pushButton = new QPushButton(AddFight);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 570, 93, 28));

        retranslateUi(AddFight);

        QMetaObject::connectSlotsByName(AddFight);
    } // setupUi

    void retranslateUi(QDialog *AddFight)
    {
        AddFight->setWindowTitle(QApplication::translate("AddFight", "Dialog", Q_NULLPTR));
        AddFight_label->setText(QApplication::translate("AddFight", "\346\267\273\345\212\240\350\210\252\347\217\255\344\277\241\346\201\257", Q_NULLPTR));
        CityStart_label->setText(QApplication::translate("AddFight", "\345\207\272\345\217\221\345\237\216\345\270\202", Q_NULLPTR));
        CityEnd_label->setText(QApplication::translate("AddFight", "\345\210\260\350\276\276\345\237\216\345\270\202", Q_NULLPTR));
        FightNumber_label->setText(QApplication::translate("AddFight", "\350\210\252\347\217\255\345\217\267", Q_NULLPTR));
        PlaneNumber_Line->setText(QString());
        PlaneNumber_label->setText(QApplication::translate("AddFight", "\351\243\236\346\234\272\345\217\267", Q_NULLPTR));
        TimeStart_label->setText(QApplication::translate("AddFight", "\351\242\204\350\256\241\350\265\267\351\243\236\346\227\266\351\227\264", Q_NULLPTR));
        TimeEnd_label->setText(QApplication::translate("AddFight", "\351\242\204\350\256\241\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        Price_label->setText(QApplication::translate("AddFight", "\347\245\250\344\273\267", Q_NULLPTR));
        Price_Line->setText(QString());
        Discount_label->setText(QApplication::translate("AddFight", "\346\212\230\346\211\243", Q_NULLPTR));
        Discout_Line->setText(QString());
        PeopleNumber_label->setText(QApplication::translate("AddFight", "\344\271\230\345\221\230\345\256\232\351\242\235", Q_NULLPTR));
        PeopleNumber_Line->setText(QString());
        TicketLeft_Label->setText(QApplication::translate("AddFight", "\344\275\231\347\245\250\351\207\217", Q_NULLPTR));
        TicketLeft_Line->setText(QString());
        pushButton->setText(QApplication::translate("AddFight", "\346\267\273\345\212\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddFight: public Ui_AddFight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFIGHT_H
