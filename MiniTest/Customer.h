#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Product.h"

class Customer {
private:
    std::string name;
    int customerID;
    std::vector<Product> cart;
public:
    Customer(std::string n, int id);
    void addToCart(Product p);
    std::string getName();
    int getID();
    std::vector<Product> getCart();
};

#endif
