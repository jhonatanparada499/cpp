// #include "Sales_item.h"
#include <iostream>
#include <string>
// #include <iterator>

std::string b;
extern int external;

int main() {
  // std::string i;
  unsigned u1 = -1, u2 = -10;
  signed u3 = 1;
  int u4 = 2.0;

  int i, &ri = i;
  i = 5;
  ri = 10;
  std::cout << &i << " " << ri << std::endl;
  return 0;
}
