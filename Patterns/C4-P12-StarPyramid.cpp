
// Program 12. --> Print Star Pyramid.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nsp = n-1;  // nsp = no. of spaces
    int nst = 1; // nst = No. of Stars.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        nsp--;
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        nst = nst + 2;
        cout << endl;
    }
}
