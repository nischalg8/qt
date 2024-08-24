#ifndef DOCTORLIST_H
#define DOCTORLIST_H

#include <QMainWindow>

namespace Ui {
class doctorlist;
}

class doctorlist : public QMainWindow
{
    Q_OBJECT

public:
    explicit doctorlist(QWidget *parent = nullptr);
    ~doctorlist();

private slots:

    void handleBookButtonClick(int row);

private:
    Ui::doctorlist *ui;
};

#endif // DOCTORLIST_H
