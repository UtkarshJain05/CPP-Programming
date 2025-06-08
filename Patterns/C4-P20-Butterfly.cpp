// Program 20. --> Butterfly.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nst = 1, nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= nst; j++)
        {
            cout << "*";
        }
        if (i < n / 2 + 1)
            nsp -= 2, nst++;
        else
            nsp += 2, nst--;
        cout << endl;
    }
}