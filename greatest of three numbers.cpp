// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n1;
    cout<<"enter the number:";
    cin>>n1;
    int n2;
    cout<<"enter the number:";
    cin>>n2;
    int n3;
    cout<<"enter the number:";
    cin>>n3;
    if(n1>=n2&&n1>=n3){
        cout<<"the greatest number is: "<<n1;
    }
    else if(n2>=n1&&n2>=n3){
           cout<<"the greatest number is: "<<n2;
        
    }
    else{
        cout<<"the greatest number is: "<<n3;
    }
   

    return 0;
}
