/********************************************************************************
** Form generated from reading UI file 'orderquery.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERQUERY_H
#define UI_ORDERQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_OrderQuery
{
public:
    QLabel *label;

    void setupUi(QDialog *OrderQuery)
    {
        if (OrderQuery->objectName().isEmpty())
            OrderQuery->setObjectName(QStringLiteral("OrderQuery"));
        OrderQuery->resize(400, 300);
        label = new QLabel(OrderQuery);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 201, 61));

        retranslateUi(OrderQuery);

        QMetaObject::connectSlotsByName(OrderQuery);
    } // setupUi

    void retranslateUi(QDialog *OrderQuery)
    {
        OrderQuery->setWindowTitle(QApplication::translate("OrderQuery", "Dialog", nullptr));
        label->setText(QApplication::translate("OrderQuery", "\350\256\242\345\215\225\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderQuery: public Ui_OrderQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERQUERY_H
