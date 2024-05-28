#include <iostream>
#include <unordered_map>
#include "Client.h"
#include "Store.h"
#include "Product.h"
#include "Cart.h"
#include "HelperFunctions.h"

int main() {
    std::unordered_map<std::string, Client*> users;
    std::vector<Store*> stores;
    Cart cart;

    // Creating dummy stores and products
    Store* store1 = new Store("Store A");
    store1->addProduct(new Product("Apple", 1.2, 10));
    store1->addProduct(new Product("Banana", 0.8, 15));
    stores.push_back(store1);

    Store* store2 = new Store("Store B");
    store2->addProduct(new Product("Milk", 1.5, 5));
    store2->addProduct(new Product("Bread", 2.0, 8));
    stores.push_back(store2);

    while (true) {
        std::cout << "1. Create Account\n2. Login\n3. Exit\nChoose an option: ";
        int option;
        std::cin >> option;

        if (option == 1) {
            HelperFunctions::createUser(users);
        } else if (option == 2) {
            Client* user = HelperFunctions::loginUser(users);
            if (user) {
                std::cout << "Welcome, " << user->getUsername() << "!" << std::endl;
                Store* store = HelperFunctions::chooseStore(stores);
                if (store) {
                    HelperFunctions::shop(store, cart);
                }
            }
        } else if (option == 3) {
            break;
        } else {
            std::cout << "Invalid option. Please try again." << std::endl;
        }
    }

    // Cleanup
    for (auto& user : users) {
        delete user.second;
    }
    for (auto& store : stores) {
        for (auto& product : store->getProducts()) {
            delete product;
        }
        delete store;
    }

    return 0;
}
