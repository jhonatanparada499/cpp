#include <iostream>

int main(){
  int n1, n2;
  std::cout << "Enter two numbers: ";
  std::cin >> n1;
  std::cin >> n2;

  // Multiplies two numbers
  std::cout 
    << n1 << " times " << n2 << " is " << n1 * n2
    << std::endl;

  return 0;
}
