
// Program 8. --> Write a program to count the digits of a Input Number.

#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter The Number : ";
    cin >> n;
    int original = n;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    cout << "Total No. of Digits in " << original << " = " << count;
}