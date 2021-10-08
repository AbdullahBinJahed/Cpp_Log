#include <cctype>
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
  string s("adachi wa saiko");
  cout << s << endl;
  // process characters in s until we run out of characters or we hit a whitespace
  for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    *it = toupper(*it);
  cout << s << endl;

  return 0;
}
