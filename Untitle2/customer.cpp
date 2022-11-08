#include "customer.h"
#include "ui_customer.h"
#include"home.h"
customer::customer(QWidget *parent) :
       QDialog(parent)
     ,ui(new Ui::customer)

{
    ui->setupUi(this);
    products = new product;
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


 void customer::on_Sname_clicked()
{


    ui->Name_List->setText(products->name);


}

