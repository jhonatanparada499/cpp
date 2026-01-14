// #include "Sales_data.h"

#include <cctype>
#include <iostream>
// using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main() {
  string my_string("Hello World");

  vector<string> text = {"Hello", "World", "", "Another paragraph"};
  for (auto i = text.cbegin(); i != text.cend() && !i->empty(); ++i) {
    //*i = toupper(*i);
    cout << *i << endl;
  }

  return 0;
}
