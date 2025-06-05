
// Program 1. --> Take two Positive Integers & Tell if it is divisible by 5 or not.

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter Two Numbers : ";
    cin >> n >> m;
    if (n % 5 == 0)
        cout << n << " is Divisible by 5.\n";
    else
        cout << n << " is NOT Divisible by 5.\n";
    if (m % 5 == 0)
        cout << m << " is Divisible by 5.\n";
    else
        cout << m << " is NOT Divisible by 5.\n";
}
