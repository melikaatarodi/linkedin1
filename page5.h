#ifndef PAGE5_H
#define PAGE5_H

#include <QMainWindow>

namespace Ui {
class page5;
}

class page5 : public QMainWindow
{
    Q_OBJECT

public:
    explicit page5(QWidget *parent = nullptr);
    ~page5();

private slots:
    void on_pushButton_clicked();

private:
    Ui::page5 *ui;
};

#endif // PAGE5_H
