
// Prigram 9. --> Write a program to print sum of digits of a Input Number.

// { NOTE --> if n = 1234 then n/10 = 123 & n%10 = 4. }

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter The Number : ";
    cin >> n;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    cout << "Sum of the Digits = " << sum;
}