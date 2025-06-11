
// // Program 4. --> Second Maximum Element in Array.

// (i) Optimised Approach.
#include <iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[12] = {5, 5, 1, 6, 2, 4, 5, 4, 5, 3, 3, 3};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 1; i <= 12; i++)
    {
        if (max < arr[i - 1])
        {
            smax = max;
            max = arr[i - 1];
        }
        else if (smax < arr[i - 1] && max != arr[i - 1])
        {
            smax = arr[i - 1];
        }
    }
    cout << max << endl;
    cout << smax << endl;
}


// // (ii) Basic Approach.
// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main()
// {
//     int arr[10] = {5, 2, 3, 4, 5, 5, 4, 3, 2, 1};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for (int i = 1; i <= 10; i++)
//     {
//         if (max < arr[i - 1])
//             max = arr[i - 1];
//     }
//     for (int i = 1; i <= 10; i++)
//     {
//         if (smax < arr[i - 1] && max != arr[i - 1])
//             smax = arr[i - 1];
//     }
//     cout << max << endl;
//     cout << smax;
// }
