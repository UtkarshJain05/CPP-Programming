
// Program 14. --> WAP to print every value of a no. raised to the power of another upto power b.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << " Enter The Value of a & b : ";
    cin >> a >> b;
    int Product = 1;
    if (b == 0)
    {
        cout << a << " raised to the Power 0 = 1";
    }
    else
    {
        for (int i = 1; i <= b; i++)
        {
            Product = Product * a;
            cout << a << " raised to the Power " << b << " = " << Product << endl;
        }
    }
}
