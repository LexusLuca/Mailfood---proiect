#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(const std::string& name, double price, int stockQuantity);

    std::string getName() const;
    double getPrice() const;
    int getStockQuantity() const;

    void setStockQuantity(int quantity);

private:
    std::string name;
    double price;
    int stockQuantity;
};

#endif // PRODUCT_H
