#ifndef CART_H
#define CART_H

#include "IProduct.h"
#include <vector>

class Cart {
private:
    std::vector<IProduct*> products;
public:
    void addProduct(IProduct* product);
    void checkout();
    void displayCart();
};

#endif // CART_H
