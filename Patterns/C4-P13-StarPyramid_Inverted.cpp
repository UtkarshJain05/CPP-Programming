
// Program 13. --> Print Star Pyramid Inverted.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nst = 2*n-1;
    int nsp = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp++;
        for (int k = 1; k <= nst; k++)
        {
            cout << "*";
        }
        nst=nst-2;
        cout<<endl;
    }
}