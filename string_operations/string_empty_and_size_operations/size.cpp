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
  // read input a line at a time and print lines that are longer than 80 characters
  while (getline(cin, line))
    if (line.size() > 80)  // auto len = line.size();  // len has type string::size_type
      cout << line << endl;

  return 0;
}
