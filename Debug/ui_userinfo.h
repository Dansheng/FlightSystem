/********************************************************************************
** Form generated from reading UI file 'userinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
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

QT_BEGIN_NAMESPACE

class Ui_UserInfo
{
public:
    QLabel *UserName_label;
    QLabel *UserName;

    void setupUi(QDialog *UserInfo)
    {
        if (UserInfo->objectName().isEmpty())
            UserInfo->setObjectName(QStringLiteral("UserInfo"));
        UserInfo->resize(400, 300);
        UserName_label = new QLabel(UserInfo);
        UserName_label->setObjectName(QStringLiteral("UserName_label"));
        UserName_label->setGeometry(QRect(50, 60, 54, 12));
        UserName = new QLabel(UserInfo);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(140, 70, 54, 12));

        retranslateUi(UserInfo);

        QMetaObject::connectSlotsByName(UserInfo);
    } // setupUi

    void retranslateUi(QDialog *UserInfo)
    {
        UserInfo->setWindowTitle(QApplication::translate("UserInfo", "Dialog", Q_NULLPTR));
        UserName_label->setText(QApplication::translate("UserInfo", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        UserName->setText(QApplication::translate("UserInfo", "123333333333333", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserInfo: public Ui_UserInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_H
