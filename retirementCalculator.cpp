#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
#include <time.h> // tell the compiler to add refs for time functions

using namespace std; // 'std::' is now implied

int main() {
  const int MS_IN_YEAR = 31556926; // ms in a year
  
  time_t currentTime = time(NULL); // get ms since 1970
  int currentYear = (currentTime / MS_IN_YEAR) + 1970; // calculate current year 

  int currentAge, retirementAge;

  // INPUT
  cout << "Please enter your current age: ";
  cin >> currentAge;
  cout << "What age would you like to retire: ";
  cin >> retirementAge;

  // CALCULATION
  int remainingYears = retirementAge - currentAge;
  int retirementYear = currentYear + remainingYears;

  // OUTPUT
  if (retirementYear <= currentYear) {
    cout << "The current year is " << currentYear << ". You can retire now." << endl;
  } else {
    cout << "The current year is " << currentYear << ". You can retire in " << retirementYear << "; you have " << remainingYears << " remaining.";
  }

  return 0;
}