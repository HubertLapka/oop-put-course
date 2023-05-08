
#include <iostream>
#include <cmath>

class Logarithm
{
public:
  Logarithm (double base, double argument)
  {
    base_ = base;
    argument_ = argument;
  }

  double Calculate () const
  {
      if(base_ <= 0 || base_ == 1)
      {
          std::string exception = "wrong base of logarithm";
          throw std::invalid_argument(exception);
      }
      else if(argument_ <= 0) 
      {
           std::string exception = "argument must be greater than zero";
          throw std::invalid_argument(exception);
      }
      
    return std::log (argument_) / std::log (base_);
    
  }

private:
  double base_;
  double argument_;
};

int main()
{
    Logarithm tmp(-1, 4);
    try
    {
        double result = tmp.Calculate();
        std::cout << result;
    }
    catch(std::invalid_argument e)
    {
         std::cout << "Wyjatek: "<< e.what();
    }
    return 0;
