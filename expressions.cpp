// expressions and assignments
//
#include <iostream>

using namespace std;

int main()
{
  int a(2), b(-1), c(3);
  int d = a+b*c;
  cout << "a+b*c = " << d << endl;
  int e = (a+b)*c;
  cout << "(a+b)*c = " << e << endl;
  int f = a/c*b;
  cout << "a/c*b = " << f << endl;
  return 0;
}
