#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H

#include "Electronics.h"

class MobilePhone : public Electronics {
private:
    std::string model;

public:
    MobilePhone(const std::string& brand, float price, const std::string& model);
    ~MobilePhone();

    void print() const override;
    void specialFunction() const override;
};

#endif // MOBILEPHONE_H
