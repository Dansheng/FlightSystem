/********************************************************************************
** Form generated from reading UI file 'findflight.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDFLIGHT_H
#define UI_FINDFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FindFlight
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QComboBox *CityStart_comboBox;
    QLabel *label_2;
    QComboBox *CityEnd_comboBox;
    QDateEdit *TimeStart;
    QLabel *label_3;

    void setupUi(QDialog *FindFlight)
    {
        if (FindFlight->objectName().isEmpty())
            FindFlight->setObjectName(QStringLiteral("FindFlight"));
        FindFlight->resize(613, 429);
        label = new QLabel(FindFlight);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 90, 81, 41));
        pushButton = new QPushButton(FindFlight);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 260, 75, 23));
        CityStart_comboBox = new QComboBox(FindFlight);
        CityStart_comboBox->setObjectName(QStringLiteral("CityStart_comboBox"));
        CityStart_comboBox->setGeometry(QRect(150, 100, 131, 22));
        CityStart_comboBox->setStyleSheet(QStringLiteral("border-color: rgb(191, 166, 255);"));
        label_2 = new QLabel(FindFlight);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 150, 81, 41));
        CityEnd_comboBox = new QComboBox(FindFlight);
        CityEnd_comboBox->setObjectName(QStringLiteral("CityEnd_comboBox"));
        CityEnd_comboBox->setGeometry(QRect(150, 160, 131, 22));
        TimeStart = new QDateEdit(FindFlight);
        TimeStart->setObjectName(QStringLiteral("TimeStart"));
        TimeStart->setGeometry(QRect(150, 220, 110, 22));
        label_3 = new QLabel(FindFlight);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 210, 81, 41));

        retranslateUi(FindFlight);

        QMetaObject::connectSlotsByName(FindFlight);
    } // setupUi

    void retranslateUi(QDialog *FindFlight)
    {
        FindFlight->setWindowTitle(QApplication::translate("FindFlight", "Dialog", nullptr));
        label->setText(QApplication::translate("FindFlight", "\345\207\272\345\217\221\345\237\216\345\270\202", nullptr));
        pushButton->setText(QApplication::translate("FindFlight", "\346\237\245\350\257\242", nullptr));
        label_2->setText(QApplication::translate("FindFlight", "\345\210\260\350\276\276\345\237\216\345\270\202", nullptr));
        label_3->setText(QApplication::translate("FindFlight", "\345\207\272\345\217\221\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindFlight: public Ui_FindFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDFLIGHT_H
