/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QAction *a_new;
    QAction *a_exit;
    QAction *a_about;
    QAction *a_print;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vl_data;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *vl_diagram;
    QMenuBar *menubar;
    QMenu *m_files;
    QMenu *m_help;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(800, 579);
        a_new = new QAction(mainwindow);
        a_new->setObjectName(QString::fromUtf8("a_new"));
        a_exit = new QAction(mainwindow);
        a_exit->setObjectName(QString::fromUtf8("a_exit"));
        a_about = new QAction(mainwindow);
        a_about->setObjectName(QString::fromUtf8("a_about"));
        a_print = new QAction(mainwindow);
        a_print->setObjectName(QString::fromUtf8("a_print"));
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 361, 511));
        vl_data = new QVBoxLayout(verticalLayoutWidget);
        vl_data->setObjectName(QString::fromUtf8("vl_data"));
        vl_data->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(410, 20, 361, 511));
        vl_diagram = new QVBoxLayout(verticalLayoutWidget_2);
        vl_diagram->setObjectName(QString::fromUtf8("vl_diagram"));
        vl_diagram->setContentsMargins(0, 0, 0, 0);
        mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        m_files = new QMenu(menubar);
        m_files->setObjectName(QString::fromUtf8("m_files"));
        m_help = new QMenu(menubar);
        m_help->setObjectName(QString::fromUtf8("m_help"));
        mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainwindow->setStatusBar(statusbar);

        menubar->addAction(m_files->menuAction());
        menubar->addAction(m_help->menuAction());
        m_files->addAction(a_print);
        m_files->addAction(a_exit);
        m_help->addAction(a_about);

        retranslateUi(mainwindow);
        QObject::connect(a_exit, SIGNAL(triggered()), mainwindow, SLOT(close()));

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QApplication::translate("mainwindow", "Sol Rosca Qt CP2", nullptr));
        a_new->setText(QApplication::translate("mainwindow", "&Nouveau", nullptr));
        a_exit->setText(QApplication::translate("mainwindow", "&Quitter", nullptr));
        a_about->setText(QApplication::translate("mainwindow", "&A Propos", nullptr));
        a_print->setText(QApplication::translate("mainwindow", "Im&primer", nullptr));
        m_files->setTitle(QApplication::translate("mainwindow", "&Fichier", nullptr));
        m_help->setTitle(QApplication::translate("mainwindow", "&Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
