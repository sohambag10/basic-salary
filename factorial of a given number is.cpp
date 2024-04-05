#include <iostream>

using namespace std;

int main() {
    int n,fact=1;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    cout<<"factorial of number is:"<<fact;
    return 0;
}
