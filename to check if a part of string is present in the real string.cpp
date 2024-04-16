#include <iostream>
#include <string>

using namespace std;

bool findPattern(const string& text, const string& pattern) {
  return text.find(pattern) != string::npos;
}

int main() {
  string text = "I am studying in college";
  string pattern = "col";

  if (findPattern(text, pattern)) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }

  return 0;
}
