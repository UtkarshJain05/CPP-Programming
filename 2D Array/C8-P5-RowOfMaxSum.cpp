
// Program 5. --> Find Row having Maximum Sum in a given Matrix.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter n and m : ";
    cin >> n >> m;
    int arr[n][m];
    int idx;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter arr(" << i << "," << j << ") = ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[i][j];
        }
        if (max < sum)
        {
            max = sum;
            idx = i;
        }
    }
    cout << "Row having the Maximum Sum (" << max << ") = " << idx;
}