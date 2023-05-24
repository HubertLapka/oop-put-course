#ifndef PARALLELOGRAM_H_INCLUDED
#define PARALLELOGRAM_H_INCLUDED
using namespace std;
#include "figure.h"

class Parallelogram: public Figure
{
private:
    float side1, side2, height;
public:
    Parallelogram(float s1, float s2, float h);
    void show_dimensions();
    float calculate_circumference();
    float calculate_area();
    ~Parallelogram();
};



#endif // PARALLELOGRAM_H_INCLUDED
