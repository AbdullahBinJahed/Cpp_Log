#include <iostream>
#include <cctype>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
  string s("Adachi wa saiko!!!");
  // convert s to uppercase
  for (auto &c : s)  // for every char in s (note: c is a reference)
    c = toupper(c);  // c is a reference, so the assignment changes the char in s
  cout << s << endl;
  
  return 0;
}
