#include "parallelogram.h"
#include<iostream>
#include<math.h>
using namespace std;

Parallelogram::Parallelogram(float s1, float s2, float h): side1(s1), side2(s2), height(h) {}

void Parallelogram::show_dimensions()
{
    cout << "triangle with dimensions:  " << side1 << "\t" << side2 << endl;
    cout << "lenght of parallelograms height: " << height << endl;
}
float Parallelogram::calculate_circumference()
{
    return 2*side1 + 2*side2;
}
float Parallelogram::calculate_area()
{
    return side1*height;
}

Parallelogram::~Parallelogram()
{
    //destruktor
}
