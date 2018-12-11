/********************************************************************************
** Form generated from reading UI file 'cityraider.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITYRAIDER_H
#define UI_CITYRAIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CityRaider
{
public:
    QPushButton *XianRailwayStation_Btn;
    QPushButton *BellTower_Btn;
    QPushButton *TerraCottaWarriors_Btn;
    QPushButton *DrumTower_Btn;
    QPushButton *ShaanxiHistoryMuseum_Btn;
    QCheckBox *XianRailwayStation_QRB;
    QCheckBox *TerraCottaWarriors_QRB;
    QCheckBox *ShaanxiHistoryMuseum_QRB;
    QCheckBox *DrumTower_QRB;
    QCheckBox *BellTower_QRB;
    QLabel *WantToGo;
    QLabel *SLB_GL_Route;
    QLabel *GL_ZL_Route;
    QLabel *ZL_XAZ_Route;
    QLabel *XAZ_BMY_Route;
    QLabel *SLB_ZL_Route;
    QLabel *SLB_XAZ_Route;
    QLabel *SLB_BMY_Route;
    QLabel *ZL_BMY_Route;
    QLabel *Background;
    QLabel *Heading;
    QLabel *RecommendedRoute_Label;
    QLabel *MapBackground;
    QLabel *RecommendedRoute;

    void setupUi(QDialog *CityRaider)
    {
        if (CityRaider->objectName().isEmpty())
            CityRaider->setObjectName(QStringLiteral("CityRaider"));
        CityRaider->resize(725, 534);
        CityRaider->setMinimumSize(QSize(725, 534));
        CityRaider->setMaximumSize(QSize(725, 534));
        QFont font;
        font.setPointSize(18);
        CityRaider->setFont(font);
        CityRaider->setStyleSheet(QString::fromUtf8("/*\351\231\225\345\216\206\345\215\232\345\210\260\351\222\237\346\245\274\350\267\257\347\272\277\346\240\267\345\274\217*/\n"
"#SLB_GL_Route{\n"
"	border-image: url(:/images/SLB_GL_Route1.png);\n"
"}\n"
"/*\351\274\223\346\245\274\345\210\260\351\222\237\346\245\274\350\267\257\347\272\277\346\240\267\345\274\217*/\n"
"#GL_ZL_Route{	\n"
"	border-image: url(:/images/GL_ZL_Route1.png);\n"
"}\n"
"/*\351\222\237\346\245\274\345\210\260\350\245\277\345\256\211\347\253\231\350\267\257\347\272\277\346\240\267\345\274\217*/\n"
"#ZL_XAZ_Route{\n"
"	border-image: url(:/images/ZL_XAZ_Route1.png);\n"
"}\n"
"/*\350\245\277\345\256\211\347\253\231\345\210\260\345\205\265\351\251\254\344\277\221\350\267\257\347\272\277\346\240\267\345\274\217*/\n"
"#XAZ_BMY_Route{\n"
"	border-image: url(:/images/XAZ_BMY_Route1.png);\n"
"}\n"
"/*\351\231\225\345\216\206\345\215\232\345\210\260\351\222\237\346\245\274\350\267\257\347\272\277\346\240\267\345\274\217*/\n"
"#SLB_ZL_Route{\n"
"	border-image: url(:/images/SLB_ZL_Route1.png);\n"
""
                        "}\n"
"/*\351\231\225\345\216\206\345\215\232\345\210\260\350\245\277\345\256\211\347\253\231\350\267\257\347\272\277\346\240\267\345\274\217*/\n"
"#SLB_XAZ_Route{\n"
"	border-image: url(:/images/SLB_XAZ_Route1.png);\n"
"}\n"
"/*\351\231\225\345\216\206\345\215\232\345\210\260\345\205\265\351\251\254\344\277\221\350\267\257\347\272\277\346\240\267\345\274\217*/\n"
"#SLB_BMY_Route{\n"
"	border-image: url(:/images/SLB_BMY_Route1.png);\n"
"}\n"
"/*\351\222\237\346\245\274\345\210\260\345\205\265\351\251\254\344\277\221\350\267\257\347\272\277\346\240\267\345\274\217*/\n"
"#ZL_BMY_Route{\n"
"	border-image: url(:/images/ZL_BMY_Route1.png);\n"
"}\n"
"/*\345\272\225\350\211\262*/\n"
"#Background{\n"
"	background-color:rgb(247,247,247);\n"
"}\n"
"/*\351\222\237\346\245\274\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#BellTower_Btn{\n"
"	background-color:none;\n"
"	border:none;\n"
"	image: url(:/images/BellTower.png);\n"
"}\n"
"/*\351\222\237\346\245\274\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254"
                        "\345\201\234\346\240\267\345\274\217*/\n"
"#BellTower_Btn:hover{\n"
"	background-color:none;\n"
"	border:none;\n"
"	image: url(:/images/BellTower2.png);\n"
"}\n"
"/*\351\274\223\346\245\274\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#DrumTower_Btn{\n"
"	image: url(:/images/DrumTower.png);\n"
"	background-color:none;\n"
"	border:none;\n"
"}\n"
"/*\351\274\223\346\245\274\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#DrumTower_Btn:hover{\n"
"	image: url(:/images/DrumTower2.png);\n"
"	background-color:none;\n"
"	border:none;\n"
"}\n"
"/*\351\231\225\345\216\206\345\215\232\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#ShaanxiHistoryMuseum_Btn{\n"
"	background-color:none;\n"
"	border:none;\n"
"	image: url(:/images/ShaanxiHistoryMuseum.png);\n"
"}\n"
"/*\351\231\225\345\216\206\345\215\232\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#ShaanxiHistoryMuseum_Btn:hover{\n"
"	background-c"
                        "olor:none;\n"
"	border:none;\n"
"	image: url(:/images/ShaanxiHistoryMuseum2.png);\n"
"}\n"
"/*\350\245\277\345\256\211\347\253\231\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#XianRailwayStation_Btn{\n"
"	background-color:none;\n"
"	image: url(:/images/XianRailwayStation.png);	\n"
"	border:none;\n"
"}\n"
"/*\350\245\277\345\256\211\347\253\231\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#XianRailwayStation_Btn:hover{\n"
"	background-color:none;\n"
"	image: url(:/images/XianRailwayStation2.png);	\n"
"	border:none;\n"
"}\n"
"/*\345\205\265\351\251\254\344\277\221\346\214\211\351\222\256\346\240\267\345\274\217*/\n"
"#TerraCottaWarriors_Btn{\n"
"	image: url(:/images/TerraCottaWarriors.png);\n"
"	background-color:none;	\n"
"	border:none;\n"
"}\n"
"/*\345\205\265\351\251\254\344\277\221\346\214\211\351\222\256\351\274\240\346\240\207\346\202\254\345\201\234\346\240\267\345\274\217*/\n"
"#TerraCottaWarriors_Btn:hover{\n"
"	image: url(:/images/TerraC"
                        "ottaWarriors2.png);\n"
"	background-color:none;	\n"
"	border:none;\n"
"}\n"
"/*\345\234\260\345\233\276\345\272\225\350\211\262*/\n"
"#MapBackground{\n"
"	background-color:rgb(255,255,255);\n"
"}"));
        XianRailwayStation_Btn = new QPushButton(CityRaider);
        XianRailwayStation_Btn->setObjectName(QStringLiteral("XianRailwayStation_Btn"));
        XianRailwayStation_Btn->setGeometry(QRect(390, 190, 71, 51));
        XianRailwayStation_Btn->setStyleSheet(QStringLiteral(""));
        BellTower_Btn = new QPushButton(CityRaider);
        BellTower_Btn->setObjectName(QStringLiteral("BellTower_Btn"));
        BellTower_Btn->setGeometry(QRect(300, 260, 71, 51));
        BellTower_Btn->setStyleSheet(QStringLiteral(""));
        TerraCottaWarriors_Btn = new QPushButton(CityRaider);
        TerraCottaWarriors_Btn->setObjectName(QStringLiteral("TerraCottaWarriors_Btn"));
        TerraCottaWarriors_Btn->setGeometry(QRect(590, 100, 61, 61));
        TerraCottaWarriors_Btn->setStyleSheet(QStringLiteral(""));
        DrumTower_Btn = new QPushButton(CityRaider);
        DrumTower_Btn->setObjectName(QStringLiteral("DrumTower_Btn"));
        DrumTower_Btn->setGeometry(QRect(190, 330, 111, 51));
        DrumTower_Btn->setStyleSheet(QStringLiteral(""));
        ShaanxiHistoryMuseum_Btn = new QPushButton(CityRaider);
        ShaanxiHistoryMuseum_Btn->setObjectName(QStringLiteral("ShaanxiHistoryMuseum_Btn"));
        ShaanxiHistoryMuseum_Btn->setGeometry(QRect(350, 380, 91, 51));
        ShaanxiHistoryMuseum_Btn->setStyleSheet(QStringLiteral(""));
        XianRailwayStation_QRB = new QCheckBox(CityRaider);
        XianRailwayStation_QRB->setObjectName(QStringLiteral("XianRailwayStation_QRB"));
        XianRailwayStation_QRB->setGeometry(QRect(40, 170, 100, 20));
        TerraCottaWarriors_QRB = new QCheckBox(CityRaider);
        TerraCottaWarriors_QRB->setObjectName(QStringLiteral("TerraCottaWarriors_QRB"));
        TerraCottaWarriors_QRB->setGeometry(QRect(40, 210, 100, 20));
        ShaanxiHistoryMuseum_QRB = new QCheckBox(CityRaider);
        ShaanxiHistoryMuseum_QRB->setObjectName(QStringLiteral("ShaanxiHistoryMuseum_QRB"));
        ShaanxiHistoryMuseum_QRB->setGeometry(QRect(40, 250, 100, 20));
        DrumTower_QRB = new QCheckBox(CityRaider);
        DrumTower_QRB->setObjectName(QStringLiteral("DrumTower_QRB"));
        DrumTower_QRB->setGeometry(QRect(40, 290, 100, 20));
        BellTower_QRB = new QCheckBox(CityRaider);
        BellTower_QRB->setObjectName(QStringLiteral("BellTower_QRB"));
        BellTower_QRB->setGeometry(QRect(40, 330, 100, 20));
        WantToGo = new QLabel(CityRaider);
        WantToGo->setObjectName(QStringLiteral("WantToGo"));
        WantToGo->setGeometry(QRect(30, 110, 111, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("STKaiti"));
        font1.setPointSize(24);
        WantToGo->setFont(font1);
        SLB_GL_Route = new QLabel(CityRaider);
        SLB_GL_Route->setObjectName(QStringLiteral("SLB_GL_Route"));
        SLB_GL_Route->setGeometry(QRect(270, 370, 81, 31));
        SLB_GL_Route->setStyleSheet(QStringLiteral(""));
        GL_ZL_Route = new QLabel(CityRaider);
        GL_ZL_Route->setObjectName(QStringLiteral("GL_ZL_Route"));
        GL_ZL_Route->setGeometry(QRect(270, 300, 51, 41));
        ZL_XAZ_Route = new QLabel(CityRaider);
        ZL_XAZ_Route->setObjectName(QStringLiteral("ZL_XAZ_Route"));
        ZL_XAZ_Route->setGeometry(QRect(349, 230, 61, 41));
        XAZ_BMY_Route = new QLabel(CityRaider);
        XAZ_BMY_Route->setObjectName(QStringLiteral("XAZ_BMY_Route"));
        XAZ_BMY_Route->setGeometry(QRect(450, 140, 161, 61));
        SLB_ZL_Route = new QLabel(CityRaider);
        SLB_ZL_Route->setObjectName(QStringLiteral("SLB_ZL_Route"));
        SLB_ZL_Route->setGeometry(QRect(350, 310, 51, 71));
        SLB_XAZ_Route = new QLabel(CityRaider);
        SLB_XAZ_Route->setObjectName(QStringLiteral("SLB_XAZ_Route"));
        SLB_XAZ_Route->setGeometry(QRect(419, 230, 31, 161));
        SLB_BMY_Route = new QLabel(CityRaider);
        SLB_BMY_Route->setObjectName(QStringLiteral("SLB_BMY_Route"));
        SLB_BMY_Route->setGeometry(QRect(419, 140, 201, 261));
        ZL_BMY_Route = new QLabel(CityRaider);
        ZL_BMY_Route->setObjectName(QStringLiteral("ZL_BMY_Route"));
        ZL_BMY_Route->setGeometry(QRect(350, 140, 271, 161));
        Background = new QLabel(CityRaider);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(-20, -30, 801, 591));
        Heading = new QLabel(CityRaider);
        Heading->setObjectName(QStringLiteral("Heading"));
        Heading->setGeometry(QRect(220, 30, 291, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("STKaiti"));
        font2.setPointSize(36);
        Heading->setFont(font2);
        RecommendedRoute_Label = new QLabel(CityRaider);
        RecommendedRoute_Label->setObjectName(QStringLiteral("RecommendedRoute_Label"));
        RecommendedRoute_Label->setGeometry(QRect(40, 460, 281, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("STKaiti"));
        font3.setPointSize(20);
        RecommendedRoute_Label->setFont(font3);
        MapBackground = new QLabel(CityRaider);
        MapBackground->setObjectName(QStringLiteral("MapBackground"));
        MapBackground->setGeometry(QRect(179, 105, 491, 331));
        RecommendedRoute = new QLabel(CityRaider);
        RecommendedRoute->setObjectName(QStringLiteral("RecommendedRoute"));
        RecommendedRoute->setGeometry(QRect(210, 460, 561, 41));
        RecommendedRoute->setFont(font3);
        Background->raise();
        MapBackground->raise();
        XianRailwayStation_QRB->raise();
        TerraCottaWarriors_QRB->raise();
        ShaanxiHistoryMuseum_QRB->raise();
        DrumTower_QRB->raise();
        BellTower_QRB->raise();
        WantToGo->raise();
        SLB_GL_Route->raise();
        GL_ZL_Route->raise();
        DrumTower_Btn->raise();
        ShaanxiHistoryMuseum_Btn->raise();
        BellTower_Btn->raise();
        TerraCottaWarriors_Btn->raise();
        Heading->raise();
        SLB_XAZ_Route->raise();
        SLB_ZL_Route->raise();
        ZL_XAZ_Route->raise();
        RecommendedRoute_Label->raise();
        SLB_BMY_Route->raise();
        ZL_BMY_Route->raise();
        XAZ_BMY_Route->raise();
        XianRailwayStation_Btn->raise();
        RecommendedRoute->raise();

        retranslateUi(CityRaider);

        QMetaObject::connectSlotsByName(CityRaider);
    } // setupUi

    void retranslateUi(QDialog *CityRaider)
    {
        CityRaider->setWindowTitle(QApplication::translate("CityRaider", "Dialog", Q_NULLPTR));
        XianRailwayStation_Btn->setText(QString());
        BellTower_Btn->setText(QString());
        TerraCottaWarriors_Btn->setText(QString());
        DrumTower_Btn->setText(QString());
        ShaanxiHistoryMuseum_Btn->setText(QString());
        XianRailwayStation_QRB->setText(QApplication::translate("CityRaider", "\350\245\277\345\256\211\347\201\253\350\275\246\347\253\231", Q_NULLPTR));
        TerraCottaWarriors_QRB->setText(QApplication::translate("CityRaider", "\345\205\265\351\251\254\344\277\221", Q_NULLPTR));
        ShaanxiHistoryMuseum_QRB->setText(QApplication::translate("CityRaider", "\351\231\225\350\245\277\345\216\206\345\217\262\345\215\232\347\211\251\351\246\206", Q_NULLPTR));
        DrumTower_QRB->setText(QApplication::translate("CityRaider", "\351\274\223\346\245\274", Q_NULLPTR));
        BellTower_QRB->setText(QApplication::translate("CityRaider", "\351\222\237\346\245\274", Q_NULLPTR));
        WantToGo->setText(QApplication::translate("CityRaider", "\346\202\250\346\203\263\345\216\273\345\223\252\357\274\237", Q_NULLPTR));
        SLB_GL_Route->setText(QString());
        GL_ZL_Route->setText(QString());
        ZL_XAZ_Route->setText(QString());
        XAZ_BMY_Route->setText(QString());
        SLB_ZL_Route->setText(QString());
        SLB_XAZ_Route->setText(QString());
        SLB_BMY_Route->setText(QString());
        ZL_BMY_Route->setText(QString());
        Background->setText(QString());
        Heading->setText(QApplication::translate("CityRaider", "\345\237\216\345\270\202\346\231\257\347\202\271\350\267\257\347\272\277\346\224\273\347\225\245", Q_NULLPTR));
        RecommendedRoute_Label->setText(QApplication::translate("CityRaider", "\344\270\272\346\202\250\346\216\250\350\215\220\347\232\204\350\267\257\347\272\277\346\230\257\357\274\232", Q_NULLPTR));
        MapBackground->setText(QString());
        RecommendedRoute->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CityRaider: public Ui_CityRaider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITYRAIDER_H
