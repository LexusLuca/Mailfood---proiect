#include "User.h"
#include <string>
#include <iostream>

    User::User(std::string &username , std::string &password, std::string &Name, std::string &LastName, std::string &PhoneNumber, std::string &Adress )
    :username(username),password(password), Name(Name), LastName(LastName), PhoneNumber(PhoneNumber), Adress(Adress)    {}

    void User::CreateAccount(std::string &username , std::string &password, std::string &Name, std::string &LastName, std::string &PhoneNumber, std::string &Adress)
    {
        std::cout<<"Create your account: \n";
        std::cout<<"Enter your username: \n"; std::cin>>username;
        std::cout<<"Enter your password: \n"; std::cin>>password;
        std::cout<<"Enter your name: \n"; std::cin>>Name;
        std::cout<<"Enter your last name: \n"; std::cin>>LastName;
        std::cout<<"Enter your phone number: \n"; std::cin>>PhoneNumber;
        std::cout<<"Enter your adress: \n"; std::cin>>Adress;
    }
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

