#include "triangle.h"
#include<iostream>
#include<math.h>
using namespace std;

Triangle::Triangle(float s1, float s2, float s3): side1(s1), side2(s2), side3(s3) {}
void Triangle::show_dimensions()
{
    cout << "triangle with dimensions: " << side1 << "\t" << side2 << "\t" << side3 << endl;
}
float Triangle::calculate_circumference()
{
    float cirumference = side1+side2+side3;
    return cirumference;
}
float Triangle::calculate_area()
{
    float p, area;
    p = (side1 + side2 + side3)/2.0;
    area = sqrt(p*(p - side1) * (p - side2) *(p - side3) );
    return area;
}

Triangle::~Triangle()
{
    //destruktor
}

