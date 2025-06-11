
// Program 7. --> Rotating Array With 'K' Steps.

#include <iostream>
using namespace std;
void Reverse(int arr[], int si, int ei) // Reversing Part Of Array.
{
    for (int i = si, j = ei; i < j; i++, j--)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }
    return;
}

int main()
{
    int n, k;
    cout << "No. of Elements & Steps to Rotate : ";
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    k = k % n;              // Step 1.
    Reverse(arr, 0, n - 1); // Step 2.
    Reverse(arr, 0, k - 1); // Step 3.
    Reverse(arr, k, n - 1); // Step 4.

    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}