#include <iostream>

int reused = 69;  // reused has global scope
int main()
{
  int unique = 0;  // unique has block scope
  // output#1: uses global reused; print 69 0
  std::cout << reused << " " << unique << std::endl;
  int reused = 0;  // new local object named reused hides global reused
  // output#2: uses local reused; print 0 0
  std::cout << reused << " " << unique << std::endl;
  // output#3: explicitly requests the global reused; print 69 0
  std::cout << ::reused << " " << unique << std::endl;
  
  return 0;
}