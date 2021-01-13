#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
#include <limits>

using namespace std; // 'std::' is now implied

int main() {
  int input, totalInputs = 0, lowestValue = std::numeric_limits<int>::max(), largestValue = std::numeric_limits<int>::lowest(); // highest and lowest possible values

  char nonIntInput;
  bool flag = false;

  cout << "Please enter a valid numeric, or “Q” to finish:\n";

  while(1) {
    while(!(cin >> input)) { // runs when the input doesnt match the data type
      cin.clear(); // clear error flag on cin
      cin >> nonIntInput; // if it's not an int, let's see if its a Q
      if (nonIntInput == 'Q' || nonIntInput == 'q') { //check if the user is trying to quit, assuming input is correct
          flag = true;  //sets a flag so we break the outer while loop
          break; //breaks the inner while loop so we don't show an error for entering a character instead of a number
      }
      cout << "Invalid value, please try again:\n";
      cin.clear();
      cin.ignore(256, '\n'); //clear the previous input
      cin >> input;
    }
    if (flag) { break; } else { totalInputs++; }
    
    // counters
    if (input < lowestValue) {
      lowestValue = input;
    } 
    if (input > largestValue) {
      largestValue = input;
    }
  }

  cout << "\nTotal values:\t\t" <<  totalInputs << "\nLowest value:\t\t" <<  lowestValue << "\nLargest value:\t\t" <<  largestValue << endl;

  return 0;
}
