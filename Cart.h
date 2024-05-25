#ifndef CART_H
#define CART_H

#include <vector>
#include "Product.h"

class Cart {
public:
    void addProduct(const Product& product);
    void showCart() const;

private:
    std::vector<Product> products;
};

#endif // CART_H
