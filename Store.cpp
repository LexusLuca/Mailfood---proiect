#include "Store.h"
#include <algorithm>

std::vector<Store> Store::Stores;

Store::Store(int ID, const std::string& StoreName) : ID(ID), StoreName(StoreName) {
    Stores.push_back(*this);
}

void Store::ShowStores() {
    std::cout << "Choose a Store:\n";
    for (const auto& store : Stores) {
        std::cout << " --> " << store.ID << " - " << store.StoreName << "\n";
    }
}

Store* Store::getStoreById(int id) {
    for (auto& store : Stores) {
        if (store.ID == id) {
            return &store;
        }
    }
    return nullptr;
}

void Store::addProduct(const Product& product) {
    products.push_back(product);
}

void Store::ShowProducts() const {
    std::cout << "Products in " << StoreName << ":\n";
    for (const auto& product : products) {
        std::cout << " - " << product.getName() << ": $" << product.getPrice()
                  << ", Stock: " << product.getStockQuantity() << "\n";
    }
}

const std::vector<Product>& Store::getProducts() const {
    return products;
}
