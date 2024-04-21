#include "page2.h"
#include "ui_page2.h"
#include "QMessageBox"
#include "page3.h"
#include "page4.h"
#include "QSqlDriver"
#include <QSqlDatabase>
#include "QSqlQuery"
#include "QSqlQueryModel"


int n;
page2::page2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page2)
{
    ui->setupUi(this);
    QSqlDatabase database;
        database=QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("c:\\users\\hp\\desktop\\linkedin.db");
        database.open();
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);




}

page2::~page2()
{
    delete ui;

}

void page2::on_pushButton_clicked()
{
    if(ui->lineEdit->text()=="")

       QMessageBox::warning(this,"empty","plese enter your email","Try again");
        else if(ui->lineEdit_2->text()=="")
    QMessageBox::warning(this,"empty","plese enter your password","Try again");
    else{
    n=rand()%4;
    switch (n)
    {
    case 0:
     ui->label->setStyleSheet("image: url(:/new/prefix1/CAPTCHA-1000-x-700-copy-790x310-1.jpg)");
        break;
    case 1:
      ui->label->setStyleSheet("image: url(:/new/prefix1/captcha-with-characters.png)");
        break;
    case 2:
     ui->label->setStyleSheet("image: url(:/new/prefix1/captcha.png)");
        break;
    case 3:
     ui->label->setStyleSheet("image: url(:/new/prefix1/components-captcha-usage-placeholder-text-do.png)");
        break;
    }
    ui->pushButton->setEnabled(false);
}
}


void page2::on_pushButton_2_clicked()
{

    QSqlQuery p;
        QString s1,s2;
        s1=ui->lineEdit->text();
        s2=ui->lineEdit_2->text();
        p.exec("INSERT INTO user()VALUES('"+s1+"','"+s2+"')");

    if (n==0)
    {
        if(ui->lineEdit_3->text()=="captcha246")
        {
            page3 *m3 = new page3;
            m3->show();
            this->close();
        }
        else {
            QMessageBox::warning(this,"This is incorrect","Enter the correct captcha","Try again");
            ui->label->setText("");
        }


    }
    else if (n==1)
    {
        if(ui->lineEdit_3->text()=="4SZXT")
        {
            page3 *m3 = new page3;
            m3->show();
            this->close();
        }
        else {
            QMessageBox::warning(this,"This is incorrect","Enter the correct captcha","Try again");
            ui->label->setText("");

        }
    }
    else if (n==2)
    {
        if(ui->lineEdit_3->text()=="NF7NZ")
        {
            page3 *m3 = new page3;
            m3->show();
            this->close();

        }
        else {
            QMessageBox::warning(this,"This is incorrect","Enter the correct captcha","Try again");
            ui->label->setText("");
        }
    }

    else if (n==3)
    {
         if(ui->lineEdit_3->text()=="YR890")
        {
            page3 *m3 = new page3;
            m3->show();
            this->close();


        }
        else {
            QMessageBox::warning(this,"This is incorrect","Enter the correct captcha","Try again");
            ui->label->setText("");
        }
    }


}


void page2::on_pushButton_3_clicked()
{
    page4 *k4 = new page4;
    k4->show();
    this->close();
}

