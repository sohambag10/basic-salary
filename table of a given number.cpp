// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int number, tableSize;

    cout << "Enter the number: ";
    cin >> number;

    cout << "Enter the size of the table: ";
    cin >> tableSize;

    cout << "Multiplication Table of " << number << ":" << endl;
    for (int i = 1; i <= tableSize; ++i) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }

    return 0;
}
