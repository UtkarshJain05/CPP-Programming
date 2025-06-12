
// Program 9. --> Rotate Any Matrix by 90 Degree.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter n & m : ";
    cin >> n >> m;
    int arr[n][m], brr[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Transpose
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }

    // Reverse
    for (int i = 0; i < m; i++)
    {
        for (int j = 0, k = n - 1; j < k; j++, k--)
        {
            brr[i][j] = brr[i][j] + brr[i][k];
            brr[i][k] = brr[i][j] - brr[i][k];
            brr[i][j] = brr[i][j] - brr[i][k];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}