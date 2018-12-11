/********************************************************************************
** Form generated from reading UI file 'findflight.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDFLIGHT_H
#define UI_FINDFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindFlight
{
public:
    QLabel *CityStart_Label;
    QPushButton *Find_Button;
    QComboBox *CityStart_ComboBox;
    QLabel *CityEnd_Label;
    QComboBox *CityEnd_ComboBox;
    QDateEdit *TimeStart;
    QLabel *Time_Label;
    QTableView *TableView;
    QPushButton *Book_Button;
    QPushButton *CityRaider_Button;
    QLabel *Background;

    void setupUi(QDialog *FindFlight)
    {
        if (FindFlight->objectName().isEmpty())
            FindFlight->setObjectName(QStringLiteral("FindFlight"));
        FindFlight->resize(1197, 663);
        FindFlight->setMinimumSize(QSize(1197, 663));
        FindFlight->setMaximumSize(QSize(1197, 663));
        FindFlight->setStyleSheet(QString::fromUtf8("#TableView{\n"
"	color:black;\n"
"	background-color: rgb(255,255,255);\n"
"	gridline-color: rgb(199,199,199);\n"
"	alternate-background-color: rgb(199, 199, 199);\n"
"}\n"
"QHeaderView {\n"
"    color: black;\n"
"    font: bold 10pt;\n"
"    background-color: rgb(65,105,225);/*\350\256\276\347\275\256\350\241\250\345\244\264\347\251\272\347\231\275\345\214\272\345\237\237\350\203\214\346\231\257\350\211\262*/\n"
"    border: 0px solid rgb(144, 144, 144);\n"
"    border:0px solid rgb(191,191,191);\n"
"    border-left-color: rgba(255, 255, 255, 0);\n"
"    border-top-color: rgba(255, 255, 255, 0);\n"
"    border-radius:0px;\n"
"    min-height:29px;\n"
"} \n"
"/*\345\272\225\350\211\262*/\n"
"#Background{\n"
"	background-color:rgb(247,247,247);\n"
"}\n"
"#Find_Button{\n"
"	background-color:rgb(28,142,225);\n"
"	color:#fff;\n"
"	border:1px solid rgb(199,199,199);\n"
"	border-radius:8px;\n"
"	padding-top:1px;\n"
"	padding-bottom:2px;\n"
"}\n"
"#Find_Button:hover{\n"
"	background-color:rgb(49,175,235);\n"
"}\n"
"#Bo"
                        "ok_Button{\n"
"	background-color:rgb(28,142,225);\n"
"	color:#fff;\n"
"	border:1px solid rgb(199,199,199);\n"
"	border-radius:8px;\n"
"	padding-top:1px;\n"
"	padding-bottom:2px;\n"
"}\n"
"#Book_Button:hover{\n"
"	background-color:rgb(49,175,235);\n"
"}\n"
"#CityRaider_Button{\n"
"	background-color:rgb(28,142,225);\n"
"	color:#fff;\n"
"	border:1px solid rgb(199,199,199);\n"
"	border-radius:8px;\n"
"}\n"
"#CityRaider_Button:hover{\n"
"	background-color:rgb(49,175,235);\n"
"}"));
        CityStart_Label = new QLabel(FindFlight);
        CityStart_Label->setObjectName(QStringLiteral("CityStart_Label"));
        CityStart_Label->setGeometry(QRect(50, 140, 81, 41));
        QFont font;
        font.setFamily(QStringLiteral("STKaiti"));
        font.setPointSize(14);
        CityStart_Label->setFont(font);
        Find_Button = new QPushButton(FindFlight);
        Find_Button->setObjectName(QStringLiteral("Find_Button"));
        Find_Button->setGeometry(QRect(110, 340, 91, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("STKaiti"));
        font1.setPointSize(15);
        Find_Button->setFont(font1);
        CityStart_ComboBox = new QComboBox(FindFlight);
        CityStart_ComboBox->setObjectName(QStringLiteral("CityStart_ComboBox"));
        CityStart_ComboBox->setGeometry(QRect(120, 150, 131, 22));
        CityStart_ComboBox->setStyleSheet(QStringLiteral("border-color: rgb(191, 166, 255);"));
        CityEnd_Label = new QLabel(FindFlight);
        CityEnd_Label->setObjectName(QStringLiteral("CityEnd_Label"));
        CityEnd_Label->setGeometry(QRect(50, 200, 81, 41));
        CityEnd_Label->setFont(font);
        CityEnd_ComboBox = new QComboBox(FindFlight);
        CityEnd_ComboBox->setObjectName(QStringLiteral("CityEnd_ComboBox"));
        CityEnd_ComboBox->setGeometry(QRect(120, 210, 131, 22));
        TimeStart = new QDateEdit(FindFlight);
        TimeStart->setObjectName(QStringLiteral("TimeStart"));
        TimeStart->setGeometry(QRect(120, 270, 110, 22));
        Time_Label = new QLabel(FindFlight);
        Time_Label->setObjectName(QStringLiteral("Time_Label"));
        Time_Label->setGeometry(QRect(50, 260, 81, 41));
        Time_Label->setFont(font);
        TableView = new QTableView(FindFlight);
        TableView->setObjectName(QStringLiteral("TableView"));
        TableView->setGeometry(QRect(310, 30, 801, 591));
        TableView->setStyleSheet(QStringLiteral(""));
        Book_Button = new QPushButton(FindFlight);
        Book_Button->setObjectName(QStringLiteral("Book_Button"));
        Book_Button->setGeometry(QRect(110, 400, 91, 21));
        Book_Button->setFont(font1);
        CityRaider_Button = new QPushButton(FindFlight);
        CityRaider_Button->setObjectName(QStringLiteral("CityRaider_Button"));
        CityRaider_Button->setGeometry(QRect(110, 460, 91, 21));
        CityRaider_Button->setFont(font1);
        Background = new QLabel(FindFlight);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(-11, -5, 1331, 841));
        Background->setMinimumSize(QSize(1331, 841));
        Background->setMaximumSize(QSize(1331, 841));
        Background->raise();
        CityStart_Label->raise();
        Find_Button->raise();
        CityStart_ComboBox->raise();
        CityEnd_Label->raise();
        CityEnd_ComboBox->raise();
        TimeStart->raise();
        Time_Label->raise();
        TableView->raise();
        Book_Button->raise();
        CityRaider_Button->raise();

        retranslateUi(FindFlight);

        QMetaObject::connectSlotsByName(FindFlight);
    } // setupUi

    void retranslateUi(QDialog *FindFlight)
    {
        FindFlight->setWindowTitle(QApplication::translate("FindFlight", "Dialog", Q_NULLPTR));
        CityStart_Label->setText(QApplication::translate("FindFlight", "\345\207\272\345\217\221\345\237\216\345\270\202", Q_NULLPTR));
        Find_Button->setText(QApplication::translate("FindFlight", "\346\237\245\350\257\242", Q_NULLPTR));
        CityEnd_Label->setText(QApplication::translate("FindFlight", "\345\210\260\350\276\276\345\237\216\345\270\202", Q_NULLPTR));
        Time_Label->setText(QApplication::translate("FindFlight", "\345\207\272\345\217\221\346\227\245\346\234\237", Q_NULLPTR));
        Book_Button->setText(QApplication::translate("FindFlight", "\351\242\204\345\256\232", Q_NULLPTR));
        CityRaider_Button->setText(QApplication::translate("FindFlight", "\345\237\216\345\270\202\345\257\274\346\270\270", Q_NULLPTR));
        Background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FindFlight: public Ui_FindFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDFLIGHT_H
