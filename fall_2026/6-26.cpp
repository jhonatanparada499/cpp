#include <iostream>
using namespace std;

void increment(int& num){
  num++;
}

void swapNum(int& num1, int& num2){
  int temp = num1;
  num2 = num1;
  num1 = temp;
}

int main(){
  int x = 5;
  cout << "Before: " << x << endl;

  increment(x);

  cout << "After: " << x << endl;

  return 0;
}
