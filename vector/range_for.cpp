#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> v{1,2,3,4,5,6,7,8,9};
  cout << "1 2 3 4  5  6  7  8  9" << endl;
  for (auto &i : v)    // for each element in v (note: i is a reference)
    i *= i;            // square the element value
  for (auto i : v)     // for each element in v
    cout << i << " ";  // print the element
  cout << endl;

  return 0;
}
