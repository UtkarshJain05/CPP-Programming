
// Program 4. --> Display the GP series - 100, 50, 25,...... upto n terms

#include <iostream>
using namespace std;
int main()
{
    float n, a, r;
    cout << "Enter The No. of Terms : ";
    cin >> n;
    cout << "Enter The First Term : ";
    cin >> a;
    cout << "Enter The Common Ratio : ";
    cin >> r;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a * (1 / r);
    }
}
