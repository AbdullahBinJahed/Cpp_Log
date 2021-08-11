#include <iostream>

int main()
{
  const int buffSize = 512;  // input buffer size
  // buffSize = 512:  // error: attempt to write to a const object
  // const int k;  // error: k is uninitialized const
  
  return 0;
}