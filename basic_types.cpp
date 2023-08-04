// Built in data types
//
#include <iostream>

int main(int argc, char *argv[])
{
  // simple variable declarations
  int a, b, c;
  float dud = 7.4f;
  double dutch(1./7.);
  char x='A';
  bool OK  = true;
  bool bad = !OK;
  std::cout << "int: " << a << ' ' << b << ' ' << c << '\n'
    << "float: " << dud << '\n'
    << "double: " << dutch << '\n'
    << "bool: " << OK << ' ' << bad << std::endl;
  return 0;
}
