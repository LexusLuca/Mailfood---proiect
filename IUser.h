#ifndef IUSER_H
#define IUSER_H

#include <string>

class IUser {
public:
    virtual ~IUser() = default;
    virtual void createAccount() = 0;
    virtual void login() = 0;
    virtual std::string getUsername() const = 0;
};

#endif // IUSER_H
