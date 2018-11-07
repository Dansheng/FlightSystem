/********************************************************************************
** Form generated from reading UI file 'findfight.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDFIGHT_H
#define UI_FINDFIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FindFight
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *FindFight)
    {
        if (FindFight->objectName().isEmpty())
            FindFight->setObjectName(QStringLiteral("FindFight"));
        FindFight->resize(400, 300);
        label = new QLabel(FindFight);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 251, 101));
        pushButton = new QPushButton(FindFight);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 220, 75, 23));

        retranslateUi(FindFight);

        QMetaObject::connectSlotsByName(FindFight);
    } // setupUi

    void retranslateUi(QDialog *FindFight)
    {
        FindFight->setWindowTitle(QApplication::translate("FindFight", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("FindFight", "\350\277\231\351\207\214\345\206\231\346\234\200\346\234\200\346\234\200\344\270\273\350\246\201\347\232\204\350\210\252\347\217\255\346\237\245\350\257\242\347\263\273\347\273\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FindFight", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FindFight: public Ui_FindFight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDFIGHT_H
