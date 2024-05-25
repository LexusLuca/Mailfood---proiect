#include <iostream>
#include "Client.h"
#include "Store.h"
#include "Product.h"

using namespace std;

int main() {
    Client client("Luca", "1234", "glm21@yahoo.com", "Luca", "Gavra", "0732059429", "Strada N Balcescu");

    Store store1(1, "Carrefour AFI");
    Store store2(2, "Auchan Coresi");
    Store store3(3, "Pizza Volla");
    Store store4(4, "Pizza Radu");
    Store store5(5, "Pizza Dodo");
    Store store6(6, "Pizza Hut");

    store1.addProduct(Product("Milk", 1.5, 20));
    store1.addProduct(Product("Bread", 1.0, 50));
    store2.addProduct(Product("Water", 0.5, 100));
    store2.addProduct(Product("Butter", 2.5, 30));
    store3.addProduct(Product("Margherita Pizza", 8.0, 10));
    store3.addProduct(Product("Pepperoni Pizza", 10.0, 8));

    client.getClient();
    client.CreateAccount();
    client.Login();

    Store::ShowStores();
    

    return 0;
}
