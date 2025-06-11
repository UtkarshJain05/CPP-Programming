
// Program 2. --> Multiple Input & Output values of Arrays.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter The Element Number " << i << " : ";
        cin >> arr[i - 1];
    }

    cout << "Reversed Array = ";
    int a = n-1;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[a] << " ";
        a--;
    }
}