#include <vector>
using std::vector;

int main()
{
  vector<int> v;     // empty vector

  v.empty()          // returns true if v is empty; otherwise returns false
  v.size()           // return the number of elements in v
  v.push_back(t)     // adds an element with value t to the end of v
  v[n]               // returns a reference to the element at position n in v
  v1 = v2            // replaces the elements in v1 with a copy of the elements in v2
  v1 = {a, b, c...}  // replaces the elements in v1 with a copy of the elements in the comma-separated list
  v1 == v2           // v1 and v2 are eqaul if they have the same number of elements and each
  v1 != v2           // element in v1 is equal to the corresponding element in v2
  <,<=,>,>=          // have their normal meanings using dictionary ordering

  return 0;
}
