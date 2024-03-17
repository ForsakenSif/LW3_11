#ifndef CAMERA_H
#define CAMERA_H

#include "Electronics.h"

class Camera : public Electronics {
private:
    int megapixels;

public:
    Camera(const std::string& brand, float price, int megapixels);
    ~Camera();

    void print() const override;
    void specialFunction() const override;
};

#endif // CAMERA_H
