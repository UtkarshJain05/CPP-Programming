
/* Program 4. --> Given The Length & Breadth of a Rectangle, write a program to find whether
               the Area of the Rectangle is Greater than its Perimeter.*/

#include <iostream>
using namespace std;
int main()
{
    int l, b, Area, Perimeter;
    cout << "Enter The Length of The Rectangle : ";
    cin >> l;
    cout << "Enter The Breadth of the Rectangle : ";
    cin >> b;

    Area = l * b;
    Perimeter = 2 * (l + b);

    cout << "\nThe Area of the Rectangle = " << Area << " Sq.Unit" << endl;
    ;
    cout << "The Perimeter of the Rectangle = " << Perimeter << " Sq.Unit\n"
         << endl
         << endl;

    if (Area > Perimeter)
    {
        cout << "Area Of Rectangle Is Greater Than it's Perimeter.\n\n";
    }

    else if (Area == Perimeter)
    {
        cout << "Area Of Rectangle Is Equal to it's Perimeter.\n\n";
    }
    else
    {
        cout << "Area Of Rectangle Is Smaller Than it's Perimeter.\n\n";
    }

    // Here mostly Area will be Greater than Perimeter.
}