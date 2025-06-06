
// Program 3. --> Display the AP series - 100, 97, 94,...... upto all positive terms.

#include <iostream>
using namespace std;
int main()
{
    int a, d;
    cout << "Enter The First Term : ";
    cin >> a;
    cout << "Enter The Common Difference : ";
    cin >> d;
    for (int i = 1; a > 0; i++)
    {
        cout << a << " ";
        a = a + d;
    }
}

// here we used multiple variable conditions.