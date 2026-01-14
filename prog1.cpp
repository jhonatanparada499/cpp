// #include "Sales_data.h"

#include <cctype>
#include <iostream>
// using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

// #include <vector>
// using std::vector;

int main() {
  const string my_string("Hello World");
  for (auto i = my_string.begin(); i != my_string.end() && !isspace(*i); ++i) {
    //*i = toupper(*i);
    cout << *i << endl;
  }

  return 0;
}
