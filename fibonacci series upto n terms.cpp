#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << " terms:" << endl;

    for (int i = 0; i < n; ++i) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
