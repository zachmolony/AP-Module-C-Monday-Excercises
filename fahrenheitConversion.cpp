#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
using namespace std; // 'std::' is now implied

int main() {
  char convertTo; 
	int temperature; // define string vars for inputs

  bool flag = true;
  while (flag) { // keep asking for input until the input is not empty
    cout << "Please enter the starting temperature: ";
    cin >> temperature;
    if (!(cin >> num1)) {
    cout << "You did not enter a correct number!" << endl;
    // Leave the program, or do something appropriate:
    return 1;
}
  }

  cout << "Press ‘C’ to convert from Fahrenheit to Centigrade.\nPress ‘F’ to convert from Centigrade to Fahrenheit.\n";
	
	cout << "\n" << author << " says: \"" << quote << "\"\n"; // output final string format

	return 0;
}