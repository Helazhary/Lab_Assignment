#ifndef PRODUCT_H
#define PRODUCT_H
#include<qdialog.h>

class product
{
private:

public:
    product();
    struct info
    {
        QString name,price,quantity,category;
    };
    info arr[10];
    int end=0;
    void add_product(QString n);
    void show();

};

#endif // PRODUCT_H
