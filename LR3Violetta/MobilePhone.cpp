#include "MobilePhone.h"

MobilePhone::MobilePhone(const std::string& brand, float price, const std::string& model)
    : Electronics(brand, price), model(model) {}

MobilePhone::~MobilePhone() {}

void MobilePhone::print() const {
    std::cout << "Mobile Phone - ";
    Electronics::print();
    std::cout << "Model: " << model << std::endl;
}

void MobilePhone::specialFunction() const {
    std::cout << "Special function of Mobile Phone" << std::endl;
}
