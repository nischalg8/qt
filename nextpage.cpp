#include "nextpage.h"
#include "ui_nextpage.h"

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
