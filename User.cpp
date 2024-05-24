#include "User.h"
#include <string>
#include <iostream>

    User::User(std::string &username , std::string &password, std::string &Name, std::string &LastName, std::string &PhoneNumber, std::string &Adress )
    :username(username),password(password), Name(Name), LastName(LastName), PhoneNumber(PhoneNumber), Adress(Adress)    {}



    void User::Login(std::string &username, std::string &password)
    {
        while(true)
        {
            std::cout<<"Enter your username: "; std::cin>>username;
            std::cout<<"Enter your password: "; std::cin>>password;
            if(this->username == username && this->password == password)
                {
                    std::cout<<"Login succesful!";
                    // AppSystem();
                    break;
                }
            else std::cout<<"Invalid email or password \n";
        }
    }

