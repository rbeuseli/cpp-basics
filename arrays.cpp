// arrays, c-style strings, CLI arguments, C++ strings
//
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  // 1. arrays: any type, numerically labelled starting from 0.
  //
  int dumb[10];
  for (int i=0; i<10; i++)
  {
    cout << i << ": " << dumb[i] << endl;
  }

  // 2. c-style strings are just an array of char.
  //    The end of the string is indicated by a null byte ('\0').
  char text[] = "The quick brown fox.";
  cout << text << endl;
  cout << "sizeof(text) " << sizeof(text) << endl;

  // 3. command line arguments are passed in as an array of
  //    c-style strings.
  cout << "\nCommand line arguments: " << argc << "\n";
  for (int i=0; i<argc; i++)
  {
    cout << i << ": " << argv[i] << endl;
  }

  // 4. C++ strings can be initialised from c-style strings.
  //    They are fully fledged objects with many useful methods.
  //    Try copying the command line arguments into a C++ string,
  //    as defined in the <string> header file (not to be confused with the
  //    <cstring> header which is merely a C++ wrapper around the terrible 
  //    C <string.h> header file with its ghastly functions!).
  //    Hint: you can add strings together.
  return 0;
}
