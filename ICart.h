#ifndef ICART_H
#define ICART_H

#include <list>
#include "IProduct.h"

class ICart {
public:
    virtual ~ICart() = default;
    virtual void addProduct(const IProduct& product) = 0;
    virtual void showCart() const = 0;
};

#endif // ICART_H