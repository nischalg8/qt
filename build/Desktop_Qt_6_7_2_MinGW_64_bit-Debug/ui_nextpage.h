/********************************************************************************
** Form generated from reading UI file 'nextpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXTPAGE_H
#define UI_NEXTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nextpage
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuMedAppoint;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nextpage)
    {
        if (nextpage->objectName().isEmpty())
            nextpage->setObjectName("nextpage");
        nextpage->resize(1121, 609);
        nextpage->setStyleSheet(QString::fromUtf8("background-color: #f0f2f5; "));
        centralwidget = new QWidget(nextpage);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 231, 561));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"\n"
"color: #FFFFFF;background-color:#FF6F61\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(30, 170, 161, 101));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FFFFFF;\n"
"border: 2px solid #FF7F50;\n"
"border-radius: 10px;\n"
"color: black;\n"
"font-size: 16px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background-color:#848884;\n"
"color: 		#FFFFF0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"color: #FFFFFF;\n"
"}"));
        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(30, 40, 161, 101));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FFFFFF;\n"
"border: 2px solid #FF7F50;\n"
"border-radius: 10px;\n"
"color: black;\n"
"font-size: 16px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background-color:#848884;\n"
"color: 		#FFFFF0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"color: #FFFFFF;\n"
"}"));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(30, 300, 161, 101));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FFFFFF;\n"
"border: 2px solid #FF7F50;\n"
"border-radius: 10px;\n"
"color: black;\n"
"font-size: 16px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background-color:#848884;\n"
"color: 		#FFFFF0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"color: #FFFFFF;\n"
"}"));
        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(30, 420, 161, 101));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #FFFFFF;\n"
"border: 2px solid #FF7F50;\n"
"border-radius: 10px;\n"
"color: black;\n"
"font-size: 16px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"background-color:#848884;\n"
"color: 		#FFFFF0;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"color: #FFFFFF;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 10, 591, 81));
        label_3->setStyleSheet(QString::fromUtf8("	QLabel{\n"
"\n"
"\n"
"    color: #808080;            /* White text */\n"
"    padding: 15px;\n"
"    border-radius: 10px;\n"
"    text-align: center;\n"
"    font-weight: bold;\n"
"    font-size: 25px;\n"
"    box-shadow: 2px 2px 10px rgba(0, 0, 0, 0.1); /* Subtle shadow */\n"
"}\n"
"\n"
"\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 90, 511, 421));
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/doctor.png")));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(860, 10, 201, 131));
        label->setStyleSheet(QString::fromUtf8("/* Subtle red glow */\n"
"background-color: #FFD6CC; /* Coral circle */\n"
"border-radius: 50%;\n"
"box-shadow: 0px 4px 6px rgba(255, 214, 204, 0.5); "));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/medappoint logo.png")));
        nextpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(nextpage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1121, 25));
        menuMedAppoint = new QMenu(menubar);
        menuMedAppoint->setObjectName("menuMedAppoint");
        nextpage->setMenuBar(menubar);
        statusbar = new QStatusBar(nextpage);
        statusbar->setObjectName("statusbar");
        nextpage->setStatusBar(statusbar);

        menubar->addAction(menuMedAppoint->menuAction());

        retranslateUi(nextpage);

        QMetaObject::connectSlotsByName(nextpage);
    } // setupUi

    void retranslateUi(QMainWindow *nextpage)
    {
        nextpage->setWindowTitle(QCoreApplication::translate("nextpage", "MainWindow", nullptr));
        pushButton_6->setText(QCoreApplication::translate("nextpage", "Cancel Appointment", nullptr));
        pushButton_8->setText(QCoreApplication::translate("nextpage", "Book Appointment", nullptr));
        pushButton_7->setText(QCoreApplication::translate("nextpage", "Review status", nullptr));
        pushButton_9->setText(QCoreApplication::translate("nextpage", "Reschedule", nullptr));
        label_3->setText(QCoreApplication::translate("nextpage", "Book your appointments with just a single tap", nullptr));
        label_4->setText(QString());
        label->setText(QString());
        menuMedAppoint->setTitle(QCoreApplication::translate("nextpage", "MedAppoint", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nextpage: public Ui_nextpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXTPAGE_H
