#include "Sales_data.h"
#include <iostream>

using std::cin;
using std::cout;

int main() {
  Sales_data data1, data2;

  cout << "Enter book ISBN: ";
  cin >> data1.bookNo;
  cout << "Enter units sold: ";
  cin >> data1.unitsSold;

  double price = 0;
  cout << "Enter price: ";
  cin >> price;

  data1.revenue = data1.unitsSold * price;

  return 0;
}
