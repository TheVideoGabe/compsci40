#include <iostream>
#include <string>
using namespace std;


int main() {
    string input;
  cout << "Enter a string: (e.g. fresno city college) " << endl;
  getline(cin, input);

  for (int i = 0; i < input.length(); i++) {
    if (i == 0 || input[i - 1] == ' ') {
      input[i] = toupper(input[i]);
    }
  }

  cout << "Result: " << input << endl;
  return 0;
}