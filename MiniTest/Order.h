#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "Customer.h"
#include "Product.h"

class Order {
private:
    int orderID;
    Customer customer;
    std::vector<Product> products;
public:
    Order(int id, Customer c, std::vector<Product> p);
    int getOrderID();
    Customer getCustomer();
    std::vector<Product> getProducts();
};

#endif
