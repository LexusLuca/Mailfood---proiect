#include "HelperFunctions.h"
#include "Store.h"
#include "Product.h"
#include <iostream>
#include <algorithm>
#include <stdexcept>

void addProductsToStores() {
    Store store1(1, "Carrefour AFI");
    Store store2(2, "Auchan Coresi");
    Store store3(3, "Pizza Volla");
    Store store4(4, "Pizza Radu");
    Store store5(5, "Pizza Dodo");
    Store store6(6, "Pizza Hut");

    store1.addProduct(new Product("Milk", 1.5, 20));
    store1.addProduct(new Product("Bread", 1.0, 50));
    store2.addProduct(new Product("Water", 0.5, 100));
    store2.addProduct(new Product("Butter", 2.5, 30));
    store3.addProduct(new Product("Margherita Pizza", 8.0, 10));
    store3.addProduct(new Product("Pepperoni Pizza", 10.0, 8));
    store4.addProduct(new Product("Radu Special", 9.5, 15));
    store5.addProduct(new Product("Dodo Delight", 8.75, 12));
    store6.addProduct(new Product("Hut Classic", 7.25, 20));
}

void selectStoreAndAddProductsToCart(Client& client) {
    while (true) {
        bool isValidStore = false;
        Store* selectedStore = nullptr;

        while (!isValidStore) {
            try {
                Store::showStores();

                int storeId;
                std::cout << "Enter the store ID: ";
                std::cin >> storeId;

                selectedStore = Store::getStoreById(storeId);
                if (selectedStore == nullptr) {
                    throw std::invalid_argument("Invalid store ID. Please try again.");
                } else {
                    selectedStore->showProducts();
                    isValidStore = true;
                }
            } catch (const std::exception& e) {
                std::cout << e.what() << std::endl;
            }
        }

        while (true) {
            std::string productName;
            std::cout << "Enter the product name to add to cart (or 'done' to finish): ";
            std::cin.ignore(); // To clear the input buffer
            std::getline(std::cin, productName);

            if (productName == "done") {
                break; // Break from the inner loop
            }

            // Convert the entered product name to lowercase for comparison
            std::transform(productName.begin(), productName.end(), productName.begin(), ::tolower);

            // Search for the product in the store
            bool productFound = false;
            for (const auto& product : selectedStore->getProducts()) {
                std::string lowercaseProductName = product->getName();
                std::transform(lowercaseProductName.begin(), lowercaseProductName.end(), lowercaseProductName.begin(), ::tolower);
                if (lowercaseProductName == productName) {
                    try {
                        client.getCart().addProduct(*product);
                        productFound = true;
                        std::cout << "Added " << product->getName() << " to cart.\n";
                    } catch (const std::exception& e) {
                        std::cout << e.what() << "\n";
                    }
                    break;
                }
            }

            if (!productFound) {
                std::cout << "Product not found in this store. Please try again.\n";
            }
        }

        std::string anotherStore;
        std::cout << "Do you want to visit another store? (yes/no): ";
        std::cin >> anotherStore;

        if (anotherStore != "yes") {
            break; // Break from the outer loop
        }
    }

    client.getCart().showCart();
}
