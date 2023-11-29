#include <iostream>
#include "Product.h"
#include "Customer.h"
#include "Order.h"

int main() {
    // Tạo một sản phẩm
    Product product1("Phone", 1, 500);

    // Tạo một khách hàng
    Customer customer("John", 101);

    // Thêm sản phẩm vào giỏ hàng của khách hàng
    customer.addToCart(product1);

    // Thử tính toán giá tiền dựa trên số lượng sản phẩm
    int quantity = 3;
    double totalPrice = product1.calculateTotalPrice(quantity);
    std::cout << "Total price for " << quantity << " products: " << totalPrice << std::endl;

    // Hiển thị thông tin về sản phẩm được thêm vào giỏ hàng
    std::cout << "Customer " << customer.getName() << " added " << customer.getCart()[0].getName() << " to cart." << std::endl;

    // Tạo một đơn hàng từ giỏ hàng của khách hàng
    std::vector<Product> productsInCart = customer.getCart();
    Order order1(1, customer, productsInCart);

    // Hiển thị thông tin về đơn hàng
    std::cout << "Order ID: " << order1.getOrderID() << ", Customer: " << order1.getCustomer().getName() << std::endl;
    std::cout << "Products in the order: " << std::endl;
    for (const auto& product : order1.getProducts()) {
        std::cout << "- " << product.getName() << std::endl;
    }

    return 0;
}
