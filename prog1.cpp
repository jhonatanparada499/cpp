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

  void *p1 = &z;
  int *p2 = u4;
  long *lp = &z;
  long *p3 = nullptr;
  double *p4 = NULL;

  std::cout << p2 << std::endl;
  return 0;
}
