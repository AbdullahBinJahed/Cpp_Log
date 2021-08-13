#include <iostream>

int main()
{
  int errNumber = 0;
  int *const currErr = &errNumber;  // currErr will always point to errNumber
  const double pi = 3.14159;
  const double *const pip = &pi;  // pip is a const pointer to a const object
  
  return 0;
}