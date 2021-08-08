#include <iostream>

int main()
{
  int ival = 69;
  int *p = &ival;  // p holds the address of ival; p is a pointer to ival
  std::cout << p << " : " << *p << std::endl;  // * (dereference operator) yields the object to which p points; prints 69
  
  return 0;
}