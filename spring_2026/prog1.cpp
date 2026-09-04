// #include "Sales_data.h"

#include <cctype>

#include <cstddef>
#include <cstring>

#include <iostream>
#include <ostream>
#include <stdexcept>
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

size_t count_calls() {
  static size_t ctr;
  return ++ctr;
}

// value will persist across calls
int main() {
  int i = 42;
  int *p = &i;
  const int *cp = p;

  char args[] = "hello";

  return 0;
}
