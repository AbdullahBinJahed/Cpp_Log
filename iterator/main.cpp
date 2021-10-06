#include <cctype>
#include <string>
using std::string;

int main()
{
  string s("adachi suki");
  if (s.begin() != s.end())
  {
    auto it = s.begin();
    *it = std::toupper(*it);
  }

  return 0;
}
