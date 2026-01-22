// #include "Sales_data.h"

#include <cctype>

#include <cstddef>
#include <cstring>

#include <iostream>
#include <ostream>
using std::cin;
using std::cout;
using std::endl;

#include <iterator>
using std::begin;
using std::end;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main() {
  vector<int> integers(10);
  vector<int>::size_type count = integers.size();

  for (vector<int>::size_type i = 0; i != integers.size(); ++i, --count) {
    integers[i] = count;
  }

  for (int integer : integers) {
    cout << integer << endl;
  }

  return 0;
}
