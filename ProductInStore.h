#ifndef PRODUCTINSTORE_H
#define PRODUCTINSTORE_H

#include "IProduct.h"
#include "IStore.h"
#include <vector>

class ProductInStore : public IProduct, public IStore {
private:
    std::string name;
    double price;
    int stock;
public:
    ProductInStore(const std::string& name, double price, int stock);
    std::string getName() const override;
    double getPrice() const override;
    int getStock() const override;
    void reduceStock(int quantity) override;
    std::vector<IProduct*> getProducts() const override;
};

#endif // PRODUCTINSTORE_H
