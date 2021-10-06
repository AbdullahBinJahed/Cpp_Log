#include <cctype>
#include <string>
using std::string;

int main()
{
  string s("adachi suki");
  if (s.begin() != s.end())   // make sure s is not empty
  {
    auto it = s.begin();      // it denotes the first character in s
    *it = std::toupper(*it);  // make that character uppercase
  }

  return 0;
}
