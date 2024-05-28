#include "Cart.h"
#include <iostream>

void Cart::addProduct(IProduct& product) {
    products.push_back(&product);
}

void Cart::showCart() const {
    std::cout << "Cart contents:\n";
    for (const auto& product : products) {
        std::cout << " - " << product->getName() << ": $" << product->getPrice()
                  << ", Stock: " << product->getStockQuantity() << "\n";
    }
}
