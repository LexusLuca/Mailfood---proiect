#include "User.h"
#include <iostream>

User::User(const std::string &username, const std::string &password, const std::string &email,
           const std::string &Name, const std::string &LastName, const std::string &PhoneNumber,
           const std::string &Address)
    : username(username), password(password), email(email), Name(Name),
      LastName(LastName), PhoneNumber(PhoneNumber), Address(Address) {}

void User::CreateAccount() {
    std::cout << "Create your account:\n";
    std::cout << "Enter your username: "; std::cin >> username;
    std::cout << "Enter your password: "; std::cin >> password;
    std::cout << "Enter your email: "; std::cin >> email;
    std::cout << "Enter your name: "; std::cin >> Name;
    std::cout << "Enter your last name: "; std::cin >> LastName;
    std::cout << "Enter your phone number: "; std::cin >> PhoneNumber;
    std::cout << "Enter your address: "; std::cin >> Address;
}

void User::Login() {
    std::string inputUsername, inputPassword;
    while (true) {
        std::cout << "Enter your username: "; std::cin >> inputUsername;
        std::cout << "Enter your password: "; std::cin >> inputPassword;
        if (this->username == inputUsername && this->password == inputPassword) {
            std::cout << "Login successful!\n";
            break;
        } else {
            std::cout << "Invalid username or password\n";
        }
    }
}

std::string User::getUsername() const {
    return username;
}
