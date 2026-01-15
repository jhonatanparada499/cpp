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
  vector<string> text = {"a", "b", "c"};
  auto beg = text.begin();
  auto end = text.end();
  auto mid = beg + (end - beg) / 2;

  string sought = "b";
  while (mid != end && *mid != sought) {
    if (*mid < sought) {
      beg = mid + 1;
    } else {
      end = mid;
    }

    mid = beg + (end - beg) / 2;
  }

  if (*mid == sought) {
    cout << "elemnt found!" << endl;
  }

  return 0;
}
