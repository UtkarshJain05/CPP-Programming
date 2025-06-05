
// Program 5. --> Check Sum of Two Numbers whether it is Odd or Even.

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if ((x + y) % 2 == 0)
        cout << x + y << " is EVEN";
    else
        cout << x + y << " is ODD";
}