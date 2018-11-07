/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
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
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(885, 359);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Logo = new QLabel(centralWidget);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(180, 10, 501, 81));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        Find_Button = new QPushButton(centralWidget);
        Find_Button->setObjectName(QStringLiteral("Find_Button"));
        Find_Button->setGeometry(QRect(70, 120, 181, 171));
        Find_Button->setStyleSheet(QStringLiteral("border-image: url(:/images/find_btn.png);"));
        Order_Button = new QPushButton(centralWidget);
        Order_Button->setObjectName(QStringLiteral("Order_Button"));
        Order_Button->setGeometry(QRect(340, 120, 181, 171));
        Order_Button->setStyleSheet(QStringLiteral("border-image: url(:/images/order_btn.png);"));
        User_Button = new QPushButton(centralWidget);
        User_Button->setObjectName(QStringLiteral("User_Button"));
        User_Button->setGeometry(QRect(600, 120, 181, 171));
        User_Button->setStyleSheet(QStringLiteral("border-image: url(:/images/user_btn.png);"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Logo->setText(QString());
        Find_Button->setText(QString());
        Order_Button->setText(QString());
        User_Button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
