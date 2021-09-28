#include <vector>
#include <string>
using std::vector;
using std::string;

int main()
{
  vector<string> svec;            // default initialization; svec has no elements
  vector<int> ivec;               // initially empty
  vector<int> ivec2(ivec);        // copy elements of ivec into ivec2
  vector<int> ivec3 = ivec;       // copy elements of ivec into ivec3
  // vector<string> svec(ivec2);  // error: svec holds strings, not ints

  // List Initializing a vector //
  vector<string> articles = {"a", "an", "the"};

  // Creating a Specified number of elements //
  vector<int> ivecs(10, -1);           // ten int elements, each initialized to -1
  vector<string> svecs(10, "Adachi");  // ten strings; each element is "Adachi"

  // Value Initialization //
  vector<int> iveci(10);  // ten elements, each initialized to 0
  vector<string> sveci(10);  // ten elements, each an empty string

  // List Initializer or Element Count? //
  vector<int> v1(10);               // v1 has ten elements with value 0
  vector<int> v2{10};               // v2 has one element with value 10
  vector<int> v3(10, 1);            // v3 has ten elements with value 1
  vector<int> v4{10, 1};            // v4 has two elements with values 10 and 1
  vector<string> v5{"Adachi"};      // list initialization: v5 has one element
  // vector<string> v6("Adachi");   // error: can't construct a vector from a string literal
  vector<string> v7{10};            // v7 has ten default-initialized elements
  vector<string> v8{10, "Adachi"};  // v8 has ten elements with value "Adachi"

  return 0;
}
