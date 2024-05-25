#include "Cart.h"
#include <iostream>

void Cart::addProduct(const Product& product) {
    products.push_back(product);
}

void Cart::showCart() const {
    std::cout << "Products in your cart:\n";
    for (const auto& product : products) {
        std::cout << " - " << product.getName() << ": $" << product.getPrice()
                  << ", Stock: " << product.getStockQuantity() << "\n";
    }
}
