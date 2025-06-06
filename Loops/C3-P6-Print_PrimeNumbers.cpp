
// // Program 6. --> WAP to Print All Prime Numbers upto n.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Number : ";
    cin >> n;
    if (n == 1)
        cout << "1 is Neither Prime Nor Composite Number.";
    else
    {
        for (int i = 2; i <= n; i++)
        {
            int flag = 0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << i << endl;
        }
    }
}