#include "Product.h"

Product::Product(std::string n, int i, double p) : name(n), id(i), price(p) {}

std::string Product::getName() const  {
    return name;
}

int Product::getID() {
    return id;
}

double Product::getPrice() {
    return price;
}

double Product::calculateTotalPrice(int quantity) {
    if (quantity > 1) {
        return price * (quantity - 1);
    }
    return price;
}
