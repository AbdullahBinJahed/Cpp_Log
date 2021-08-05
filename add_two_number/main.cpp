#include <iostream>

int main()
{
  int x, y, sum;
  
  std::cout << "Enter a number: ";
  std::cin >> x;
  std::cout << "Enter another number: ";
  std::cin >> y;
  sum = x + y;
  std::cout << "The sum of two number is " << sum << std::endl;
  
  return 0;
}