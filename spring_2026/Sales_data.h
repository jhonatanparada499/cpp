// Header guard
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include "string"

struct Sales_data {
  std::string bookNo;
  unsigned unitsSold = 0;
  double revenue;
};

#endif // !SALES_DATA_H
