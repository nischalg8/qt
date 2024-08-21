#ifndef NEXTPAGE_H
#define NEXTPAGE_H

#include <QMainWindow>

namespace Ui {
class nextpage;
}

class nextpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit nextpage(QWidget *parent = nullptr);
    ~nextpage();

private:
    Ui::nextpage *ui;
};

#endif // NEXTPAGE_H
