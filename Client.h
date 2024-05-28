#ifndef CLIENT_H
#define CLIENT_H

#include "User.h"

class Client : public User {
public:
    Client(const std::string& username, const std::string& password);
};

#endif // CLIENT_H
