#include "page1.h"
#include "ui_page1.h"
#include<QToolTip>
#include "page2.h"

page1::page1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::page1)
{
    ui->setupUi(this);
}

page1::~page1()
{
    delete ui;
    ui->textEdit->setStyleSheet("rgb(170, 170, 127)");
    ui->textEdit->setStyleSheet("rgb(158, 194, 200)");
    ui->groupBox->setEnabled(false);
    ui->label->setEnabled(false);
    ui->textEdit->setDisabled(false);
}


void page1::on_pushButton_clicked()
{
    page2 *w2 = new page2 ;
    w2->show();
    this->close();
}

