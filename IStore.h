#ifndef ISTORE_H
#define ISTORE_H

#include <vector>
#include <string>
#include "IProduct.h"

class IStore {
public:
    virtual ~IStore() = default;
    virtual void addProduct(const IProduct& product) = 0;
    virtual void showProducts() const = 0;
    virtual std::string getStoreName() const = 0;
    virtual int getStoreId() const = 0;
    virtual const std::vector<IProduct*>& getProducts() const = 0;
};

#endif // ISTORE_H
