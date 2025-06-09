
// Program 7. --> Pascal Triangle Optimized {Unique Way}.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nsp = n - 1;
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        int aCb = 1;
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp--;
        int b = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << aCb << " ";
            aCb = aCb * (a - b) / (b + 1);
            b++;
        }
        a++;
        cout << endl;
    }
}
// Important Formula --> nC(r+1) = nCr * (n-r)/(r+1)