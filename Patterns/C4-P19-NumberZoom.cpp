
// Program 19. --> Print The Number Zoom Pattern.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // here n is the highest digit used.  for eg n = 4.
    int min;
    for (int i = 1; i < 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int a = i;
            if (i > n)
                a = 2 * n - i;
            int b = j;
            if (j > n)
                b = 2 * n - j;

            if (a > b)
                min = b;
            else
                min = a;
            cout << n + 1 - min;
        } // for swapping the value "n+1 - " is used.
        cout << endl;
    }
}