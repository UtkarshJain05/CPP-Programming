
// Program 9. --> Basics Of Pointers.

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *x;
    x = &a;             // Assigning x the address value of a.
    cout << a << endl;  // Value Of a = 5.
    cout << x << endl;  // Address Of Variable a.
    cout << *x << endl; // Points the Value of Variable whose Address is in x.
    *x = 7;             // Updating The Value of a.
    cout << a << endl;  // Updated value of a = 7.

    int **y = &x;      // Double Pointer here ** is used becoz y is
    cout << y << endl; // storing address of a another pointer.
    cout << &x << endl; 
    cout << *y << endl;  // Points The Value of variable whose Address is in y.
    cout << **y << endl; /* Points the Value of Variable(a) whose Address is in the variable(x) 
                            whose Address in y. */
}