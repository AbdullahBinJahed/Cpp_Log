#include <string>

using std::string;

int main()
{
  string s1;                    // default initialization; s1 is the empty string
  string s2 = s1;               // s2 is a copy of s1
  string s3 = "Adachi";         // s3 is a copy of the string literal
  string s4(10, 'c');           // s4 is cccccccccc
  string s5 = "Shimamura";      // copy initialization
  string s6("Shimamura");       // direct initialization
  string s7(10, 'S');           // direct initialization, s7 is SSSSSSSSSS
  string s8 = string(10, 'c');  // copy initialization; s8 is cccccccccc

  return 0;
}
