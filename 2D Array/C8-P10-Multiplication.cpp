
// Program 10. --> Multiplication of 2 Matrices.

#include <iostream>
using namespace std;
int main()
{
    int n, m, p, q;
    cout << "Enter First Array Size : ";
    cin >> m >> n;
    cout << "Enter Second Array Size : ";
    cin >> p >> q;
    int a[m][n], b[p][q], res[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << endl;
    if (n == p)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += (a[i][k] * b[k][j]);
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "ERROR : Multiplication is Not Possible.\n\n";
    }
}