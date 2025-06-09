
#include <iostream>
using namespace std;

// // Ques 1. --> WAP to find Permutation of 2 nos. using Function.

// int factorial(int x){
//     int fact = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int permutation(int x, int y){
//     return factorial(x) / factorial(x - y);
// }
// int main(){
//     int n, r;
//     cin >> n >> r;
//     cout << permutation(n, r);
// }


// // Ques 2. --> Write a function to obtain The Prime Factors of input Number.

// void primefactors(int a)
// {
//     if (a == 1)
//         cout << "No Prime Factor Exists.";
//     for (int i = 2; i <= a; i++)
//     {
//         int flag = 0;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//             cout << i << endl;
//     }
//     return;
// }
// int main()
// {
//     int a;
//     cin >> a;
//     cout << "The Prime Factors of " << a << " are :\n";
//     primefactors(a);
// }