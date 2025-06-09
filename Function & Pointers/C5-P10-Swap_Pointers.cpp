
// Program 10. --> Swap 2 Values Using Pointers. {Pass By Reference.}

#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    swap(&a, &b);
    cout << "Swapped Values : a = " << a << " & b = " << b;
}