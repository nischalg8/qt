/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QFrame *frame_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1302, 729);
        MainWindow->setMaximumSize(QSize(16777215, 729));
        MainWindow->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"background-color: #FFD6CC;\n"
"opacity: 0.6;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(510, 510, 241, 41));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(520, 310, 241, 271));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"color: #FFFFFF;\n"
"border-radius: 20px;\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 70, 191, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{ \n"
"background-color: #f5f5f5;\n"
"\n"
"padding: 5px;\n"
"border: 2px solid #FF6F61;\n"
"border-radius: 4px;\n"
"\n"
"color: black;\n"
"}"));
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(20, 130, 191, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{ \n"
"background-color: #f5f5f5;\n"
"border: 2px solid #FF6F61;\n"
"padding: 5px;\n"
"border-radius: 4px;\n"
"color: black;\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 190, 83, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007bff; \n"
"    color: #ffffff; \n"
" border: none; \n"
"border-radius:8px; \n"
"padding: 10px 20px; \n"
"font-size: 16px; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #0056b3; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #004085;\n"
"}"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 20, 161, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"font-weight: bold;\n"
"font-size: 15px;\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(540, 180, 201, 131));
        label->setStyleSheet(QString::fromUtf8("/* Subtle red glow */\n"
"background-color: #FFD6CC; /* Coral circle */\n"
"border-radius: 50%;\n"
"box-shadow: 0px 4px 6px rgba(255, 214, 204, 0.5); "));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/medappoint logo.png")));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 40, 391, 71));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"	QLabel{\n"
"\n"
"\n"
"    color: #808080;            /* White text */\n"
"    padding: 15px;\n"
"    border-radius: 10px;\n"
"    text-align: center;\n"
"    font-weight: bold;\n"
"    font-size: 30px;\n"
"    box-shadow: 2px 2px 10px rgba(0, 0, 0, 0.1); /* Subtle shadow */\n"
"}\n"
"\n"
"\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "username", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Login to your account", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Welcome to MedAppoint ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
