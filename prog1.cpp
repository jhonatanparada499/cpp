// #include "Sales_data.h"

#include <cctype>

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
  int a[] = {1, 2, 3};

  int *pbeg = begin(a);
  int *pend = end(a);

  int *np = pbeg + 10;

  cout << *np << endl;

  while (pbeg != pend && *pbeg >= 0) {
    cout << *pbeg << endl;
    ++pbeg;
  }

  // decltype(a) b = {};

  return 0;
}
