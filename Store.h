#ifndef STORE_H
#define STORE_H

#include <vector>
#include <iostream>
#include <string>

class Store {
public:
    Store(int ID, const std::string& StoreName);

    static void ShowStores();

private:
    int ID;
    std::string StoreName;
    static std::vector<Store> Stores;
};

#endif
