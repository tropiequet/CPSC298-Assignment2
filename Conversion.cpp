#include <iostream>

using namespace std;

void userInput(double &feet, double &inches){
  cout << "Enter feet: " << endl;
  cin >> feet;
  cout << "Enter inches: " << endl;
  cin >> inches;
}

double calcMeters(double feet, double inches){
  double meters = (feet * 0.3048) + (inches * (0.3048 / 12));

  return meters;

}

double calcCentimeters(double meters){
  double centimeters = meters * 100;

  return centimeters;
}

void output(){
  double feet;
  double inches;

  userInput(feet, inches);

  cout << "Meters: " << calcMeters(feet, inches) << endl;

  cout << "Centimeters: " << calcCentimeters(calcMeters(feet, inches)) << endl;

}



int main(int argc, char const *argv[]) {

  string choice;

  while(choice != "exit"){
    output();
    cout << "Please type 'exit' if you want to exit, otherwise type anything" << endl;
    cin >> choice;

  }





  return 0;
}
