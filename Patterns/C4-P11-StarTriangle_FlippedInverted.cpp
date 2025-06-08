
// Program 11. --> Star Triangle Flipped Inverted.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int nsp = 0;
    int nst = n;
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
        nst--;
        cout << endl;
    }
}