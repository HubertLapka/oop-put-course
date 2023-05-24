#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
using namespace std;
#include "figure.h"

class Triangle: public Figure
{
private:
    float side1, side2, side3;
public:
    Triangle(float s1, float s2, float s3);
    void show_dimensions();
    float calculate_circumference();
    float calculate_area();
    ~Triangle();
};


#endif // TRIANGLE_H_INCLUDED
