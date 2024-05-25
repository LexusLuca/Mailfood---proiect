#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User();
    User(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);

    void Login();
    void CreateAccount();

protected:
    std::string username;
    std::string password;
    std::string email;
    std::string Name;
    std::string LastName;
    std::string PhoneNumber;
    std::string Address;
};

#endif
