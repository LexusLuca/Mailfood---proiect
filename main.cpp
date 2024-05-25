#include <iostream>
#include "Client.h"
#include "HelperFunctions.h"

using namespace std;

int main() {
    Client client("Luca", "1234", "glm21@yahoo.com", "Luca", "Gavra", "0732059429", "Strada N Balcescu");

    client.getClient();
    client.CreateAccount();
    client.Login();

    addProductsToStores();
    selectStoreAndAddProductsToCart(client);

    return 0;
}
