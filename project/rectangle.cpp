#include "rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(float s1, float s2): side1(s1), side2(s2) {}
void Rectangle::show_dimensions()
{
    cout << "rectangle with dimensions: " << side1 << "\t" << side2 << endl;
}
float Rectangle::calculate_circumference()
{
    return 2*side1 + 2*side2;
}
float Rectangle::calculate_area()
{
    return side1*side2;
}

Rectangle::~Rectangle()
{
    //destruktor
}
