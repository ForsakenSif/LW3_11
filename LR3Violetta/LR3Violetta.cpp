#include <iostream>
#include "MobilePhone.h"
#include "Camera.h"
#include "Tablet.h"

int main() {
    MobilePhone phone("Samsung", 899.99, "Galaxy S21");
    Camera camera("Canon", 599.99, 24);
    Tablet tablet("Apple", 799.99, "iOS");

    std::cout << "Printing information:" << std::endl << std::endl;
    phone.print();
    phone.specialFunction();
    std::cout << std::endl;

    camera.print();
    camera.specialFunction();
    std::cout << std::endl;

    tablet.print();
    tablet.specialFunction();
    std::cout << std::endl;

    return 0;
}
