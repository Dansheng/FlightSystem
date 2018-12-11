/********************************************************************************
** Form generated from reading UI file 'orderquery.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERQUERY_H
#define UI_ORDERQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_OrderQuery
{
public:
    QLabel *MyOrder;
    QLabel *CityStart;
    QLabel *CityEnd;
    QLabel *Point;
    QLabel *Logo;
    QLabel *TimeStart;
    QLabel *TimeEnd;
    QLabel *FromTo;
    QLabel *PlaneNumber;
    QLabel *Money_Label;
    QLabel *Money;
    QLabel *BackgroundLogo;
    QLabel *Sentence;
    QLabel *Background;
    QPushButton *Close_Btn;
    QLabel *Data;
    QPushButton *CardBackground;

    void setupUi(QDialog *OrderQuery)
    {
        if (OrderQuery->objectName().isEmpty())
            OrderQuery->setObjectName(QStringLiteral("OrderQuery"));
        OrderQuery->resize(581, 509);
        OrderQuery->setMinimumSize(QSize(581, 509));
        OrderQuery->setMaximumSize(QSize(581, 509));
        OrderQuery->setStyleSheet(QLatin1String("#Logo{\n"
"	image: url(:/images/Logo_Order.png);\n"
"}\n"
"#Point{\n"
"	\n"
"	image: url(:/images/Point.png);\n"
"}\n"
"#CardBackground{\n"
"	\n"
"	border-image: url(:/images/CardBackground.png);\n"
"	\n"
"}\n"
"#CardBackground:hover{\n"
"	border-image: url(:/images/CardBackground2.png);\n"
"\n"
"}\n"
"#Background{\n"
"	background-color:rgb(247,247,247);\n"
"}\n"
"#Sentence{\n"
"	background-color:rgb(247,247,247);\n"
"	border:none;\n"
"}\n"
"#BackgroundLogo{\n"
"	\n"
"	image: url(:/images/BackgroundLogo_Order.png);\n"
"}\n"
"#Sentence{\n"
"	\n"
"	image: url(:/images/Sentence.jpg);\n"
"}\n"
"#TurnLeft{\n"
"	border-radius:4px;\n"
"}\n"
"#Close_Btn{\n"
"	border-radius:7px;\n"
"	border:none;\n"
"	background-color:none;\n"
"}\n"
"#Close_Btn:hover{\n"
"	border:1px solids rgb(175,175,175);\n"
"	background-color:rgb(255,0,0);\n"
"	border-radius:7px;\n"
"}\n"
"#NextCard{\n"
"	border-image: url(:/images/NextCard.png);\n"
"}"));
        MyOrder = new QLabel(OrderQuery);
        MyOrder->setObjectName(QStringLiteral("MyOrder"));
        MyOrder->setGeometry(QRect(210, 20, 151, 41));
        QFont font;
        font.setFamily(QStringLiteral("STKaiti"));
        font.setPointSize(36);
        MyOrder->setFont(font);
        CityStart = new QLabel(OrderQuery);
        CityStart->setObjectName(QStringLiteral("CityStart"));
        CityStart->setGeometry(QRect(140, 110, 91, 28));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CityStart->sizePolicy().hasHeightForWidth());
        CityStart->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("STKaiti"));
        font1.setPointSize(24);
        font1.setStrikeOut(false);
        CityStart->setFont(font1);
        CityEnd = new QLabel(OrderQuery);
        CityEnd->setObjectName(QStringLiteral("CityEnd"));
        CityEnd->setGeometry(QRect(310, 110, 101, 28));
        QFont font2;
        font2.setFamily(QStringLiteral("STKaiti"));
        font2.setPointSize(24);
        CityEnd->setFont(font2);
        Point = new QLabel(OrderQuery);
        Point->setObjectName(QStringLiteral("Point"));
        Point->setGeometry(QRect(240, 110, 61, 28));
        Logo = new QLabel(OrderQuery);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(90, 100, 31, 41));
        TimeStart = new QLabel(OrderQuery);
        TimeStart->setObjectName(QStringLiteral("TimeStart"));
        TimeStart->setGeometry(QRect(240, 150, 51, 16));
        QFont font3;
        font3.setFamily(QStringLiteral("STKaiti"));
        font3.setPointSize(18);
        TimeStart->setFont(font3);
        TimeEnd = new QLabel(OrderQuery);
        TimeEnd->setObjectName(QStringLiteral("TimeEnd"));
        TimeEnd->setGeometry(QRect(320, 150, 51, 16));
        TimeEnd->setFont(font3);
        FromTo = new QLabel(OrderQuery);
        FromTo->setObjectName(QStringLiteral("FromTo"));
        FromTo->setGeometry(QRect(290, 150, 21, 16));
        FromTo->setFont(font3);
        PlaneNumber = new QLabel(OrderQuery);
        PlaneNumber->setObjectName(QStringLiteral("PlaneNumber"));
        PlaneNumber->setGeometry(QRect(140, 180, 71, 16));
        PlaneNumber->setFont(font3);
        Money_Label = new QLabel(OrderQuery);
        Money_Label->setObjectName(QStringLiteral("Money_Label"));
        Money_Label->setGeometry(QRect(440, 110, 21, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("STKaiti"));
        font4.setPointSize(14);
        Money_Label->setFont(font4);
        Money_Label->setStyleSheet(QStringLiteral("color:rgb(250,126,8);"));
        Money = new QLabel(OrderQuery);
        Money->setObjectName(QStringLiteral("Money"));
        Money->setGeometry(QRect(460, 100, 71, 41));
        Money->setFont(font2);
        Money->setStyleSheet(QStringLiteral("color:rgb(250,126,8);"));
        BackgroundLogo = new QLabel(OrderQuery);
        BackgroundLogo->setObjectName(QStringLiteral("BackgroundLogo"));
        BackgroundLogo->setGeometry(QRect(260, 180, 361, 421));
        Sentence = new QLabel(OrderQuery);
        Sentence->setObjectName(QStringLiteral("Sentence"));
        Sentence->setGeometry(QRect(40, 260, 261, 211));
        Background = new QLabel(OrderQuery);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(-60, -70, 711, 831));
        Background->setMinimumSize(QSize(711, 831));
        Background->setMaximumSize(QSize(711, 831));
        Close_Btn = new QPushButton(OrderQuery);
        Close_Btn->setObjectName(QStringLiteral("Close_Btn"));
        Close_Btn->setGeometry(QRect(498, 90, 15, 15));
        Data = new QLabel(OrderQuery);
        Data->setObjectName(QStringLiteral("Data"));
        Data->setGeometry(QRect(140, 150, 101, 16));
        Data->setFont(font3);
        CardBackground = new QPushButton(OrderQuery);
        CardBackground->setObjectName(QStringLiteral("CardBackground"));
        CardBackground->setGeometry(QRect(60, 80, 461, 151));
        Background->raise();
        BackgroundLogo->raise();
        CardBackground->raise();
        Sentence->raise();
        MyOrder->raise();
        CityStart->raise();
        CityEnd->raise();
        Point->raise();
        Logo->raise();
        TimeStart->raise();
        TimeEnd->raise();
        FromTo->raise();
        PlaneNumber->raise();
        Money_Label->raise();
        Money->raise();
        Close_Btn->raise();
        Data->raise();

        retranslateUi(OrderQuery);

        QMetaObject::connectSlotsByName(OrderQuery);
    } // setupUi

    void retranslateUi(QDialog *OrderQuery)
    {
        OrderQuery->setWindowTitle(QApplication::translate("OrderQuery", "Dialog", Q_NULLPTR));
        MyOrder->setText(QApplication::translate("OrderQuery", "\346\210\221\347\232\204\350\256\242\345\215\225", Q_NULLPTR));
        CityStart->setText(QApplication::translate("OrderQuery", "\350\245\277\345\256\211", Q_NULLPTR));
        CityEnd->setText(QApplication::translate("OrderQuery", "\344\270\212\346\265\267", Q_NULLPTR));
        Point->setText(QString());
        Logo->setText(QString());
        TimeStart->setText(QApplication::translate("OrderQuery", " 10:26", Q_NULLPTR));
        TimeEnd->setText(QApplication::translate("OrderQuery", "13:42", Q_NULLPTR));
        FromTo->setText(QApplication::translate("OrderQuery", "\350\207\263", Q_NULLPTR));
        PlaneNumber->setText(QApplication::translate("OrderQuery", "MU2345", Q_NULLPTR));
        Money_Label->setText(QApplication::translate("OrderQuery", "\357\277\245", Q_NULLPTR));
        Money->setText(QApplication::translate("OrderQuery", "367", Q_NULLPTR));
        BackgroundLogo->setText(QString());
        Sentence->setText(QString());
        Background->setText(QString());
        Close_Btn->setText(QApplication::translate("OrderQuery", "X", Q_NULLPTR));
        Data->setText(QApplication::translate("OrderQuery", "2018/12/12", Q_NULLPTR));
        CardBackground->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrderQuery: public Ui_OrderQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERQUERY_H
