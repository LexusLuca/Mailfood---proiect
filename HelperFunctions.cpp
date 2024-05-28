#include "HelperFunctions.h"
#include <iostream>

void HelperFunctions::createUser(std::unordered_map<std::string, Client*>& users) {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

    if (users.find(username) != users.end()) {
        std::cout << "Username already exists." << std::endl;
    } else {
        users[username] = new Client(username, password);
        std::cout << "Account created successfully." << std::endl;
    }
}

Client* HelperFunctions::loginUser(const std::unordered_map<std::string, Client*>& users) {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

    auto it = users.find(username);
    if (it != users.end() && it->second->getPassword() == password) {
        return it->second;
    } else {
        std::cout << "Invalid username or password." << std::endl;
        return nullptr;
    }
}

Store* HelperFunctions::chooseStore(const std::vector<Store*>& stores) {
    std::cout << "Choose a store:" << std::endl;
    for (size_t i = 0; i < stores.size(); ++i) {
        std::cout << i + 1 << ". " << stores[i]->getName() << std::endl;
    }

    int storeChoice;
    std::cin >> storeChoice;
    if (storeChoice < 1 || storeChoice > stores.size()) {
        std::cout << "Invalid choice." << std::endl;
        return nullptr;
    }

    return stores[storeChoice - 1];
}

void HelperFunctions::shop(Store* store, Cart& cart) {
    while (true) {
        std::cout << "Products in " << store->getName() << ":" << std::endl;
        auto products = store->getProducts();
        for (size_t i = 0; i < products.size(); ++i) {
            std::cout << i + 1 << ". " << products[i]->getName() << " - $" << products[i]->getPrice() << " - Stock: " << products[i]->getStock() << std::endl;
        }

        std::cout << "Choose a product to add to cart (0 to checkout): ";
        int productChoice;
        std::cin >> productChoice;
        if (productChoice == 0) {
            cart.checkout();
            break;
        } else if (productChoice < 1 || productChoice > products.size()) {
            std::cout << "Invalid choice." << std::endl;
        } else {
            try {
                cart.addProduct(products[productChoice - 1]);
                std::cout << "Product added to cart." << std::endl;
            } catch (const std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }
    }
}
