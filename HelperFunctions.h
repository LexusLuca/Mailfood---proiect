#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H

#include <unordered_map>
#include <vector>
#include "Client.h"
#include "Store.h"
#include "Cart.h"

class HelperFunctions {
public:
    static void createUser(std::unordered_map<std::string, Client*>& users);
    static Client* loginUser(const std::unordered_map<std::string, Client*>& users);
    static Store* chooseStore(const std::vector<Store*>& stores);
    static void shop(Store* store, Cart& cart);
};

#endif // HELPERFUNCTIONS_H
