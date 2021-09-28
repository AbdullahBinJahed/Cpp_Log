#include <vector>
using std::vector;

int main()
{
  vector<int> v1;  // empty vector
  for (int i = 0; i != 100; ++i)
    v1.push_back(i);  // append sequential integers to v1
  // at the end of the loop v1 has 100 elements, values 0 ... 99

  return 0;
}
