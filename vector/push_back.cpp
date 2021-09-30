#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;

int main()
{
  vector<int> v1;          // empty vector
  for (int i = 0; i != 100; ++i)
    v1.push_back(i);       // append sequential integers to v1
  // at the end of the loop v1 has 100 elements, values 0 ... 99


  // read words from the standard input and store them as elements in a vector
  string word;
  vector<string> text;     // empty vector
  while (cin >> word)
    text.push_back(word);  // append word to text

  return 0;
}
