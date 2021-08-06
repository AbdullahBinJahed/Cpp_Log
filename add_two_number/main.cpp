#include <iostream>

int main()
{
  int x = 0, y = 0, sum = 0;
  
  std::cout << "Enter two numbers: ";
  std::cin >> x >> y;
  sum = x + y;
  std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;
  
  return 0;
}