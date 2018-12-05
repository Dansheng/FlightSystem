/********************************************************************************
** Form generated from reading UI file 'userinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFO_H
#define UI_USERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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
        UserName->setGeometry(QRect(100, 60, 201, 16));

        retranslateUi(UserInfo);

        QMetaObject::connectSlotsByName(UserInfo);
    } // setupUi

    void retranslateUi(QDialog *UserInfo)
    {
        UserInfo->setWindowTitle(QApplication::translate("UserInfo", "Dialog", nullptr));
        UserName_label->setText(QApplication::translate("UserInfo", "\347\224\250\346\210\267\345\220\215:", nullptr));
        UserName->setText(QApplication::translate("UserInfo", "123333333333333", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInfo: public Ui_UserInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_H
