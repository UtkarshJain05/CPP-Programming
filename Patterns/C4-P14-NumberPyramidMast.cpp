
/* Program 14. --> Print Number Pyramid Mast.
                            OR
                   Print The Pattern :
                            1
                          1 2 1
                        1 2 3 2 1
                      1 2 3 4 3 2 1   */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nsp = n - 1;
    int nst = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)      // Spaces k Liye Loop.
        {
            cout << " ";
        }
        nsp--;

        for (int k = 1; k <= i; k++)        // Basic Number Triangle.
        {
            cout << k;
        }

        int a = nst;
        for (int l = 1; l <= i-1; l++)      // Logical Loop with Basic No. Triangle.
        {
            cout << a;
            a--;
        }
        nst++;

        cout << endl;
    }
}
