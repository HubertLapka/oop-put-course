#ifndef TRAPEZOID_H_INCLUDED
#define TRAPEZOID_H_INCLUDED
using namespace std;
#include "figure.h"

class Trapezoid: public Figure
{
private:
    float side1, side2, side3, side4, height;
public:
    Trapezoid(float s1, float s2, float s3, float s4, float h);
    void show_dimensions();
    float calculate_circumference();
    float calculate_area();
    ~Trapezoid();
};


#endif // TRAPEZOID_H_INCLUDED
