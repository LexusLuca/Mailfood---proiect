#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "User.h"
#include "Cart.h"

class Client : public User {
public:
    Client(const std::string &username, const std::string &password, const std::string &email,
           const std::string &Name, const std::string &LastName, const std::string &PhoneNumber,
           const std::string &Address);
    void getClient() const;
    Cart& getCart();

private:
    Cart cart;
};

#endif // CLIENT_H
