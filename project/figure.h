#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

class Figure
{
   public:
       virtual void show_dimensions() = 0;
       virtual float calculate_circumference() = 0;
       virtual float calculate_area() = 0;
       virtual ~Figure();
};




#endif // FIGURE_H_INCLUDED
