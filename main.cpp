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

   
    Store* carrefourAFI = new Store("Carrefour AFI");
    carrefourAFI->addProduct(new Product("Fresh Apples", 1.2, 50));
    carrefourAFI->addProduct(new Product("Bananas", 0.8, 30));
    carrefourAFI->addProduct(new Product("Milk", 1.5, 20));
  
    stores.push_back(carrefourAFI);

    
    Store* auchanCoresi = new Store("Auchan Coresi");
    auchanCoresi->addProduct(new Product("Bread", 2.0, 40));
    auchanCoresi->addProduct(new Product("Cheese", 3.5, 25));
    auchanCoresi->addProduct(new Product("Pasta", 1.0, 50));
 
    stores.push_back(auchanCoresi);

   
    Store* pizzaVolla = new Store("Pizza Volla");
    pizzaVolla->addProduct(new Product("Margherita Pizza", 8.5, 15));
    pizzaVolla->addProduct(new Product("Pepperoni Pizza", 9.0, 20));
    pizzaVolla->addProduct(new Product("Vegetarian Pizza", 8.0, 18));
    
    stores.push_back(pizzaVolla);

    
    Store* pizzaRadu = new Store("Pizza Radu");
    pizzaRadu->addProduct(new Product("Hawaiian Pizza", 9.5, 12));
    pizzaRadu->addProduct(new Product("BBQ Chicken Pizza", 10.0, 10));
    pizzaRadu->addProduct(new Product("Seafood Pizza", 11.0, 8));
  
    stores.push_back(pizzaRadu);

  
    Store* kfc = new Store("KFC");
    kfc->addProduct(new Product("Original Recipe Chicken", 6.5, 30));
    kfc->addProduct(new Product("Zinger Burger", 5.0, 25));
    kfc->addProduct(new Product("Fries", 2.5, 40));

    stores.push_back(kfc);

    
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
