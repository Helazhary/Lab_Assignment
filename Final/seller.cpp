#include "seller.h"
#include "ui_seller.h"
#include "home.h"
#include<QMessageBox>  //added
seller::seller(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seller)
{
    ui->setupUi(this);
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

void seller::reset()
{
    ui->name->setText("");
    ui->category->setText("");
    ui->price->setText("");
    ui->quantity->setText("");
}
void seller::on_addpro_clicked()
{
    QMessageBox::StandardButton check;
    check = QMessageBox::question(this, "Test", "Save?",
                                  QMessageBox::Yes|QMessageBox::No);
    if(check==QMessageBox::Yes)
    {
        new_prod.name=ui->name->text();
        new_prod.category=ui->category->text();
        new_prod.price=ui->price->text();
        new_prod.quantity=ui->quantity->text();
        MS.add_product(new_prod);
    }
    reset();

}

