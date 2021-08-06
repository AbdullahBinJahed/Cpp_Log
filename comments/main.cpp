#include <iostream>
/*
 * Simple main function:
 * Read two numbers and write their sum
 */
int main()
{
  // prompt user to enter two numbers
  std::cout << "Enter two numbers: " << std::endl;
  int x = 0, y = 0;    // variables to hold the input we read
  std::cin >> x >> y;  // read input
  std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;
  
  return 0;
} a