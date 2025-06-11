
// Program 9. --> Find Unique Elements in The Array where Other Elements have Duplicates.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    for (int i = 0; i <= 6; i++)
    {
        int flag = 0; // inside for loop of i is important.
        for (int j = 0; j <= 6; j++)
        {
            if (j != i)
            {
                if (arr[i] == arr[j])
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag == false)
        {
            cout << arr[i] << " is Unique." << endl;
        }
    }
}
