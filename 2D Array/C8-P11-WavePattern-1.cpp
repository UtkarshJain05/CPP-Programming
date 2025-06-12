
// Program 11. --> Wave Pattern - 1.

/* 1 2 3
   4 5 6
   7 8 9

   1 2 3
   6 5 4
   7 8 9
   */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                {
                    cout << arr[i][j] << " ";
                }
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}