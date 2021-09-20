#include <cctype>

int main()
{
  char c = 'a';
  bool x;
  x = isalnum(c);   // true if c is a letter or a digit
  x = isalpha(c);   // true is c is a letter
  x = iscntrl(c);   // true if c is a control character
  x = isdigit(c);   // true if c is a digit
  x = isgraph(c);   // true if c is not space but is printable
  x = islower(c);   // true if c is a lowercase letter
  x = isupper(c);   // true if c is a uppercase letter
  x = isprint(c);   // true if c is a printable character (i.e., a space or a character that has a visible representation) 
  x = ispunct(c);   // true if c is a punctuation character (i.e., a character that is not a control character, a digit, a letter, or a printable whitespace)
  x = isspace(c);   // true is c is a whitespace (i.e., a space, tab, vertical tab, return, newline, or formfeed)
  x = isxdigit(c);  // true if c is a hexadecimal digit
  x = tolower(c);   // if c is an uppercase letter, return it's lowercase equivalent; otherwise returns c unchanged
  x = toupper(c);   // if c is an lowercase letter, return it's uppercase equivalent; otherwise returns c unchanged

  return 0;
}
