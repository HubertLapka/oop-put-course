#include <iostream>

using namespace std;
class Event
{
private:
  int day, month;
  string name;
public:
    Event ()
  {
    this->day = 1;
    this->month = 1;
    this->name = "empty";
  }
  Event (int d, int m, string n)
  {
    this->day = d;
    this->month = m;
    this->name = n;
  }
Event(string n) : Event() {
    this->name = n;
};
  void show ()
  {
    cout << this->day << " " << this->month << " " << this->name << endl;
  }
  void test ()
  {
    if (this->name == "test")
      cout << "You have to study" << endl;
    else
      cout << "You are free" << endl;
  }
};

int
main ()
{
  Event e1;
  Event e2 (2, 8, " mom's birthday");
  Event e3 (12, 6, "test");
  e2.show ();
  e1.show ();
  e2.test ();
  e3.test ();
  Event e4("holiday");
  e4.show();

}
