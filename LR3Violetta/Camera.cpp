#include "Camera.h"

Camera::Camera(const std::string& brand, float price, int megapixels)
    : Electronics(brand, price), megapixels(megapixels) {}

Camera::~Camera() {}

void Camera::print() const {
    std::cout << "Camera - ";
    Electronics::print();
    std::cout << "Megapixels: " << megapixels << std::endl;
}

void Camera::specialFunction() const {
    std::cout << "Special function of Camera" << std::endl;
}
