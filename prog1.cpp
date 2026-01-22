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
  int grade = 1;
  string lettergrade;
  if (grade % 10 >= 3)
    if (grade % 10 > 7)
      lettergrade += "+"; // grades ending in 8 or 9 get a +
    //
    else
      lettergrade += "-";
  return 0;
  ;
}
