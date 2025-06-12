
// Program 12. --> Wave Pattern - 2 :

/* 1 4 7
   2 5 8
   3 6 9

   3 4 9
   2 5 8
   1 6 7 */

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
        for (int j = 0; j < m; j++)
        {
            if (j % 2 == 0)
            {
                cout << arr[n - 1 - i][j] << " ";
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}
