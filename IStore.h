#ifndef ISTORE_H
#define ISTORE_H

#include <string>
#include <vector>

class IProduct;

class IStore {
public:
    virtual ~IStore() = default;
    virtual std::string getName() const = 0;
    virtual std::vector<IProduct*> getProducts() const = 0;
};

#endif // ISTORE_H
