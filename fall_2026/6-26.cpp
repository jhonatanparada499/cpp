#include <iostream>
using namespace std;

void printArr(int const num[], int size){
  for(int i=0; i < size; ++i){
    cout << num[i] << endl;
  }
}

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

  int num[3] = {1,2,3};
  cout << num[1] << endl;

  return 0;
}
