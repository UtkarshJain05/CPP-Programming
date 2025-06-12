
#include <bits/stdc++.h>
using namespace std;
int main()
{

// // Ques 1. --> Take input as No. of Students, their Roll no. & their marks obtained in P, C, M.

//     int n;
//     cin >> n;
//     int arr[n][4];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter Roll no. " << i+1 << " : ";
//         for (int j = 0; j < 4; j++)
//         {
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }
// }

// // Ques 2. --> Store 10 @ every index of arr[5][5].

//     int arr[5][5];
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             arr[i][j] = 10;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// // Ques 3. --> WAP to add 2 matrices.

//     int arr[2][2] = {1, 2, 3, 4};
//     int brr[2][2] = {5, 6, 7, 8};
//     int res[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             res[i][j] = arr[i][j] + brr[i][j];
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout << res[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// /* Ques 4. --> A matrix 'A' of n x m & 2 Coordinates (l1,r1) , (l2,r2).
//                Return the Sum of Rectangle from (l1,r1) to (l2,r2). */

//     int n, m, l1, l2, r1, r2, sum = 0;
//     cout << "Enter n & m : ";
//     cin >> n >> m;
//     int arr[n][m];
//     cout << "Enter l1 & r1 : ";
//     cin >> l1 >> r1;
//     cout << "Enter l1 & r2 : ";
//     cin >> l2 >> r2;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << "Enter arr(" << i << "," << j << ") = ";
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = l1; i <= l2; i++)
//     {
//         for (int j = r1; j <= r2; j++)
//         {
//             sum = sum + arr[i][j];
//         }
//     }
//     cout << endl
//          << sum;
// }

// // Ques 5. --> Given A Matrix having 0-1 only, find Row of Max Numbers of 1's.

//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     int idx;
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << "Enter arr(" << i << "," << j << ") = ";
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int Count = 0;
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == 1)
//             {
//                 Count++;
//             }
//         }
//         if (max < Count)
//         {
//             max = Count;
//             idx = i;
//         }
//     }
//     cout << "Row having the Maximum No. of 1's = " << idx;
// }

// // Ques  6. --> Print Transpose of a Matrix.

//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << "Enter arr(" << i << "," << j << ") = ";
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
// }

// // Ques 7. --> Print a Matrix of Order nxn with Elements 1 to n in Spiral Order.
//         /*
//             if n = 3 then :
//             1 2 3
//             8 9 4    ---> Ans. 
//             7 6 5             */

//     int n;
//     cin >> n;
//     int arr[n][n];
//     int minr = 0, minc = 0, maxr = n - 1, maxc = n - 1;
//     int count = 1, Tne = n*n;
//     while (count <= Tne)
//     {
//         // min row
//         for (int j = minc; j <= maxc; j++)
//         {
//             arr[minr][j] = count;
//             count++;
//         }
//         minr++;
//         // max column
//         for (int i = minr; i <= maxr; i++)
//         {
//             arr[i][maxc] = count;
//             count++;
//         }
//         maxc--;
//         // max row
//         for (int j = maxc; j >= minc; j--)
//         {
//             arr[maxr][j] = count;
//             count++;
//         }
//         maxr--;
//         // min column
//         for (int i = maxr; i >= minr; i--)
//         {
//             arr[i][minc] = count;
//             count++;
//         }
//         minc++;
//     }
//
//     // Printing The Final Matrix
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
}