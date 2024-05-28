#include "Store.h"

Store::Store(const std::string& name) : name(name) {}

void Store::addProduct(IProduct* product) {
    products.push_back(product);
}

std::string Store::getName() const {
    return name;
}

std::vector<IProduct*> Store::getProducts() const {
    return products;
}

