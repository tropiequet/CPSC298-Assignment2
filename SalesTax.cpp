#include <iostream>

using namespace std;

float addTax(float taxRate, float cost){
  float value = (cost * taxRate) + cost;

  return value;
}



int main(int argc, char const *argv[]) {

  float tax = 0.09;
  float price = 19.99;

  cout << "Tax Rate: " << tax << endl;
  cout << "Product Price: " << price << endl;

  cout << "Total Cost: " << addTax(tax, price) << endl;



  return 0;
}
