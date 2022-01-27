#include <iostream>

int main()
{
  char name[1024] = "";
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << name << "-sama, yoiichinichiwo" << std::endl;

  return 0;
}
