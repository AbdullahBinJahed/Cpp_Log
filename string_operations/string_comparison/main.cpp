#include <iostream>
#include <string>

using std::string;

int main()
{
  string str = "Hello";          // less than phrase
  string phrase = "Hello World";
  string slang = "Hiya";         // greater than both str and phrase
  
  // Assignment for strings
  string st1(10, 'c'), st2;      // st1 is cccccccccc; st2 is an empty string
  st1 = st2;                     // assignment: replace contents of st1 with a copy of st2
                                 // both st1 and st2 are now the empty string

  // Adding two strings
  // string s1 = "hello, ", s2 = "world\n";
  // string s3 = s1 + s2;        // s3 is hello, world\n
  // s1 += s2;                   // equivalent to s1 = s1 + s2

  // Adding Literals and strings
  string s1 = "hello", s2 = "world";  // no punctuation in s1 or s2
  string s3 = s1 + ", " + s2 + '\n';

  return 0;
}
