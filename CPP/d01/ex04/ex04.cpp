#include <iostream>

int main(void)
{
  std::string str = ("HI, THIS IS BRAIN");
  const char *pointer = str.c_str();
  std::string const *ref = &str;

  std::cout << str << '\n';
  std::cout << pointer << '\n';
  std::cout << *ref << '\n';
  return 0;
}
