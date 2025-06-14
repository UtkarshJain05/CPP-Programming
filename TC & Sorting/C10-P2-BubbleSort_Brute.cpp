// Program 2. --> Bubble Sorting {Brute}

#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {7, 6, 5, 4, 3, 2, 1};
    int pass = 1;
    while (pass < n)
    {
        for (int i = 0; i < n - pass; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        pass++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}