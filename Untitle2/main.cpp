#include "home.h"
#include"product.h"
#include"seller.h"
#include"customer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    home w;
    product *p = new product;
    seller s(nullptr,p);
    p->show();
    customer c(nullptr,p);
    w.show();
    return a.exec();

}
