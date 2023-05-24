#include "circle.h"
#include<iostream>
using namespace std;
static const float pi = 3.14159;

Circle::Circle(float r): radius(r) {}
void Circle::show_dimensions()
{
    cout << "radius of circle: " << radius << endl;
}
float Circle::calculate_circumference()
{
    return 2*pi*radius;
}
float Circle::calculate_area()
{
    return pi*radius*radius;
}

Circle::~Circle()
{
    //destruktor
}
