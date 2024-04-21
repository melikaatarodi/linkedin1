#include "page4.h"
#include "ui_page4.h"
#include "page2.h"
#include "page5.h"
#include "QSqlDriver"
#include <QSqlDatabase>
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "QString"


page4::page4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page4)
{
    ui->setupUi(this);
    QSqlDatabase database;
        database=QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("m:\\profilee.db");
        database.open();
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

page4::~page4()
{
    delete ui;
}

void page4::on_pushButton_2_clicked()
{
    page2 *h2 = new page2;
    h2->show();
    this->close();
}


void page4::on_pushButton_clicked()
{
    QSqlQuery p;
        QString s1,s2;
        s1=ui->lineEdit->text();
        s2=ui->lineEdit_2->text();
        p.exec("INSERT INTO user()VALUES('"+s1+"','"+s2+"')");
    page5 *y5= new page5;
    y5 ->show();
    this->close();
}

