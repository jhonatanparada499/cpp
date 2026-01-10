// #include "Sales_item.h"
#include <iostream>
#include <string>

std::string b;
extern int external;

int z = 0;
signed &u3 = z;
int *u4 = &u3;
unsigned u1 = -1, u2 = -10;
constexpr int *p2 = &z;
const int &ri = 0;

int main() {
  std::cout << external << std::endl;
  return 0;
}

struct Sales_data {
  std::string bookNo;
  unsigned unitsSold = 0;
  double revenue;
};
