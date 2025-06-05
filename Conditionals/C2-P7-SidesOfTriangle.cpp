
// Program 7. --> Tell 3 Numbers input and tell if they can be the sides of a triangle.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the First Number : ";
    cin >> a;
    cout << "Enter the Second Number : ";
    cin >> b;
    cout << "Enter the Third Number : ";
    cin >> c;

    // [Hint --> Now When (a+b)>c , (b+c)>a , (c+a)>b then only a, b & c can be th triangle Sides.]

    if ((a + b) > c and (b + c) > a && (c + a) > b)
    {
        cout << a << ", " << b << " & " << c << " forms the Sides of a Triangle.";
    } // I can write both 'and' as well as '&&' according to my choice.

    else
    {
        cout << a << ", " << b << " & " << c << " doesn't form the Sides of a Triangle.";
    }
}