
// Program 6. --> Take a Positive integer input and tell if it is a Three(3) Digit Number or Not.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Number to be Checked : ";
    cin >> n;
    if (n > 99 && n < 1000)
    {
        cout << n << " is a Three Digit Number.";
    }
    else
    {
        cout << n << " is NOT a Three Digit Number.";
    }

    // Note --> Here 'and' is written as &&.
}