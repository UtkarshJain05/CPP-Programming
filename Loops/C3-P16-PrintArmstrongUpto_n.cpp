
// Program 16. --> WAP to print all Armstrong Number between 0 to n.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Last Number : ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        int Original = i;
        int Armstrong = 0;
        while (Original > 0)
        {
            int ld = Original % 10;
            Armstrong = Armstrong + (ld * ld * ld);
            Original = Original / 10;
        }
        if (Armstrong == i)
            cout << i << endl;
    }
}
