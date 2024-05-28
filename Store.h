#ifndef STORE_H
#define STORE_H

#include <vector>
#include <string>
#include <iostream>
#include "IProduct.h"

class Store {
public:
    Store(int ID, const std::string& StoreName);

    void addProduct(IProduct* product);
    void showProducts() const;
    std::string getStoreName() const;
    int getStoreId() const;
    const std::vector<IProduct*>& getProducts() const;

    static void showStores();
    static Store* getStoreById(int id);

private:
    int ID;
    std::string StoreName;
    std::vector<IProduct*> products;
    static std::vector<Store*> Stores;
};

#endif // STORE_H
