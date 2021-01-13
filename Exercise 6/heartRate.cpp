#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/

using namespace std; // 'std::' is now implied

int main() {
  int currentAge, restingPulse;
  // INPUT
  cout << "Enter your current age: ";
  cin >> currentAge;
  cout << "Enter your resting pulse: ";
  cin >> restingPulse;

  cout << "Intensity\tRate\n----------------\n";
  float i = 0.4;
  while (i < 0.96) {
    float bpm = (((220 - currentAge) - restingPulse) * i) + restingPulse;
    cout << (i * 100) << "% \t\t" << bpm << " bpm" << endl;
    i+=0.05;
  }

  return 0;
}