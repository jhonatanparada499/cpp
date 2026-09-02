// pass by val
//
#include <iostream>
using namespace std;

void increment(int num){
  num++;
}

int main(){
  int x = 5;
  cout << "Before: " << x << endl;

  increment(x);

  cout << "After: " << x << endl;

  return 0;
}
