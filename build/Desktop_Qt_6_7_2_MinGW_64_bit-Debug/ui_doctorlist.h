/********************************************************************************
** Form generated from reading UI file 'doctorlist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORLIST_H
#define UI_DOCTORLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctorlist
{
public:
    QWidget *centralwidget;
    QTableWidget *table;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *doctorlist)
    {
        if (doctorlist->objectName().isEmpty())
            doctorlist->setObjectName("doctorlist");
        doctorlist->resize(764, 486);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        font.setBold(true);
        doctorlist->setFont(font);
        centralwidget = new QWidget(doctorlist);
        centralwidget->setObjectName("centralwidget");
        table = new QTableWidget(centralwidget);
        table->setObjectName("table");
        table->setGeometry(QRect(9, 20, 751, 500));
        table->setFont(font);
        table->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        table->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        table->verticalHeader()->setVisible(false);
        table->verticalHeader()->setCascadingSectionResizes(false);
        table->verticalHeader()->setHighlightSections(true);
        doctorlist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(doctorlist);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 764, 24));
        doctorlist->setMenuBar(menubar);
        statusbar = new QStatusBar(doctorlist);
        statusbar->setObjectName("statusbar");
        doctorlist->setStatusBar(statusbar);

        retranslateUi(doctorlist);

        QMetaObject::connectSlotsByName(doctorlist);
    } // setupUi

    void retranslateUi(QMainWindow *doctorlist)
    {
        doctorlist->setWindowTitle(QCoreApplication::translate("doctorlist", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorlist: public Ui_doctorlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORLIST_H
