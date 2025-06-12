
// Program 1. --> 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    int brr[][3] = {1, 2, 3, 4, 5, 6};
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;

    cout << brr[1][2] << endl;
    cout << arr[1][0] << endl;
    arr[1][0] = 8; // Updation Of Array Value.x
    cout << arr[1][0] << endl;
}