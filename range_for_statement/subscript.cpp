#include <iostream>
#include <string>

int main()
{
  std::string s("Adachi");
  if (!s.empty())                    // make sure there's a character to print
    std::cout << s[0] << std::endl;  // print the first character in s

  return 0;
}
