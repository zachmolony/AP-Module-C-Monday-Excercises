#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
using namespace std; // 'std::' is now implied

int main() {
  char measure;
  const float METRE_MULTIPLIER = 3.281;
	float width, length, feetArea, metreArea;

  cout << "Press ‘F’ to input as feet.\nPress ‘M’ to input in metres.\n" << "Your choice: ";
  cin >> measure; // assumes input will be valid
  
  cout << "What is the length of the room? ";
  while (!(cin >> length)) { // if the cin parse fails then the inputted type was incorrect
    cout << "Please enter a valid number for the length: ";
    cin.clear(); // clear the previous input
    cin.ignore(123, '\n'); // discard the previous input
  }

  cout << "What is the width of the room? ";
  while (!(cin >> width)) { // if the cin parse fails then the inputted type was incorrect
    cout << "Please enter a valid number for the width: ";
    cin.clear(); // clear the previous input
    cin.ignore(123, '\n'); // discard the previous input
  }

  if (measure == 'F' || measure == 'f') { 
    feetArea = width * length;
    metreArea = (width / METRE_MULTIPLIER) * (length / METRE_MULTIPLIER);

    cout << "Your room's dimension is " << width << " by " << length << " feet, the area is:\n\n" << feetArea << " square foot\n" << metreArea << " square metres" << endl;
  }

  if (measure == 'M' || measure == 'm') { 
    feetArea = width * length;
    metreArea = (width * METRE_MULTIPLIER) * (length * METRE_MULTIPLIER);

    cout << "Your room's dimension is " << width << " by " << length << " metres, the area is:\n\n" << feetArea << " square foot\n" << metreArea << " square metres" << endl;
  }

  return 0;
}