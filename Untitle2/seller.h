#ifndef SELLER_H
#define SELLER_H
#include"product.h"
#include <QDialog>
class home;
namespace Ui {
class seller;
}

class seller : public QDialog
{
    Q_OBJECT

public:
    explicit seller(QWidget *parent = nullptr, product *prod_list=nullptr);
    ~seller();
        QString name, email;
private slots:
    void on_pushButton_2_clicked();

    void on_addpro_clicked();

private:
    Ui::seller *ui;

    home *homewin;
    product *p;
};

#endif // SELLER_H
