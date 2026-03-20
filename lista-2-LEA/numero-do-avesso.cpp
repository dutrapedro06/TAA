#include <iostream>
using namespace std;

int main (){
    unsigned int num;
    cin >> num;

  unsigned int reversed = 0;
  for (int i = 0; i < 32; i++ ){

      reversed <<=1;
      reversed |= (num & 1);
      num >>= 1;
  }

  cout << reversed << endl;
  return 0;
}