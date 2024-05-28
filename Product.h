#ifndef PRODUCT_H
#define PRODUCT_H

#include "IProduct.h"

class Product : public IProduct {
public:
    Product(const std::string& name, double price, int stockQuantity);

    std::string getName() const override;
    double getPrice() const override;
    int getStockQuantity() const override;

    void setStockQuantity(int quantity) override;

private:
    std::string name;
    double price;
    int stockQuantity;
};

#endif // PRODUCT_H
