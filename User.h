#ifndef USER_H
#define USER_H

#include "IUser.h"

class User : public IUser {
private:
    std::string username;
    std::string password;
public:
    User(const std::string& username, const std::string& password);
    std::string getUsername() const override;
    std::string getPassword() const override;
};

#endif // USER_H
