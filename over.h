#pragma once
class fruit {
public:
    fruit() {// default values
        price = 200; many = 2;
    }
    int many;
    float price;
    float show();
    // test private and protected:
    // operator overloading
protected:
    void operator*(float);
};
class apple : public fruit {
public:
    apple() : redness(5) {
        price = 2000;
    };
    int redness;
    // operator overloading
    void operator-(int);
    void discount(float aa);
};
