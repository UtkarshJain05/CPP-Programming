
// Program 4. --> WAP to find Maximum & Minimum Element with Their Index in an Array of n x m.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter n & m : ";
    cin >> n >> m;
    int arr[n][m];
    int max = INT_MIN;
    int min = INT_MAX;
    int idxmaxi, idxmaxj, idxmini, idxminj;
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
        for (int j = 0; j < m; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                idxmaxi = i;
                idxmaxj = j;
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
                idxmini = i;
                idxminj = j;
            }
        }
    }
    cout << max << " is Maximum Element @ index = (" << idxmaxi << "," << idxmaxj << ")\n";
    cout << min << " is Minimum Element @ index = (" << idxmini << "," << idxminj << ")\n";
}