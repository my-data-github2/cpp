#include "/home/sunbeam/Sunbeam/cpp/Assignment-3/Cylinder/cylinder.h"
#include<iostream>
    Cylinder::Cylinder() : radius(0), height(0) {}

    Cylinder::Cylinder(double radius, double height)
    {
        this->radius = radius;
        this->height = height;
    }
    double Cylinder:: getRadius()
    {
        return this->radius;
    }
    void Cylinder::setRadius(double radius)
    {
        this->radius = radius;
    }
    double Cylinder::getHeight()
    {
        return this->height;
    }
    void Cylinder::setHeight(double height)
    {
        this->height = height;
    }

    double Cylinder::getVolume()
    {
        return 3.14 * this->radius * this->radius * this->height;
    }
    void Cylinder::printVolume()
    {
        cout<<"The Volume of the cylinder is " << getVolume() << endl;
    }
