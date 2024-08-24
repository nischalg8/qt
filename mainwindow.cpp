#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel> // Corrected header include
#include "nextpage.h"
#include "doctorlist.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Using the new connect syntax
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::button_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button_clicked()
{
    QString uName = ui->lineEdit->text();
    QString uPw = ui->lineEdit_2->text();

    if (uName == "admin" && uPw == "admin")
    {
        nextpage *nextPage = new nextpage();
        nextPage -> show();
        this->close();
    }
    else
    {
        ui->label_3->setText("Try Again");
        ui->label_3->setStyleSheet("color: red; font-size: 18px;");
    }

    ui->label_3->setAlignment(Qt::AlignCenter);
}
