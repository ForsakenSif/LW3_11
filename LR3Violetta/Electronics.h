#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include <iostream>
#include <string>

class Electronics {
protected:
    std::string brand;
    float price;

public:
    Electronics(const std::string& brand, float price);
    virtual ~Electronics();

    virtual void print() const;
    virtual void specialFunction() const = 0;
};

#endif // ELECTRONICS_H
