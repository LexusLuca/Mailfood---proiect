#include "Cart.h"
#include "CustomException.h"
#include <iostream>

void Cart::addProduct(IProduct* product) {
    if (product->getStock() <= 0) {
        throw CustomException("Product out of stock.");
    }
    products.push_back(product);
    product->reduceStock(1);
}

void Cart::checkout() {
    if (products.empty()) {
        std::cout << "Your cart is empty." << std::endl;
        return;
    }
    double total = 0;
    for (const auto& product : products) {
        total += product->getPrice();
    }
    std::cout << "Total amount: $" << total << std::endl;
    products.clear();
    std::cout << "Order placed successfully!" << std::endl;
}

void Cart::displayCart() {
    if (products.empty()) {
        std::cout << "Your cart is empty." << std::endl;
        return;
    }
    std::cout << "Products in your cart:" << std::endl;
    for (const auto& product : products) {
        std::cout << product->getName() << " - $" << product->getPrice() << std::endl;
    }
}
