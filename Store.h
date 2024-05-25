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
    void addProduct(const Product& product);
    void ShowProducts() const;

private:
    int ID;
    std::string StoreName;
    std::vector<Product> products;
    static std::vector<Store> Stores;
};

#endif // STORE_H
