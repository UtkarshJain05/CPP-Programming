
/* program 8. --> Take 3 Positive Integers input and print the greatest of them
                    without using multiple conditions.  */
// By Nested If-Else.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the First Number : ";
    cin >> a;
    cout << "Enter the Second Number : ";
    cin >> b;
    cout << "Enter the Third Number : ";
    cin >> c;

    if (a > b)
    { // here 'b' can never be the Greatest Number.
        if (a > c)
        {
            cout << a << " is the Greatest Number.";
        }
        else
        {
            cout << c << " is the Greatest Number.";
        }
    }
    else
    { // here 'a' can never be the Greatest Number.
        if (b > c)
        {
            cout << b << " is the Greatest Number.";
        }
        else
        {
            cout << c << " is the Greatest Number.";
        }
    }
}