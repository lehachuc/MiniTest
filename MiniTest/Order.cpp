#include "Order.h"

Order::Order(int id, Customer c, std::vector<Product> p) : orderID(id), customer(c), products(p) {}

int Order::getOrderID() {
    return orderID;
}

Customer Order::getCustomer() {
    return customer;
}

std::vector<Product> Order::getProducts() {
    return products;
}
