
// Program 13. --> Spiral Matrix.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    
    // Input Matrix.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    int minr = 0, maxc = m - 1, maxr = n - 1, minc = 0;
    int tne = m * n, count = 0;
    while (count < tne)
    {
        // print the minr
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;
        // print the maxc
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            cout << arr[i][maxc] << " ";
            count++;
        }
        maxc--;
        // Print The maxr
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            cout << arr[maxr][j] << " ";
            count++;
        }
        maxr--;
        // print the minc
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            cout << arr[i][minc] << " ";
            count++;
        }
        minc++;
    }
}