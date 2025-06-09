
// Program 2. -->  Sum of 2 Numbers Using Function.

#include <iostream>
using namespace std;

int add(int a, int b) // User Defined Function.
{
    return a + b;
}

int main()
{
    int a, b;
    cout << "Enter Both Numbers : ";
    cin >> a >> b;
    int sum = add(a, b); // Calling User Defined Function.
    cout << "Sum = " << sum;
    return 0;
}