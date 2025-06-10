
/* Program 6. --> Write A Function which calculates 'a' raised to power 'b'
                  using Logarithmic Recursion. */

#include <iostream>
using namespace std;
int Powerlog(int a, int b)
{
    if (b == 0)
        return 1;

    int x = Powerlog(a, b / 2); 

    if (b % 2 == 0)
        return x * x;

    else
        return x * x * a;
}

int main()
{
    int a, b;
    cout << "Enter base and Power : ";
    cin >> a >> b;
    cout << Powerlog(a, b);
}