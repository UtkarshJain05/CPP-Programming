
// Program 3. --> Input Array Size & Values. Print Index of elements below 5. Print Sum of Elements.

#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "size = ";
    cin >> size;
    int arr[size];
    int sum = 0;
    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i - 1];
    }
    cout << "Less than 5 Indices : " << endl;
    for (int i = 1; i <= size; i++)
    {
        if (arr[i - 1] < 5)
            cout << i - 1 << endl;
    }
    cout << "Sum Of Elements = ";
    for (int i = 1; i <= size; i++)
    {
        sum = sum + arr[i - 1];
    }
    cout << sum;
}