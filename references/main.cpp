#include <iostream>

int main()
{
  int iVal = 69;
  int &refVal = iVal;
  iVal = 420;
  std::cout << refVal << std::endl;  // wil print 420
  return 0;
}