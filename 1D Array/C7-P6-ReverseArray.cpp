
// Program 6. --> Reverse Array Without Using Extra Array.

#include <iostream>
using namespace std;
int n;
void Reverse(int arr[])
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }
    return;
}
int main()
{
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    Reverse(arr);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
