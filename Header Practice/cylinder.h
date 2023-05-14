#ifndef cylinder_h
#define cylinder_h

#include <iostream>
using namespace std;


class Cylinder {
// these can be called attributes that our object might have
private:
    double radius;
    double height;
    int amount;
// these are the functions or methods we can call inside our object
public:
    Cylinder();
    Cylinder(double r, double h);
    // We can also function overload the methods. so instead of only having 2 variables as paramaters
    // we can have 3. Since C++ recognizes the difference in data types or the amount of parameters involved
    // We can have functions that are named the same but perform different things according to the arguments we pass 
    Cylinder(double r, double h, int a);
    void setCylinderRadius(double r);
    double getCylinderRadius();
    void setCylinderHeight(double h);
    double getCylinderHeight();
    void setCylinderAmount(int a);
    int getCylinderAmount();
    void display();
};

// below are all the implementations we have defined for the methods/functions above

Cylinder::Cylinder() {
    radius = 0;
    height = 0;
    amount = 0;
}

Cylinder::Cylinder(double r, double h) {
    radius = r;
    height = h;
}

Cylinder::Cylinder(double r, double h, int a) {
    radius = r;
    height = h;
    amount = a;
}

void Cylinder::setCylinderRadius(double r) {
    radius = r;
}

double Cylinder::getCylinderRadius() {
    return radius;
}

void Cylinder::setCylinderHeight(double h) {
    height = h;
}

double Cylinder::getCylinderHeight() {
    return height;
}

void Cylinder::setCylinderAmount(int a) {
    amount = a;
}

int Cylinder::getCylinderAmount() {
    return amount;
}

void Cylinder::display() {
    cout << "The radius is " << radius << endl;
    cout << "The height is "<< height << endl;
    if (amount != 0)
    {
    cout << "The amount of cylinders is "<< amount << endl;
    }
    
}

#endif