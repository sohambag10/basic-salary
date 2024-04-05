#include <iostream>

using namespace std;

int main() {
    int input;
    cout << "Enter an integer: ";
    cin >> input;
    int shifted = input << 2;
    cout << "Input data shifted left by two bits: " << shifted << endl;
    
    return 0;
}
