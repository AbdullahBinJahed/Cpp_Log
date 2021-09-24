#include <iostream>
#include <cctype>
#include <string>

int main()
{
  std::string s("adachi wa saiko");
  // process characters in s until we run out of characters or we hit a whitespace
  for (decltype(s.size()) index  = 0; index != s.size() && !isspace(s[index]); ++index)
    s[index] = toupper(s[index]);  // capitalize the current character
  std::cout << s << std::endl;

  return 0;
}
