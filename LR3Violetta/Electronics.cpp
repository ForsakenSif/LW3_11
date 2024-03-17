#include "Electronics.h"

Electronics::Electronics(const std::string& brand, float price)
    : brand(brand), price(price) {}

Electronics::~Electronics() {}

void Electronics::print() const {
    std::cout << "Brand: " << brand << ", Price: $" << price << std::endl;
}
