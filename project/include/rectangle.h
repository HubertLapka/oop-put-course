#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
using namespace std;
#include "figure.h"

class Rectangle: public Figure
{
private:
    float side1, side2;
public:
    Rectangle(float s1, float s2);
    void show_dimensions();
    float calculate_circumference();
    float calculate_area();
    ~Rectangle();
};


#endif // RECTANGLE_H_INCLUDED
