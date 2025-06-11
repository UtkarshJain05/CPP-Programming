
// Program 5. --> Function Array.

#include <iostream>
using namespace std;
void function(int a[]) // No need to write Size here.
{
    a[0] = 10;
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0] << endl;
    function(arr);
    cout << arr[0]; // Size Format will not get written.
}