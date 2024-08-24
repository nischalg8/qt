#include "nextpage.h"
#include "ui_nextpage.h"
#include "doctorlist.h"

nextpage::nextpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::nextpage)
{
    ui->setupUi(this);
}

nextpage::~nextpage()
{
    delete ui;
}

void nextpage::on_pushButton_8_clicked()
{
    doctorlist *doctorList = new doctorlist();
    doctorList -> show();
    this -> close();
}

