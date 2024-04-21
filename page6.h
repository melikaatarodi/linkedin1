#ifndef PAGE6_H
#define PAGE6_H

#include <QMainWindow>

namespace Ui {
class page6;
}

class page6 : public QMainWindow
{
    Q_OBJECT

public:
    explicit page6(QWidget *parent = nullptr);
    ~page6();

private:
    Ui::page6 *ui;
};

#endif // PAGE6_H
