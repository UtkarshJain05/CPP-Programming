
// Program 7. --> Print all Even numbers from 1 to 100 using Continue Statement.

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << i << " ";
    }
}
