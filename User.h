#ifndef USER_H
#define USER_H
#include <string>


class User
{
public:
    
    User(std::string& ,std::string&, std::string&, std::string&, std::string&, std::string&){}
    void Login(std::string& , std::string&);



private:

    std::string username;
    std::string password;
    std::string Name;
    std::string LastName;
    std::string PhoneNumber;
    std::string Adress;


};

#endif



/*

    User
    - username
    - password




*/