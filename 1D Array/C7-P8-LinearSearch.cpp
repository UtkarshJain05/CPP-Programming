
// Program 8. --> Linear Search An Element in the Array.

#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x;
    cout << "Element to be found : ";
    cin >> x;
    int idx = -1;
    bool flag = false; // False means element not present.
    for (int i = 0; i <= 6; i++)
    {
        if (x == arr[i])
        {
            flag = true;
            idx = i;
            break;
        }
    }
    if (flag == false)
        cout << x << " is not present in the Array.";
    else
        cout << x << " is present in the Array at the index " << idx;
}