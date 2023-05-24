#include "square.h"
#include<iostream>
using namespace std;

Square::Square(float s): side(s) {}

void Square::show_dimensions()
{
    cout << "length of square side: " << side << endl;
}
float Square::calculate_circumference()
{
    return 4*side;
}
float Square::calculate_area()
{
    return side*side;
}

Square::~Square()
{
    //destruktor
}
