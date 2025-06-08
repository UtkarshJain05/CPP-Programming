
/* Program 17. --> Print The Star Table / Pattern :
                            *******
                            *** ***
                            **   **
                            *     *   */

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;
    int nst = n - 1;
    int nsp = 1;
    for (int h = 1; h <= 2 * n - 1; h++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp += 2;
        for (int l = 1; l <= nst; l++)
        {
            cout << "*";
        }
        nst--;
        cout << endl;
    }
}