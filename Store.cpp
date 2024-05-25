#include "Store.h"
#include <iostream>

std::vector<Store> Store::Stores;

Store::Store(int ID, const std::string& StoreName) : ID(ID), StoreName(StoreName) {
    Stores.push_back(*this);
}

void Store::ShowStores() {
    int id;
    std::cout << "Choose a Store:\n";
    for (const auto& store : Stores) {
        std::cout << " --> " << store.ID << " - " << store.StoreName << "\n";
    }
    std::cin >> id;

    for (auto& store : Stores) {
        if (store.ID == id) {
            store.ShowProducts();
            return;
        }
    }

    std::string command;
    std::cout << "Enter command (buy): ";
    std::cin >> command;
    if (command == "buy") {
        std::cout << "Order?\n";
    }
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

