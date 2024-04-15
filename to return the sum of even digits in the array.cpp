#include <iostream>

using namespace std;

int sumOfEvenSquares(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    int digit = arr[i];
    // Extract digits one by one using modulo and division
    while (digit > 0) {
      int lastDigit = digit % 10;
      // Check if even and add square to sum
      if (lastDigit % 2 == 0) {
        sum += lastDigit * lastDigit;
      }
      digit /= 10; // Move to the next digit
    }
  }
  return sum;
}

int main() {
  int arr[] = {1234, 5678, 901};
  int size = sizeof(arr) / sizeof(arr[0]);

  int sum = sumOfEvenSquares(arr, size);
  cout << "Sum of squares of even digits: " << sum << endl;

  return 0;
}
