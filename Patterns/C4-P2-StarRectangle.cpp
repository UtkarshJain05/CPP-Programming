
// Program 2. --> Star Rectangle.

#include <iostream>
using namespace std;
int main()
{
    int l, b;
    cout << "Enter The Length & Breadth : ";
    cin >> l >> b;
    for (int i = 1; i <= l; i++) // outer loop --> no. of lines.
    {
        for (int j = 1; j <= b; j++) // inner loop --> no. of Stars in each Line.
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Outer Loop(i) = No. of Lines = No. of Rows. = Length
// Inner Loop(j) = No. of Stars in One Line = No. Of Columns. = Breadth