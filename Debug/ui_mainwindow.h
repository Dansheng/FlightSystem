/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Logo;
    QPushButton *Find_Button;
    QPushButton *Order_Button;
    QPushButton *User_Button;
    QPushButton *AddFlight;
    QLabel *Background;
    QLabel *Find_Label;
    QLabel *Order_Label;
    QLabel *User_Label;
    QLabel *Logo_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(859, 387);
        MainWindow->setMinimumSize(QSize(859, 387));
        MainWindow->setMaximumSize(QSize(859, 387));
        MainWindow->setStyleSheet(QLatin1String("#Background{\n"
"	background-color:rgb(247,247,247);\n"
"}\n"
"#AddFlight{\n"
"	border-radius:6px;\n"
"	border:1px solid rgb(180,180,180);\n"
"	background-color:#fff;\n"
"}\n"
"#AddFlight:hover{\n"
"	border-radius:6px;\n"
"	border:1px solid rgb(15,118,131);\n"
"}\n"
"#Find_Label{\n"
"	image: url(:/images/FlightEnquiry.png);\n"
"}\n"
"#Order_Label{\n"
"	image: url(:/images/OrderManagement.png);\n"
"}\n"
"#User_Label{\n"
"	image: url(:/images/UserInformation.png);\n"
"}\n"
"#Find_Button{\n"
"	border:none;\n"
"	background-color:none;\n"
"	color:#6E6E6E;\n"
"}\n"
"#Find_Button:hover{\n"
"	color:rgb(0,0,0);\n"
"}\n"
"#Order_Button{\n"
"	border:none;\n"
"	background-color:none;\n"
"	color:#6E6E6E;\n"
"}\n"
"#Order_Button:hover{\n"
"	color:rgb(0,0,0);\n"
"}\n"
"#User_Button{\n"
"	border:none;\n"
"	background-color:none;\n"
"	color:#6E6E6E;\n"
"}\n"
"#User_Button:hover{\n"
"	color:rgb(0,0,0);\n"
"}\n"
"#Logo_2{\n"
"border-image: url(:/images/Logo_AddFlight2.png);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Logo = new QLabel(centralWidget);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(230, 20, 391, 71));
        QFont font;
        font.setFamily(QStringLiteral("STKaiti"));
        font.setPointSize(48);
        Logo->setFont(font);
        Find_Button = new QPushButton(centralWidget);
        Find_Button->setObjectName(QStringLiteral("Find_Button"));
        Find_Button->setGeometry(QRect(90, 250, 161, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("STKaiti"));
        font1.setPointSize(24);
        Find_Button->setFont(font1);
        Find_Button->setStyleSheet(QStringLiteral(""));
        Order_Button = new QPushButton(centralWidget);
        Order_Button->setObjectName(QStringLiteral("Order_Button"));
        Order_Button->setGeometry(QRect(350, 250, 171, 41));
        Order_Button->setFont(font1);
        Order_Button->setStyleSheet(QStringLiteral(""));
        User_Button = new QPushButton(centralWidget);
        User_Button->setObjectName(QStringLiteral("User_Button"));
        User_Button->setGeometry(QRect(600, 250, 191, 41));
        User_Button->setFont(font1);
        User_Button->setStyleSheet(QStringLiteral(""));
        AddFlight = new QPushButton(centralWidget);
        AddFlight->setObjectName(QStringLiteral("AddFlight"));
        AddFlight->setGeometry(QRect(750, 320, 71, 20));
        Background = new QLabel(centralWidget);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(-80, -50, 1021, 571));
        Background->setMinimumSize(QSize(1021, 571));
        Background->setMaximumSize(QSize(1021, 571));
        Find_Label = new QLabel(centralWidget);
        Find_Label->setObjectName(QStringLiteral("Find_Label"));
        Find_Label->setGeometry(QRect(110, 130, 111, 101));
        Order_Label = new QLabel(centralWidget);
        Order_Label->setObjectName(QStringLiteral("Order_Label"));
        Order_Label->setGeometry(QRect(390, 130, 91, 101));
        User_Label = new QLabel(centralWidget);
        User_Label->setObjectName(QStringLiteral("User_Label"));
        User_Label->setGeometry(QRect(650, 130, 91, 101));
        Logo_2 = new QLabel(centralWidget);
        Logo_2->setObjectName(QStringLiteral("Logo_2"));
        Logo_2->setGeometry(QRect(60, 20, 751, 81));
        MainWindow->setCentralWidget(centralWidget);
        Background->raise();
        Logo_2->raise();
        Logo->raise();
        Find_Button->raise();
        Order_Button->raise();
        User_Button->raise();
        AddFlight->raise();
        Find_Label->raise();
        Order_Label->raise();
        User_Label->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Logo->setText(QApplication::translate("MainWindow", "\350\210\252\347\251\272\350\256\242\347\245\250\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        Find_Button->setText(QApplication::translate("MainWindow", "\350\210\252\347\217\255\346\237\245\350\257\242", Q_NULLPTR));
        Order_Button->setText(QApplication::translate("MainWindow", "\350\256\242\345\215\225\347\256\241\347\220\206", Q_NULLPTR));
        User_Button->setText(QApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        AddFlight->setText(QApplication::translate("MainWindow", "AddFlight", Q_NULLPTR));
        Background->setText(QString());
        Find_Label->setText(QString());
        Order_Label->setText(QString());
        User_Label->setText(QString());
        Logo_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
