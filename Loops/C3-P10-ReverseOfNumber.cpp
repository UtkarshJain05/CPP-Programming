
// Program 10. --> Print the Reverse of an Input Number.

#include <iostream>
using namespace std;
int main()
{
    int n, Reverse = 0;
    cout << "Enter The Number : ";
    cin >> n;
    while (n > 0 || n < 0)
    {
        int ld = n % 10;
        Reverse = Reverse * 10 + ld;
        n = n / 10;
    }
    cout << "Reverse Of the Number = " << Reverse;
}