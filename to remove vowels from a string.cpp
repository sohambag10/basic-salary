#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isVowel(char ch) {
  return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
          ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

string removeVowels(const string& str) {
  string result;
  bool allVowels = true;

  for (char ch : str) {
    if (!isVowel(ch)) {
      result += ch;
      allVowels = false;
    }
  }

  return allVowels ? str : result;
}

int main() {
  string input;

  cout << "Enter a string: ";
  getline(cin, input);

  string output = removeVowels(input);

  cout << "Output: " << output << endl;

  return 0;
}
