
/* Program 18. --> Print The Pattern :
                    1234321
                    123 321
                    12   21
                    1     1   */

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int nsp = 1, nst = n - 1;
    int a = n - 1;
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    for (int j = 1; j < n; j++)
    {
        cout << a;
        a--;
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        a = nst;
        for (int j = 1; j <= nst; j++)
        {
            cout << j;
        }

        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp += 2;

        for (int l = 1; l <= nst; l++)
        {
            cout << a;
            a--;
        }
        nst--;
        cout << endl;
    }
}