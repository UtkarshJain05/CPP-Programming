
/* Ques 1. --> Given An Array of Digits (From 0 to 9). Find Minimum Possible Sum of
               2 Numbers formed from Digits of the Array.
               Note --> All Digits Must be Used to form the 2 Numbers.
*/

/* Algorithm :  Step 1. --> Sort the Array.
                Step 2. --> Convert Sorted Array into Number 1.
                Step 3. --> Swap Last 2 Distinct Digits of Sorted Array & Convert to Number 2.
                Step 4. --> Sum = N1 + N2.

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // Input Array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int N1 = 0, N2 = 0;

    // Insertion Sort.
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    // Number 1.
    for (int i = 0; i < n; i++)
    {
        N1 = (N1 * 10) + arr[i];
    }

    // Swapping The Different Last Digits.
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            break;
        }
    }

    // Number 2.
    for (int i = 0; i < n; i++)
    {
        N2 = (N2 * 10) + arr[i];
    }

    // Sum
    cout << N1 + N2 << endl;
}