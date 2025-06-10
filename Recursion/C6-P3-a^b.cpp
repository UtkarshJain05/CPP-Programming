
// Program 3. --> Write A Function which calculates 'a' raised to power 'b' using Recursion.

// // (i) Parameterised Way.
// #include <iostream>
// using namespace std;
// void Power(int power, int a, int b)
// {
//     if (b == 0)
//     {
//         cout << power;
//         return;
//     }
//     Power(power * a, a, b - 1);
//     return;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     Power(1, a, b);
// }

// (ii) Return Type Way
#include <iostream>
using namespace std;
int Power(int a, int b)
{
    if (b == 0)
        return 1;
    int RecAns = a * Power(a, b - 1);
    return RecAns;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << Power(a, b);
}