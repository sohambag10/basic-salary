
#include <bits/stdc++.h>
using namespace std;
int main(){
   int total=500;
   int subject1,subject2,subject3,subject4,subject5;
   cout<<"enter the value of subject1:";
   cin>>subject1;
   cout<<"enter the value of subject2:";
   cin>>subject2;
   cout<<"enter the value of subject3:";
   cin>>subject3;
   cout<<"enter the value of subject4:";
   cin>>subject4;
   cout<<"enter the value of subject5:";
   cin>>subject5;
   int sum=subject1+subject2+subject3+subject4+subject5;
   cout<<"sum of all subjects: "<<sum<<endl;
   float percentage= (static_cast<float>(sum)*100)/total;
   cout<<"the percentage obtained is: "<<percentage<<endl;
    return 0;

}

