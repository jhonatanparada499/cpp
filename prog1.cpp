// #include "Sales_data.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
  string line;
  while (getline(cin, line)) // read line until end-of-file
    // write each line followed by a new line
    cout << "You typed: " << line << endl;
  return 0;
}
