#include <vector>
using std::vector;

int main()
{
  vector<int> v;
  const vector<int> cv;
  auto it1 = v.begin();   // it1 has type vector<int>::iterator
  auto it2 = cv.begin();  // it2 has type vector<int>::const_iterator
  auto it3 = v.cbegin();  // it3 has type vector<int>::const_iterator
  auto it4 = v.cend();    // it4 has type vector<int>::const_iterator

  return 0;
}
