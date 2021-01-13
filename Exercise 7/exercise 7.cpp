#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/

using namespace std; // 'std::' is now implied

int main() {
  int input, positiveCount = 0, negativeCount = 0, zeroCount = 0;
  char nonIntInput;
  bool qFlag = false;

  cout << "Please enter a valid numeric, or “Q” to finish:\n";

  while(1) {
    while(!(cin >> input)) { // runs when the input doesnt match the data type
      cin.clear(); // clear error flag on cin
      cin >> nonIntInput; // if it's not an int, let's see if its a Q
      if (nonIntInput == 'Q' || nonIntInput == 'q') { //check if the user is trying to quit, assuming input is correct
          qFlag = true;  //sets a flag so we break the outer while loop
          break; //breaks the inner while loop so we don't show an error for entering a character instead of a number
      }
      cout << "Invalid value, please try again:\n";
      cin.clear();
      cin.ignore(256, '\n'); //clear the previous input
      cin >> input;
    }
    if (qFlag) { break; } // break as a q has been entered
    
    // counters
    if (input > 0) {
      positiveCount++;
    } else if (input > 0) {
      negativeCount++;
    } else {
      zeroCount++;
    }
  }

  int totalCount = positiveCount + negativeCount + zeroCount;
  cout << "\nTotal values:   " <<  totalCount << "\nZeros:\t\t\t" <<  zeroCount << "\nPositives:\t\t" <<  positiveCount << "\nNegatives:\t\t" <<  negativeCount << endl;

  return 0;
}
