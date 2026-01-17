// #include "Sales_data.h"

#include <cctype>

#include <cstring>

#include <iostream>
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
  int ia[3][4];

  size_t cnt = 0;
  for (auto &row : ia)
    for (auto &col : row) {
      col = cnt;
      ++cnt;
    }

  return 0;
}
