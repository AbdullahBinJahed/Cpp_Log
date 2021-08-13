#include <iostream>

constexpr int i = 42;
int j = 0;

int main()
{
  const int *p = nullptr;        // p is a pointer to a const int
  constexpr int *q = nullptr;    // q is a const pointer to int
  constexpr const int *cp = &i;  // cp is a constant pointer to the const int i
  
  return 0;
}