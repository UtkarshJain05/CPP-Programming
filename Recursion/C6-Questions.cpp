
#include <iostream>
using namespace std;

// // Ques 1. --> Print n to 1 to n.

// void Print(int n)
// {
//     if (n == 0) // Because we need to print 1 also.
//         return;
//     cout << n << endl;
//     Print(n - 1);
//     cout << n << endl;
//     return;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     Print(n);
// }


// // Ques 2. --> Print Sum of 1 to n

// // (i) {Parameterised Way}
// void sum(int n, int s)
// {
//     if (n == 0)
//     {
//         cout << s;
//         return;
//     }
//     sum(n - 1, s + n);
//     return;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     sum(n, 0);
// }

// // (ii) Return Type Way.
// int Sum(int n)
// {
//     if (n == 0)
//         return 0;
//     int recAns = n + Sum(n - 1);
//     return recAns;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << Sum(n);
// }


// // Ques 3. --> Print ZigZag Code.

// void ZigZag(int n)
// {
//     if (n == 0)
//         return;
//     cout << n;
//     ZigZag(n - 1);
//     cout << n;
//     ZigZag(n - 1);
//     cout << n;
//     return;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     ZigZag(n);
// }