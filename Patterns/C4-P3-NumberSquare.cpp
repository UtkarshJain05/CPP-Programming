
// Program 3. --> Number Square.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}