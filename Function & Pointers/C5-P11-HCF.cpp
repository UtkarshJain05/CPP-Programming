
// Program 11. --> Write a Function to find HCF of 2 Input Numbers.

#include <iostream>
using namespace std;
int HCF(int a, int b)
{
    int hcf;
    // for (int i = 1; i <= min(a, b); i++)
    // {
    //     if (a % i == 0 && b % i == 0)
    //         hcf = i; // for Highest Factor Value.
    // }
    for (int i = min(a, b); i >= 1; i--) // Another Way to not run loop more time.
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main()
{
    int a, b;
    cout << "Enter a & b = ";
    cin >> a >> b;
    cout << "HCF(" << a << "," << b << ") = " << HCF(a, b);
}

// Here min is pre-defined function in iostream.
// if a<b then HCF(a,b) is always <= a.