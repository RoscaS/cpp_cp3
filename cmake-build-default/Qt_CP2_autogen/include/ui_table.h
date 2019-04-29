/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_table
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *lst_values;
    QLineEdit *f_new;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_add;
    QPushButton *btn_delete;
    QPushButton *btn_reset;

    void setupUi(QWidget *table)
    {
        if (table->objectName().isEmpty())
            table->setObjectName(QString::fromUtf8("table"));
        table->resize(295, 501);
        layoutWidget = new QWidget(table);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 258, 461));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lst_values = new QListWidget(layoutWidget);
        lst_values->setObjectName(QString::fromUtf8("lst_values"));

        verticalLayout->addWidget(lst_values);

        f_new = new QLineEdit(layoutWidget);
        f_new->setObjectName(QString::fromUtf8("f_new"));

        verticalLayout->addWidget(f_new);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_add = new QPushButton(layoutWidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        horizontalLayout->addWidget(btn_add);

        btn_delete = new QPushButton(layoutWidget);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));

        horizontalLayout->addWidget(btn_delete);

        btn_reset = new QPushButton(layoutWidget);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));

        horizontalLayout->addWidget(btn_reset);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(table);

        QMetaObject::connectSlotsByName(table);
    } // setupUi

    void retranslateUi(QWidget *table)
    {
        table->setWindowTitle(QApplication::translate("table", "Form", nullptr));
        btn_add->setText(QApplication::translate("table", "&+", nullptr));
        btn_delete->setText(QApplication::translate("table", "&-", nullptr));
        btn_reset->setText(QApplication::translate("table", "&x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class table: public Ui_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
