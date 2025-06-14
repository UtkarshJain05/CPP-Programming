// Program 7. --> Find The Kth Smallest Element (where k <= n).

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 15, k = 5;
    int arr[n] = {9, 8, 70, 68, 52, 44, 31, 2, 1, 0, 11, 12, 13, 14, 15};

    // Selection Sort.
    for (int i = 0; i < k; i++) // k-1 passes.
    {
        int min = INT_MAX, minidx = -1;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minidx = j;
            }
        }
        swap(arr[minidx], arr[i]);
    }
    cout << arr[k - 1]; // kth Smallest Element.
}

/* Note : 1. Kth Element = arr[k-1].
          2. We'll Use Selection Sort form 0 to as it Starts Sorting from min. to max.
*/