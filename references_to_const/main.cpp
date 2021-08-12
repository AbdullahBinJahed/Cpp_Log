#include <iostream>

int main()
{
  const int ci = 1024;
  const int &r = ci;   // ok: both reference and underlying object are const
  // r = 42;           // error: r is a reference to const
  // int &r2 = ci;     // error: non const reference to a const object
  
  
  int i = 42;
  const int &rf1 = i;        // we can bind a const int& to a plain int object
  const int &rf2 = 42;       // ok: rf2 is a reference to const
  const int &rf3 = rf1 * 2;  // ok: rf3 is reference to const
  // int &rf4 = rf1 * 2;     // error: r4 is a plain, non const reference
  
  
  int x = 69;
  int &r1 = x;        // r1 is bound to x
  const int &r2 = x;  // r2 also bound to x; but cannot be used to change i
  r1 = 0;             // r1 is not const; x is now 0
  // r2 = 0;          // error: r2 is a reference to const
  
  std::cout << "references_to_const" << std::endl;
  
  return 0;
}