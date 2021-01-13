#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
using namespace std; // 'std::' is now implied

int main() {
  char character, tryAgain;

  do {
    cout << "Enter a character: ";
    character = getchar();
    cin.ignore(256, '\n');

    if (isalpha(character)) {
      cout << "Alphabetic Character detected";
    } else if (isdigit(character)) {
       cout << "Digit detected";
    } else {
      cout << "Special Character detected";
    }

    cout << "\n\nTry again? (Y/N): ";
    tryAgain = getchar();
    cin.ignore(256, '\n');
  } while (tryAgain == 'Y' || tryAgain == 'y'); // assumes input will be Y/y/N/n but all other chars will quit

  return 1;
}