#include <iostream>
#include <cctype>
#include <ostream>
#include <string>

int main()
{
  std::string s("adachi wa saiko");
  if (!s.empty())          // make sure there's a character in s[0]
    s[0] = toupper(s[0]);  // assign a new value to the first character in s
  std::cout << s << std::endl;

  return 0;
}
