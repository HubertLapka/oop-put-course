#include "rhombus.h"
#include<iostream>
#include<math.h>
using namespace std;

Rhombus::Rhombus(float s, float h): side(s), height(h) {}

void Rhombus::show_dimensions()
{
    cout << "length of rhombus side: " << side << endl;
    cout << "lenght of rhombus height: " << height << endl;
}
float Rhombus::calculate_circumference()
{
    return 4*side;
}
float Rhombus::calculate_area()
{
    return side*height;
}

Rhombus::~Rhombus()
{
    //destruktor
}
