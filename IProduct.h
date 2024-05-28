#ifndef IPRODUCT_H
#define IPRODUCT_H

#include <string>

class IProduct {
public:
    virtual ~IProduct() = default;
    virtual std::string getName() const = 0;
    virtual double getPrice() const = 0;
    virtual int getStockQuantity() const = 0;
    virtual void setStockQuantity(int quantity) = 0;
};

#endif // IPRODUCT_H
