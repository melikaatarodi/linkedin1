#include "page5.h"
#include "ui_page5.h"
#include "page6.h"

page5::page5(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page5)
{
    ui->setupUi(this);
}

page5::~page5()
{
    delete ui;
}

void page5::on_pushButton_clicked()
{
    page6 *u6 = new page6;
    u6->show();
    this->close();
}

