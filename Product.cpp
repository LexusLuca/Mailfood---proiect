#include "Product.h"
#include <stdexcept>

Product::Product(const std::string& name, double price, int stock) : name(name), price(price), stock(stock) {}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

int Product::getStock() const {
    return stock;
}

void Product::reduceStock(int quantity) {
    if (quantity > stock) {
        throw std::out_of_stock("Not enough stock available.");
    }
    stock -= quantity;
}
