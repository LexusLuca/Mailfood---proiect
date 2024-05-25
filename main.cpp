#include <iostream>
#include "Client.h"


using namespace std;

int main()
{
    Client client("user123", "password", "glm21@yahoo.com" , "John", "Doe", "123-456-7890", "123 Main St");
    client.getClient();
    client.CreateAccount();
    client.Login();
    AppSystem();
    
    return 0;

}
