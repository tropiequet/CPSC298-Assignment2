#include <iostream>

using namespace std;

void ZeroBoth(int &x, int &y){
  x = 0;
  y = 0;

  cout << "Num1: " << x << endl;
  cout << "Num2: " << y << endl;

}


int main(int argc, char const *argv[]) {

  int num1;
  int num2;

  ZeroBoth(num1, num2);

  return 0;
}
