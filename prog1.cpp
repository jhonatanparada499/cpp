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
  int a[] = {1, 2, 3};
  char chars1[] = "Hello world";
  char chars2[] = "Hello aorld";

  if (strcmp(chars1, chars2) > 0) {
    cout << "s1 > s2";
  }

  return 0;

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
