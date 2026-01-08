// #include "Sales_item.h"
#include <iostream>
#include <string>

std::string b;
extern int external;

int z = 0;
signed &u3 = z;
int *u4 = &u3;

int main() {
  // std::string i;
  unsigned u1 = -1, u2 = -10;

  int y = 3;

  void *p1 = &z;
  constexpr int *p2 = &z;
  long *p3 = nullptr;
  double *p4 = NULL;

  double dval = 3.14;
  const int &ri = dval;

  std::cout << external << std::endl;
  return 0;
}
