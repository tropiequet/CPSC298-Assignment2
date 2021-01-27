#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {

  int i = 0;
  int num;

  int numberArray[10];

  for (int i = 0; i < 10; ++i){
    cout << "Please enter a nonnegative integer:" << endl;
    cin >> num;

    while (num < 0){
      cout << "Error! Please try again:" << endl;
      cin >> num;
    }

    numberArray[i] = num;

  }

  cout << "Printing Number Array:" << endl;

  for (int i = 0; i < 10; ++i){
    cout << numberArray[i] << endl;
  }
  return 0;
}
