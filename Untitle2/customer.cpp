#include "customer.h"
#include "ui_customer.h"
#include"home.h"
customer::customer(QWidget *parent,product* p) :
    QDialog(parent),
    ui(new Ui::customer)
{
    ui->setupUi(this);
}

customer::~customer()
{
    delete ui;
}

void customer::on_pushButton_5_clicked()
{
   homewin = new home();
   homewin->show();
   this->close();
}



