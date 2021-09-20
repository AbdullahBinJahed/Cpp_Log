#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
  string str("Adachi wa Saiko desu");
  // print the characters in str one character to a line
  for (auto c : str)    // for every char in str
    cout << c << endl;  // print the current character followed by a newline

  return 0;
}
