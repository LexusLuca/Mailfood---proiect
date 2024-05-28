#ifndef PRODUCT_H
#define PRODUCT_H

#include "IProduct.h"

class Product : public IProduct {
private:
    std::string name;
    double price;
    int stock;
public:
    Product(const std::string& name, double price, int stock);
    std::string getName() const override;
    double getPrice() const override;
    int getStock() const override;
    void reduceStock(int quantity) override;
};

#endif // PRODUCT_H