#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the sum of prime factors of a number
int sumOfPrimeFactors(int n) {
    int sum = 0;

    // Check for number of 2s in n and add them to the sum
    while (n % 2 == 0) {
        sum += 2;
        n /= 2;
    }

    // n must be odd at this point, so skip even numbers and check for odd factors
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            sum += i;
            n /= i;
        }
    }

    // This condition is to check if n is a prime number greater than 2
    if (n > 2) {
        sum += n;
    }

    return sum;
}

int main() {
    int num;

    // Input the number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Calculate the sum of prime factors
    int result = sumOfPrimeFactors(num);

    // Output the result
    cout << "Sum of prime factors of " << num << " is: " << result << endl;

    return 0;
}
