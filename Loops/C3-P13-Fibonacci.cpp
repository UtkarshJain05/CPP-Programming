
// Program 13. --> Print the fibonacci number Series upto n terms.
// Fibonacci Series --> 1 1 2 3 5 8 13 21 34 55 ..........

#include <iostream>
using namespace std;
int main()
{
    int n, FA = 0, FB = 0, FC = 1; // FA = Fibonacci After ; FB = Fibonacci Before ; FC = Fibonacci Current.
    cout << "Enter The Number of terms : ";
    cin >> n;
    cout << "The Fibonacci series = ";
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            FA = 1;
        else
        {
            FA = FC + FB;
            FB = FC;
            FC = FA;
        }
        cout << FA << " ";
    }
}