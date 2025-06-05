
//Ques 2. --> Calculate Simple Interest. 

// Hint : Simple Interest (S) = (P*R*T) / 100.

#include<iostream>
using namespace std;
int main()
{
    float P,R,T;
    cout<<"Enter The Principle Amount: ";
    cin>>P;

    cout<<"Enter The Rate of Interest: ";
    cin>>R;

    cout<<"Enter The Time Interval for getting Interest: ";
    cin>>T;

    float S = (P*R*T)/100;
    cout<<"The Simple Interest is "<<S;
    
return 0;
}