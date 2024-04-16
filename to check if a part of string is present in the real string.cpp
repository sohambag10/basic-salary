#include <iostream>
#include <string>

using namespace std;

bool doesPatternExist(const string& s, const string& pattern) {
    return s.find(pattern) != string::npos;
}

int main() {
    string s = "I am studying in college";
    string pattern = "soham";

    cout << boolalpha << doesPatternExist(s, pattern) << endl;

    return 0;
}
