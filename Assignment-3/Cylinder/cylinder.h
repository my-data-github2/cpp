#ifndef CYLINDER_H
#define CYLINDER_H
#include<iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;
    double volume;

public:
    Cylinder();

    Cylinder(double radius, double height);
    double getRadius();
    void setRadius(double radius);
    double getHeight();
    void setHeight(double height);
    double getVolume();
    void printVolume();
};
#endif
