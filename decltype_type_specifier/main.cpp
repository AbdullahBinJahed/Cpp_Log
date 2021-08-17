#include <iostream>
double f();

int main()
{
  decltype(f()) pi = 3.14159;
  std::cout << pi << std::endl;
  
  return 0;
}

double f()
{
  return 3.14;
}