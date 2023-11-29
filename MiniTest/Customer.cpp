#include "Customer.h"

Customer::Customer(std::string n, int id) : name(n), customerID(id) {}

void Customer::addToCart(Product p) {
    cart.push_back(p);
}

std::string Customer::getName() {
    return name;
}

int Customer::getID() {
    return customerID;
}

std::vector<Product> Customer::getCart() {
    return cart;
}
