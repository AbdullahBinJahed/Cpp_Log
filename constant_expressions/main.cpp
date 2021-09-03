#include <iostream>

int main()
{
  const int max_files = 20;         // max_files is a constant expression
  const int limit = max_files + 1;  // limit is a constant expression
  int staff_size = 27;              // staff_size is not a constant expression
  // const int sz = get_size();     // sz is not a constant expression
  
  
  constexpr int mf = 20;         // 20 is a constant expression
  constexpr int celimit = mf + 1;  // mf + 1 is a constant expression
  // constexpr int sz = size();  // ok only if size is a constexpr function
  
  return 0;
}
