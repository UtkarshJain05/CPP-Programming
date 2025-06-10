
// Program 2. --> Print 1 to n.

// // (i) Parameterised way.
// #include <iostream>
// using namespace std;
// void Increasing(int x, int n)
// {
//     if (x > n)
//         return;
//     cout << x << endl;
//     Increasing(x + 1, n);
//     return;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     Increasing(1, n);
// }


// (ii) After Call Recursion
#include <iostream>
using namespace std;
void Increasing(int n)
{
    if (n == 0)
        return;
    Increasing(n - 1);
    cout << n << endl;
    return;
}

int main()
{
    int n;
    cin >> n;
    Increasing(n);
}