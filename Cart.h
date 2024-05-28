#ifndef CART_H
#define CART_H

#include "Product.h"
#include <vector>

class Cart {
public:
    void addProduct(IProduct& product);
    void showCart() const;

private:
    std::vector<IProduct*> products;
};

#endif // CART_H
