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
    float s1, s2, s3, s4, r, h;
    int opcja;
    for(int i = 0; ;i++)
    {
        cout << "0 - end the program" << endl;
        cout << "1 - create a square" << endl;
        cout << "2 - create a rectangle" << endl;
        cout << "3 - create a triangle " << endl;
        cout << "4 - create a circle" << endl;
        cout << "5 - create a rhombus" << endl;
        cout << "6 - create a parallelogram" << endl;
        cout << "7 - create a trapezoid" << endl;


         cout << "enter the selected option " << endl;
         cin >> opcja;
         if(opcja < 0 || opcja > 7) cout << "there is no such option" << endl;

            switch(opcja)
         {
            case 0:
                return 0;
            case 1:
                {
                cout << "enter the side length" << endl;
                cin >> s1;
                 Square elem(s1);
                 elem.show_dimensions();
                 for(int x = 0; x < 2; x++)
                 {
                 cout << "0 - end the program" << endl;
                 cout << "1 - calculate area of figure" << endl;
                 cout << "2 - calculate circumference of figure" << endl;
                 cin >> opcja;
                 switch(opcja)
                 {
                 case 0:
                    return 0;
                 case 1:
                   cout << " the area of figure is: " << elem.calculate_area() << endl;
                   break;
                 case 2:
                    cout << " the cirumference of figure is: " << elem.calculate_circumference() << endl;
                   break;
                 }
                 }
                 break;
                }
            case 2:
                {
                cout << "enter two side length" << endl;
                cin >> s1 >> s2;
                 Rectangle elem(s1, s2);
                 elem.show_dimensions();
                      for(int x = 0; x < 2; x++)
                 {
                 cout << "0 - end the program" << endl;
                 cout << "1 - calculate area of figure" << endl;
                 cout << "2 - calculate circumference of figure" << endl;
                 cin >> opcja;
                 switch(opcja)
                 {
                 case 0:
                    return 0;
                 case 1:
                   cout << " the area of figure is: " << elem.calculate_area() << endl;
                   break;
                 case 2:
                    cout << " the cirumference of figure is: " << elem.calculate_circumference() << endl;
                   break;
                 }
                 }
                 break;
                break;
                }
            case 3:
                {
                cout << "enter the base and two side lenght" << endl;
                cin >> s1 >> s2 >> s3;
                Triangle elem(s1, s2, s3);
                try
                    {
                        elem.show_dimensions();
                    }
                catch(std::invalid_argument e)
                {
                    std::cout << "Fault: "<< e.what();
                }

                      for(int x = 0; x < 2; x++)
                 {
                 cout << "0 - end the program" << endl;
                 cout << "1 - calculate area of figure" << endl;
                 cout << "2 - calculate circumference of figure" << endl;
                 cin >> opcja;
                 switch(opcja)
                 {
                 case 0:
                    return 0;
                 case 1:
                   cout << " the area of figure is: " << elem.calculate_area() << endl;
                   break;
                 case 2:
                    cout << " the cirumference of figure is: " << elem.calculate_circumference() << endl;
                   break;
                 }
                 }
                 break;
                 break;
                }
            case 4:
                {
                cout << "enter length of radius" << endl;
                cin >> r;
                 Circle elem(r);
                 elem.show_dimensions();
                      for(int x = 0; x < 2; x++)
                 {
                 cout << "0 - end the program" << endl;
                 cout << "1 - calculate area of figure" << endl;
                 cout << "2 - calculate circumference of figure" << endl;
                 cin >> opcja;
                 switch(opcja)
                 {
                 case 0:
                    return 0;
                 case 1:
                   cout << " the area of figure is: " << elem.calculate_area() << endl;
                   break;
                 case 2:
                    cout << " the cirumference of figure is: " << elem.calculate_circumference() << endl;
                   break;
                 }
                 }
                 break;
                break;
                }
            case 5:
                {
                cout << "enter the side and height lenght" << endl;
                cin >> s1 >> h;
                Rhombus elem(s1, h);
                 elem.show_dimensions();
                      for(int x = 0; x < 2; x++)
                 {
                 cout << "0 - end the program" << endl;
                 cout << "1 - calculate area of figure" << endl;
                 cout << "2 - calculate circumference of figure" << endl;
                 cin >> opcja;
                 switch(opcja)
                 {
                 case 0:
                    return 0;
                 case 1:
                   cout << " the area of figure is: " << elem.calculate_area() << endl;
                   break;
                 case 2:
                    cout << " the cirumference of figure is: " << elem.calculate_circumference() << endl;
                   break;
                 }
                 }
                 break;
                }
             case 6:
                {
                cout << "enter two side and height lenght" << endl;
                cin >> s1 >> s2 >> h;
                 Parallelogram elem(s1, s2, h);
                 elem.show_dimensions();
                      for(int x = 0; x < 2; x++)
                 {
                 cout << "0 - end the program" << endl;
                 cout << "1 - calculate area of figure" << endl;
                 cout << "2 - calculate circumference of figure" << endl;
                 cin >> opcja;
                 switch(opcja)
                 {
                 case 0:
                    return 0;
                 case 1:
                   cout << " the area of figure is: " << elem.calculate_area() << endl;
                   break;
                 case 2:
                    cout << " the cirumference of figure is: " << elem.calculate_circumference() << endl;
                   break;
                 }
                 }
                 break;
                break;
                }
             case 7:
                {
                cout << "enter four side and height lenght" << endl;
                cin >> s1 >> s2 >> s3 >> s4 >> h;
                 Trapezoid elem(s1, s2, s3, s4, h);
                 elem.show_dimensions();
                      for(int x = 0; x < 2; x++)
                 {
                 cout << "0 - end the program" << endl;
                 cout << "1 - calculate area of figure" << endl;
                 cout << "2 - calculate circumference of figure" << endl;
                 cin >> opcja;
                 switch(opcja)
                 {
                 case 0:
                    return 0;
                 case 1:
                   cout << " the area of figure is: " << elem.calculate_area() << endl;
                   break;
                 case 2:
                    cout << " the cirumference of figure is: " << elem.calculate_circumference() << endl;
                   break;
                 }
                 }
                 break;
                break;
                }


    }
    }



    return 0;
}

