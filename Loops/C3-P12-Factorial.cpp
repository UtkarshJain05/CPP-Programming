
// Program12. --> Print the Factorial of a given Number.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Number = ";
    cin>>n;
    int Factorial = 1;
    while(n>0){
        Factorial = Factorial * n;
        n--;
    }
    cout<<"The Factorial of the Number = "<<Factorial;
}
// Factorial of 5 = 5 * 4 * 3 * 2 * 1 = 120.