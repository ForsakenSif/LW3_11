#ifndef TABLET_H
#define TABLET_H

#include "Electronics.h"

class Tablet : public Electronics {
private:
    std::string os;

public:
    Tablet(const std::string& brand, float price, const std::string& os);
    ~Tablet();

    void print() const override;
    void specialFunction() const override;
};

#endif // TABLET_H
