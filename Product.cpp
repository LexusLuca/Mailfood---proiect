#include "Product.h"

Product::Product(const std::string& name, double price, int stockQuantity)
    : name(name), price(price), stockQuantity(stockQuantity) {}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

int Product::getStockQuantity() const {
    return stockQuantity;
}

void Product::setStockQuantity(int quantity) {
    stockQuantity = quantity;
}
