#include "page6.h"
#include "ui_page6.h"

page6::page6(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page6)
{
    ui->setupUi(this);
}

page6::~page6()
{
    delete ui;
}
