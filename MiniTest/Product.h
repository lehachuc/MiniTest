#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    std::string name;
    int id;
    double price;
public:
    Product(std::string n, int i, double p);

    // Các phương thức getter thông thường
    std::string getName() const ;
    int getID();
    double getPrice();

    // Phương thức tính toán giá tiền dựa trên số lượng sản phẩm
    double calculateTotalPrice(int quantity);
};

#endif
