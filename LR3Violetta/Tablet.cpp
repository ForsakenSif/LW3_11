#include "Tablet.h"

Tablet::Tablet(const std::string& brand, float price, const std::string& os)
    : Electronics(brand, price), os(os) {}

Tablet::~Tablet() {}

void Tablet::print() const {
    std::cout << "Tablet - ";
    Electronics::print();
    std::cout << "Operating System: " << os << std::endl;
}

void Tablet::specialFunction() const {
    std::cout << "Special function of Tablet" << std::endl;
}
