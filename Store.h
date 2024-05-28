#ifndef STORE_H
#define STORE_H

#include "IStore.h"
#include "IProduct.h"
#include <vector>
#include <string>

class Store : public IStore {
private:
    std::string name;
    std::vector<IProduct*> products;
public:
    Store(const std::string& name);
    void addProduct(IProduct* product);
    std::string getName() const override;
    std::vector<IProduct*> getProducts() const override;
};

#endif // STORE_H
