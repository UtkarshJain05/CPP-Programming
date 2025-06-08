
// Program 16. --> Print Hollow Diamond.    { n = Always}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ml = n / 2 + 1; // ml = Middle line Number.
    int nst = ml - 1;
    int nsp = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            cout << "*";
        }

        for (int k = 1; k <= nsp; k++)
        {
            if (k == 1 || k == nsp)
                cout << "*";
            else
                cout << " ";
        }

        for (int l = 1; l <= nst; l++)
        {
            cout << "*";
        }

        if (i < ml)
        {
            nst--;
            nsp += 2;
        }
        else
        {
            nst++;
            nsp -= 2;
        }

        cout << endl;
    }
}