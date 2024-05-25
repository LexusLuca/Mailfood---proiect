#include "Client.h"
#include <iostream>

Client::Client(const std::string &username, const std::string &password, const std::string &email,
               const std::string &Name, const std::string &LastName, const std::string &PhoneNumber,
               const std::string &Address) : User(username, password, email, Name, LastName, PhoneNumber, Address) {}

void Client::getClient() const {
    std::cout << "Client Information:\n";
    std::cout << "Username: " << getUsername() << "\n";
    std::cout << "Name: " << Name << "\n";
    std::cout << "Last Name: " << LastName << "\n";
    std::cout << "Phone Number: " << PhoneNumber << "\n";
    std::cout << "Address: " << Address << "\n";
}

Cart& Client::getCart() {
    return cart;
}
