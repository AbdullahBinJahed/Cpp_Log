#include <cctype>

int main()
{
  char c = 'a';
  
  isalnum(c)   // true if c is a letter or a digit
  isalpha(c)   // true is c is a letter
  iscntrl(c)   // true if c is a control character
  isdigit(c)   // true if c is a digit
  isgraph(c)   // true if c is not space but is printable
  islower(c)   // true if c is a lowercase letter
  isupper(c)   // true if c is a uppercase letter
  isprint(c)   // true if c is a printable character (i.e., a space or a character that has a visible representation) 
  ispunct(c)   // true if c is a punctuation character (i.e., a character that is not a control character, a digit, a letter, or a printable whitespace)
  isspace(c)   // true is c is a whitespace (i.e., a space, tab, vertical tab, return, newline, or formfeed)
  isxdigit(c)  // true if c is a hexadecimal digit
  tolower(c)   // if c is an uppercase letter, return it's lowercase equivalent; otherwise returns c unchanged
  toupper(c)   // if c is an lowercase letter, return it's uppercase equivalent; otherwise returns c unchanged

  return 0;
}
