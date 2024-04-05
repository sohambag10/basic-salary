// //write a program to calculate the gross salary of a person gross salary is the sum of basic salary ta and da where ta is 10 perecent of basic and da is 12 percent of basic
#include <iostream>
using namespace std;

// Function to calculate gross salary
float calculateGrossSalary(float basicSalary) {
    float ta = 0.10 * basicSalary;
    float da = 0.12 * basicSalary;
    float grossSalary = basicSalary + ta + da;
    return grossSalary;
}

int main() {
    
    float basicSalary;
    

    cout << "Enter basic salary: ";
    cin >> basicSalary;
    float grossSalary = calculateGrossSalary(basicSalary);
    cout << "Gross Salary: " << grossSalary << endl;
    
    return 0;
}
