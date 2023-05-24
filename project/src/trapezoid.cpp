#include "trapezoid.h"
#include<iostream>
#include<math.h>
using namespace std;

Trapezoid::Trapezoid(float s1, float s2, float s3, float s4, float h): side1(s1), side2(s2), side3(s3), side4(s4), height(h) {}

void Trapezoid::show_dimensions()
{
    cout << "trapezoid with dimensions:  " << side1 << "  " << side2 << "  " << side3 << "  " << side4 << endl;
    cout << "lenght of rapezoids height: " << height << endl;
}
float Trapezoid::calculate_circumference()
{
    return side1 + side2 + side3 + side4;
}
float Trapezoid::calculate_area()
{
    return ( (side1+side2)*height )/2 ;
}

Trapezoid::~Trapezoid()
{
    //destruktor
}
