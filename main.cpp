#include <iostream>
#include "Client.h"
#include "Store.h"

using namespace std;

int main()
{
    Client client("Luca", "1234", "glm21@yahoo.com" , "Luca", "Gavra", "0732059429", "Strada N Balcescu");
    Store store1(1, "Store One");
    Store store2(2, "Store Two");
    client.getClient();
    client.CreateAccount();
    client.Login();
    Store::ShowStores();
    return 0;

}
