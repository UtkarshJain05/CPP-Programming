
// Program 2. --> Multiple Input And Output Of 2D Array.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter No. of Rows And Column of Array : ";
    cin >> n >> m;
    int arr[n][m];              // Total Elements = n x m.
    for (int i = 0; i < n; i++) // Input Of Value In Array.
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter arr(" << i << ", " << j << ") : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++) // Output Of Array.
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}