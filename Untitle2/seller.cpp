#include "seller.h"
#include "ui_seller.h"
#include "home.h"
#include"product.h"
seller::seller(QWidget *parent, product *prod_list) :
    QDialog(parent),
    ui(new Ui::seller)
{
    ui->setupUi(this);
    p=prod_list;
}

seller::~seller()
{
    delete ui;
}

void seller::on_pushButton_2_clicked()
{
    homewin = new home();
    homewin->show();
    this->close();

}


void seller::on_addpro_clicked()
{
    p->add_product(ui->name->text());
}

