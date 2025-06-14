// Program 6. --> Push 0's to END of Array Maintaining the same order of the Array.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0}, brr[9];
    int n = 9;
    // // Approch 1. --> Using Extra Array.
    // int idx = 0, ridx = n - 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         brr[idx] = arr[i];
    //         idx++;
    //     }
    //     else
    //     {
    //         brr[ridx] = arr[i];
    //         ridx--;
    //     }
    // }

    // Approch 2. --> No Extra Array (Bubble Sort).
    int pass = 1;
    while (pass < n)
    {
        bool flag = true;
        for (int i = 0; i < n - pass; i++)
        {
            if (arr[i + 1] != 0 && arr[i] == 0)
            {
                flag = false;
                swap(arr[i + 1], arr[i]);
            }
        }
        if (flag == true)
        {
            break;
        }
        pass++;
    }

    // Array Output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}