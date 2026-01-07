// #include "Sales_item.h"
#include <iostream>
#include <string>

std::string b;
extern int external;

int main() {
  // std::string i;
  unsigned u1 = -1, u2 = -10;
  int z = 0;
  signed &u3 = z;
  int *u4 = &u3;

  int *p1 = 0;
  int *p2 = nullptr;
  int *p3 = NULL;
  p1 = &z;

  std::cout << u4 << std::endl;
  return 0;
}
