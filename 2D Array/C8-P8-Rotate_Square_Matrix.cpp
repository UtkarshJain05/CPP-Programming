
// Program 8. --> Rotate The Square Matrix by 90 Degree.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n][n];

    // Input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "arr(" << i << "," << j << ") = ";
            cin >> arr[i][j];
        }
    }
    cout << endl;

    // Output-1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                arr[i][j] = arr[i][j] + arr[j][i];
                arr[j][i] = arr[i][j] - arr[j][i];
                arr[i][j] = arr[i][j] - arr[j][i];
            }
        }
    }

    // Reverse
    for (int i = 0; i < n; i++)
    {
        for (int j = 0, k = n - 1; j < k; j++, k--)
        {
            arr[i][j] = arr[i][j] + arr[i][k];
            arr[i][k] = arr[i][j] - arr[i][k];
            arr[i][j] = arr[i][j] - arr[i][k];
        }
    }
    cout << endl;

    // Output-2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}