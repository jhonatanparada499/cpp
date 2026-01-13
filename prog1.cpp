// #include "Sales_data.h"

// #include <cctype>

#include <iostream>
using std::cin;
using std::cout;
//  using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main() {
  vector<unsigned> scores(11, 0);

  unsigned grade;
  while (cin >> grade) {
    if (grade <= 100) {
      scores[grade / 10]++;
    }
  }

  for (unsigned grade : scores) {
    cout << grade << " ";
  }

  return 0;
}
