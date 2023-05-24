#include <iostream>
#include "figure.h"
#include "square.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "rhombus.h"
#include "parallelogram.h"
#include "trapezoid.h"
using namespace std;

int main()
{
    Trapezoid elem1(7, 5, 6, 7, 5);
    cout << elem1.calculate_circumference() << endl;
    cout << elem1.calculate_area() << endl;
    elem1.show_dimensions();

    return 0;
}
