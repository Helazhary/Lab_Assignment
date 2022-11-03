#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "product.h"
#include <QDialog>
#include <vector>
class home;
using namespace std;
namespace Ui {class customer;}

class customer : public QDialog
{
    Q_OBJECT

public:
    explicit customer(QWidget *parent = nullptr,product *p=nullptr);
    ~customer();
    void addtocart();
    QString name, address, phone_number, email;
private slots:
    void on_pushButton_5_clicked();

private:
    Ui::customer *ui;
    //vector <product> cart;
    home *homewin;
};

#endif // CUSTOMER_H
