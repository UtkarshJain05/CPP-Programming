
// Program 8. --> Write a Program to Swap 2 Variables value.

// (i) Without using 3rd Variable.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a; // Enter a value.
    cin >> b; // Enter b Value.
    cout << "Input Values : a = " << a << " & b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Swapped value : a = " << a << " & b = " << b;
}


// // (ii) By using 3rd Variable.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a; // Enter a value.
//     cin >> b; // Enter b Value.
//     cout << "a = " << a << " & b = " << b << endl;
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "Swapped value : a = " << a << " & b = " << b;
// }