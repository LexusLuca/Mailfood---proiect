#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string &username, const std::string &password, const std::string &email,const std::string &Name, const std::string &LastName, const std::string &PhoneNumber, const std::string &Address);

    void CreateAccount();
    void Login();
    std::string getUsername() const;

protected:
    std::string username;
    std::string password;
    std::string email;
    std::string Name;
    std::string LastName;
    std::string PhoneNumber;
    std::string Address;
};

#endif // USER_H
