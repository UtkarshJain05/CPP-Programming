// Program 1. -->  2 Pointers {2 Sum}.

#include <iostream>
using namespace std;
int main()
{
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int target = 12;
    int i = 0, j = 11;
    while (i < j)
    {
        if (arr[i] + arr[j] < target)
        {
            i++; // increase
        }
        if (arr[i] + arr[j] > target)
        {
            j--; // decrease
        }
        if (arr[i] + arr[j] == target)
        {
            cout << arr[i] << " & " << arr[j] << endl;
            i++, j--;   // found
        }
    }
}