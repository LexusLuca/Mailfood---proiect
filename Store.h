#ifndef STORE_H
#define STORE_H

#include <vector>
#include <iostream>
#include <string>
#include "Product.h"

class Store {
public:
    Store(int ID, const std::string& StoreName);

    static void ShowStores();
    static Store* getStoreById(int id);
    void addProduct(const Product& product);
    void ShowProducts() const;
    const std::vector<Product>& getProducts() const;

private:
    int ID;
    std::string StoreName;
    std::vector<Product> products;
    static std::vector<Store> Stores;
};

#endif // STORE_H
