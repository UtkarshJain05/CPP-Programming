
// Program 11. --> Print The Sum of the Series : 1 - 2 + 3 - 4 + 5 ......(n)th term.

#include <iostream>
using namespace std;
int main()
{
    int n, Sum = 0;
    cout << "Enter the No. of terms : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            Sum = (-n / 2) + n;
        else
            Sum = -(n / 2);
    }
    cout << "Sum Of the Series = " << Sum;
}

// if n = 6 [Even] --> (1-2) + (3-4) + (5-6) = -1 -1 -1 = -3  -->  i.e -1(n/2) = -n/2.
// if n = 7 [Odd] --> (1-2) + (3-4) + (5-6) + 7 = -1 -1 -1 + 7 = 4  --> i.e -1(n/2) + n = -n/2 + n.