#include "ProductInStore.h"
#include "CustomException.h"

ProductInStore::ProductInStore(const std::string& name, double price, int stock) : name(name), price(price), stock(stock) {}

std::string ProductInStore::getName() const {
    return name;
}

double ProductInStore::getPrice() const {
    return price;
}

int ProductInStore::getStock() const {
    return stock;
}

void ProductInStore::reduceStock(int quantity) {
    if (quantity > stock) {
        throw CustomException("Not enough stock available.");
    }
    stock -= quantity;
}

std::vector<IProduct*> ProductInStore::getProducts() const {
    std::vector<IProduct*> products;
    products.push_back(const_cast<ProductInStore*>(this)); // returneaza un vector cu produsul
    return products;
}
