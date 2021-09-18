#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
  string line;
  // read input a line at a time and discard blank lines
  while (getline(cin, line))
    if (!line.empty())
      cout << line << endl;

  return 0;
}
