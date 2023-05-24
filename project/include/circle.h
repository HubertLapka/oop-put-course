#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
using namespace std;
#include "figure.h"

class Circle: public Figure
{
private:
    float radius;
public:
    Circle(float r);
    void show_dimensions();
    float calculate_circumference();
    float calculate_area();
    ~Circle();
};



#endif // CIRCLE_H_INCLUDED
