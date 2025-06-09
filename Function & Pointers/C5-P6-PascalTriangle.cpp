
// Program 6. --> Pascal Triangle Using Combination Function.

#include <iostream>
using namespace std;
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int combination(int x, int y)
{
    return factorial(x) / (factorial(x - y) * factorial(y));
}

int main()
{
    int n;
    cin >> n;
    int nsp = n-1;
    int a = 0;
    for (int i = 1; i <= n; i++)   // 1 Extra line is Printing w.r.t  n.
    {
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp--;
        int b = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << combination(a, b) << " ";
            b++;
        }
        a++;
        cout << endl;
    }
}