#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "User.h"

class Client : public User
{
public:
    Client(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);
    void getClient() const;
};

#endif
