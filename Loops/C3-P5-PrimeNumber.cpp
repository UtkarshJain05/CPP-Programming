
// Program 5. --> WAP to Check whether The Input Number is Prime or Composite.

#include <iostream>
using namespace std;
int main()
{
    int n;
    bool flag = 0;
    cout << "Enter The Number : ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1)
        cout << "1 is Neither Prime Nor Composite Number.";
    else if (flag == 0)
        cout << n << " is a Prime Number.";
    else
        cout << n << " is a Composite Number.";
}
