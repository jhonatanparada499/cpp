// #include "Sales_data.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
  string word;
  while (cin >> word) // read until end-of-file
    // write each word followed by a new line
    cout << "You typed: " << word << endl;
  return 0;
}
