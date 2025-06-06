
// Program 15. --> WAP to Check whether Input Number is Armstrong or Not.

// [Armstrong Number(n) --> If Sum of cubes of all digits of a Number(n) = The Number(n) itself.]

#include <iostream>
using namespace std;
int main()
{
    int n, Armstrong = 0;
    cout << "Enter The Number : ";
    cin >> n;
    int Original = n;
    while (n > 0)
    {
        int ld = n % 10;
        Armstrong = Armstrong + (ld * ld * ld);
        n = n / 10;
    }
    if (Original == Armstrong)
        cout << Original << " is an Armstrong Number.";
    else
        cout << Original << " is Not an Armstrong Number.";
}