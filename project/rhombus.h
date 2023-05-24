#ifndef RHOMBUS_H_INCLUDED
#define RHOMBUS_H_INCLUDED
using namespace std;
#include "figure.h"

class Rhombus: public Figure
{
private:
    float side, height;
public:
    Rhombus(float s, float h);
    void show_dimensions();
    float calculate_circumference();
    float calculate_area();
    ~Rhombus();
};


#endif // RHOMBUS_H_INCLUDED
