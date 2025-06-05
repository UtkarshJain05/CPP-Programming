
#include <iostream>
using namespace std;
int main()
{

// // Ques 1. --> Take a positive integer input and tell if it is divisible by 5 and 3.

//     int n;
//     cout << "Enter The Number to be Checked : ";
//     cin >> n;
//     if (n % 5 == 0 && n % 3 == 0)
//     {
//         cout << n << " is Divisible by Both 5 and 3.";
//     }
//     // Here you can also write (n%15 == 0).
//     else
//     {
//         cout << n << " is NOT Divisible by Both 5 and 3.";
//     }
// }


// // Ques 2. --> Take a positive integer input and tell if it is divisible by 3 OR 4.

//     int n;
//     cout << "Enter The Number to be Checked : ";
//     cin >> n;
//     if (n % 3 == 0 && n % 4 == 0)
//     {
//         cout << endl
//             << n << " is Divisible by Both 3 as well as 4.\n\n";
//     }
//     else if (n % 3 == 0 || n % 4 == 0)
//     {
//         cout << endl
//             << n << " is Either Divisible by 3 OR 4.\n\n";
//     }
//     else
//     {
//         cout << endl
//             << n << " is Neither Divisible by 3 Nor 4.\n\n";
//     }
// }


// /* Ques 3. --> Take 3 Positive Integers input and print the greatest of them by
//                         using mutliple conditions. [&& OR ||] */
//             // By If-Else Ladder Or by Logical Operator.

//     int a, b, c;
//     cout << "Enter the First Number : ";
//     cin >> a;
//     cout << "Enter the Second Number : ";
//     cin >> b;
//     cout << "Enter the Third Number : ";
//     cin >> c;
//     if (a > b && a > c)
//     {
//         cout << a << " is the Greatest Number.";
//     }
//     else if (b > a && b > c)
//     {
//         cout << b << " is the Greatest Number.";
//     }
//     else
//     {
//         cout << c << " is the Greatest Number.";
//     }
// }


// // Ques 4. --> Take a positive integer input and tell if it is divisible by 5 or 3 but not by 15.

//     int n;
//     cout << "Enter The Number to be Checked : ";
//     cin >> n;
//     // if (((n % 3 == 0) || (n % 5 == 0)))
//     // {
//     //     if (n % 3 == 0 && n % 5 == 0)
//     //     {
//     //         cout << "Error!";
//     //     }
//     //     else
//     //     {
//     //         cout << n << " is Divisible Either by 5 OR 3 but Not by 15.";
//     //     }
//     // }
//     // Above code is the Example of Nested If-Else.
//     /* Just to understand the concept this above complexity is done.
//     Otherwise this code can simply be written as :-  */
//     if (((n % 3 == 0) || (n % 5 == 0)) && (n % 15 != 0))
//     {
//         cout << n << " is Divisible Either by 5 OR 3 but Not by 15.";
//     }
//     else
//     {
//         cout << "Error!";
//     }
// }


// // Ques 5. --> If The ages of Utkarsh, Kritika and Anuj are input by user, Then Find out the Youngest One.
//             // By Nested If-Else.

//     int Utkarsh, Kritika, Anuj;
//     cout << "Enter The Age of Utkarsh : ";
//     cin >> Utkarsh;
//     cout << "Enter The Age of Kritika : ";
//     cin >> Kritika;
//     cout << "Enter The Age of Anuj : ";
//     cin >> Anuj;
//     if (Utkarsh > Kritika)
//     {
//         if (Kritika > Anuj)
//         {
//             cout << "Anuj Is the Youngest Person.";
//         }
//         else
//         {
//             cout << "Kritika is the Youngest Person";
//         }
//     }
//     else
//     {
//         if (Utkarsh < Anuj)
//         {
//             cout << "Utkarsh Is the Youngest Person.";
//         }
//         else
//         {
//             cout << "Anuj Is the Youngest Person.";
//         }
//     }
// }


// // Ques 6. -- > Quadrant Question.

//     int x,y;
//     cout << "Enter (x,y) : ";
//     cin >> x >> y;
//     if (x > 0 && y > 0)
//     {
//         cout << "1";
//     }
//     else if (x < 0 && y > 0)
//     {
//         cout << "2";
//     }
//     else if (x < 0 && y < 0)
//     {
//         cout << "3";
//     }
//     else if (x > 0 && y < 0)
//     {
//         cout << "4";
//     }
//     else
//     {
//         cout << "at origin";
//     }
// }


// // Ques 7. --> Checking (x,y) on x-axis, y-axis or on origin.

//     int x, y;
//     cout << "Enter The point : ";
//     cin >> x >> y;
//     if (x == 0 & y == 0)
//         cout << "(" << x << "," << y << ")" << " is on Origin (0,0).";
//     else if (y == 0)
//         cout << "(" << x << "," << y << ")" << " is on X-axis.";
//     else if (x == 0)
//         cout << "(" << x << "," << y << ")" << " is on Y-axis.";
//     else
//         cout << "(" << x << "," << y << ")" << " is neither on X-axis, neither on Y-axis, nor on Origin (0,0).";
// }
