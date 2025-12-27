#include <iostream>

int main()
{
  int sum = 0;
  int firstNumber = 0;
  int lastNumber = 0;
  int val = 0;

  // std::cout << "Enter first number: ";
  // std::cin >> firstNumber;
  //
  // std::cout << "Enter last number: ";
  // std::cin >> lastNumber;
  //
  // val = lastNumber - firstNumber;

  while (std::cin >> val) {
    sum += val;
  }

  std::cout << "The sum is "
    << sum
    << std::endl;

  return 0;
}
