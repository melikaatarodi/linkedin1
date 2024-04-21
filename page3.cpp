#include "page3.h"
#include "ui_page3.h"
#include "QMessageBox"
#include "QString"
#include "page5.h"

int m;
page3::page3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page3)
{
    ui->setupUi(this);
}

page3::~page3()
{
    delete ui;

}


void page3::on_pushButton_clicked()
{

    m= rand()%9000+1000;
    QMessageBox::information(this,"code","Enter this code: " +QString::number(m) ,"ok");

}


void page3::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text()== QString::number(m))
    {
        page5 *y5= new page5;
        y5 ->show();
        this->close();
    }
    else
    {
        QMessageBox::warning(this,"wrong information","Please enter the correct code","try again");
        ui->lineEdit->setText("");
    }
}

