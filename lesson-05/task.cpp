#include <iostream>

using namespace std;

class Figure
{
    public:
    Figure(){};
    virtual int Circuit() = 0;
    virtual Figure *Multi(int m) = 0;
    virtual int Field() = 0;
    virtual void Print() = 0;
    virtual ~Figure(){};
};

class Quadrat: public Figure {
   private:
   int side;
   public:
   Quadrat(int side) { this->side = side; }
   int Circuit() { return 4 * side; }
  Quadrat *Multi(int m) { return new Quadrat(side * m); }
  int Field() { return side*side; }
  void Print() { cout << this->side << endl; }
};

int main()
{
    Quadrat k1(10);
    Quadrat k2(20);
    Quadrat *biggerk1 = k1.Multi(3);
    k1.Print();
    cout << k1.Circuit() << endl;
    cout  << k1.Field() << endl;
