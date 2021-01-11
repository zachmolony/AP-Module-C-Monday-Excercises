#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
using namespace std; // 'std::' is now implied

bool hasInvalidCharacters(string input) { // function which checks if a given string is alphabetical, returning a corresponding boolean
  for(char c : input) { // iterate through the input string, char by char
    if (!isalpha(c)) { // for each char check it's alphabetical
      return true; // if an invalid char is detected, return true
    }
  }
  return false; // if all chars are checked and nothing is detected, return false
}

int main() {
	string quote, author; // define string vars for inputs

  while (quote.empty()) { // keep asking for input until the input is not empty
    cout << "What is the quote? ";
    getline(cin, quote); // get whole line of input
  }

  while (author.empty() || hasInvalidCharacters(author)) { // keep asking for input until the input is empty or hasInvalidCharacters
    cout << "Who said it? ";
	  getline(cin, author);
  }
	
	cout << "\n" << author << " says: \"" << quote << "\"\n"; // output final string format

	return 0;
}