#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
#include <cmath> // allow us to use fmod to modulus floats and doubles
using namespace std; // 'std::' is now implied

int main() {
  float number;

  // INPUT
  cout << "Please enter a value: ";
  cin >> number;

  // CALCULATION
  bool isEven = fmod(number, 2) == 0; // calculate float modulus of our number - if there is no remainder then the number is divisible by two and therefore even

  // OUTPUT
  if (isEven) {
    cout << number << " is an even number" << endl;
  } else {
    cout << number << " is an odd number" << endl;
  }

  return 0;
}