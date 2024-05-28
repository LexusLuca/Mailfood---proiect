#include "Store.h"

std::vector<Store*> Store::Stores;

Store::Store(int ID, const std::string& StoreName) : ID(ID), StoreName(StoreName) {
    Stores.push_back(this);
}

void Store::addProduct(IProduct* product) {
    products.push_back(product);
}

void Store::showProducts() const {
    std::cout << "Products in " << StoreName << ":\n";
    for (const auto& product : products) {
        std::cout << " - " << product->getName() << ": $" << product->getPrice()
                  << ", Stock: " << product->getStockQuantity() << "\n";
    }
}

std::string Store::getStoreName() const {
    return StoreName;
}

int Store::getStoreId() const {
    return ID;
}

const std::vector<IProduct*>& Store::getProducts() const {
    return products;
}

void Store::showStores() {
    std::cout << "Choose a Store:\n";
    for (const auto& store : Stores) {
        std::cout << " --> " << store->ID << " - " << store->StoreName << "\n";
    }
}

Store* Store::getStoreById(int id) {
    for (auto& store : Stores) {
        if (store->ID == id) {
            return store;
        }
    }
    return nullptr;
}
