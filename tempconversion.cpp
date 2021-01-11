#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
using namespace std; // 'std::' is now implied

int temperatureConversion() {
  char convertTo; // var definitions
	float convertedTemp, currentTemperature, kelvin; 

  cout << "Please enter the starting temperature: ";
  while (!(cin >> currentTemperature)) { // if the cin parse fails then the inputted type was incorrect
    cout << "Please enter a valid number for the temperature: ";
    cin.clear(); // clear the previous input
    cin.ignore(123, '\n'); // discard the previous input
  }

  cout << "Press ‘C’ to convert from Fahrenheit to Centigrade.\nPress ‘F’ to convert from Centigrade to Fahrenheit.\n" << "Your choice: ";
  cin >> convertTo; // assumes input will be valid as per spec

  if (convertTo == 'F' || convertTo == 'f') { 
    kelvin = currentTemperature + 273.15; // kelvin calculation from base ceclius
    convertedTemp = (1.8 * currentTemperature) + 32.0; // conversion formulae
    cout << currentTemperature << "°C is " << convertedTemp << "°F\n" << "Kelvin: " << kelvin;
  }

  else if (convertTo == 'C' || convertTo == 'c') {
    convertedTemp = (currentTemperature - 32) / 1.8; // conversion formulae
    kelvin = convertedTemp + 273.15; // kelvin calculation from converted celcius
    cout << currentTemperature << "°F is " << convertedTemp << "°C\n" << "Kelvin: " << kelvin;
  }
  else { // if an incorrect input i.e. not f/c/F/C is entered the program will close
    cout << "Please enter one of C/F/c/f" << endl;
  }
  return 0;
}