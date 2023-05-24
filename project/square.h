#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
using namespace std;
#include "figure.h"

class Square: public Figure
{
private:
    float side;
public:
    Square(float s);
    void show_dimensions();
    float calculate_circumference();
    float calculate_area();
    ~Square();
};


#endif // SQUARE_H_INCLUDED
