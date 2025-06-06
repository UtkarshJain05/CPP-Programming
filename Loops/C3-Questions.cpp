
#include <iostream>
using namespace std;
int main()
{

// // Ques 1. --> Input n value and print "Hello Utkarsh" n times.

//     int n;
//     cout << "Enter a Number : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "Hello Utkarsh\n";
//     }
// }


// // Ques 2. --> Print all even numbers from 1 to 100.

//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//             cout << i << endl;
//     }
// }


// // Ques 3. --> Print the table of n where n is user input.

//     int n;
//     cout << "Enter the Value of n : ";
//     cin >> n;
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << n << "x" << i << " = " << n * i << endl;
//     }
// }


// // Ques 4. --> Display the AP series - 1,3,5,7,..... upto n terms.

//     int n, a, d;
//     cout << "Enter the No. of Terms : ";
//     cin >> n;
//     cout << "Enter The First Term : ";
//     cin >> a;
//     cout << "Enter The Common Difference : ";
//     cin >> d;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << " ";
//         a = a + d;
//     }
// }


// // Ques 5. --> Display the GP series - 1,2,4,8,16,32,..... upto n terms.

//     float n, a, r;
//     cout << "Enter The No. of Terms : ";
//     cin >> n;
//     cout << "Enter The First Term : ";
//     cin >> a;
//     cout << "Enter The Common Ratio : ";
//     cin >> r;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << " ";
//         a = a * r;
//     }
// }


// // Ques 6. --> Predict The Output :       //  Infinite Loop.

//     while ('a' < 'b')
//     { //{ASCII Values : 'a' --> 97   & 'b' --> 98}
//         cout << "\nMalayalam is a Palindrome.";
//     }
// }


// // Ques 7. --> Predict The Output :
//     int x = 4, y = 0;
//     while (x >= 0)
//     {
//         x--;
//         y++;
//         if (x == y)
//             continue;
//         else
//             cout << endl
//                 << x << " " << y;
//     }
// }


// // Ques 8. --> Write a program to print sum of all even digits of a Input Number.

//     int n, sum = 0;
//     cout << "Enter The Number : ";
//     cin >> n;
//     while (n > 0)
//     {
//         int ld = n % 10;
//         if (ld % 2 == 0)
//             sum = sum + ld;
//         n = n / 10;
//     }
//     cout << "Sum of Even Digits = " << sum;
// }


// /* Ques 9. --> Write a program to print Count & Sum of Digits & also the Reverse of the Input Number.
//                Also print the Sum of Input Number & its Reversed Number. */

//     int n, Reverse = 0, sum = 0, Count = 0, CR = 0;
//     cout << "Enter The Number : ";
//     cin >> n;
//     int Original = n;
//     while (n > 0)
//     {
//         int ld = n % 10;
//         Count++;
//         sum = sum + ld;
//         Reverse = Reverse * 10 + ld;
//         n = n / 10;
//     }
//     int Sum = Reverse + Original;
//     cout << "\nThe Number of Digits in " << Original << " = " << Count << endl;
//     cout << "The Sum of the Digits of " << Original << " = " << sum << endl;
//     cout << "The Reverse of " << Original << " = " << Reverse << endl;
//     cout << "Sum of Original and Reversed Number = " << Sum;
// }


// // Ques 10. --> Print the Series upto n Terms : 1 - 2 + 3 - 4 + 5 ......(n)th term.

//     int n;
//     cout << "Enter The Number : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//             cout << i;
//         else
//         {
//             if (i != n)
//                 cout << " - " << i << " + ";
//             else
//                 cout << " - " << i;
//         }
//     }
// }


// // Ques 11. --> Print the Factorial of first 'n' Numbers.

//     int n;
//     cout << "Enter The Number = ";
//     cin >> n;
//     int Factorial = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         Factorial = Factorial * i;
//         cout << "The Factorial of " << i << " = " << Factorial << endl;
//     }
// }


// // Ques 12. --> Print the nth term of the Fibonacci seies.

//     int n, FB = 0, FA = 0, FC = 1; // FA = Fibonacci After ; FB = Fibonacci Before ; FC = Fibonacci Current.
//     cout << "Enter The nth Term : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i == 1)
//             FA = 1;
//         else
//         {
//             FA = FC + FB;
//             FB = FC;
//             FC = FA;
//         }
//     }
//     cout << "The nth Term of Fibonacci Series = " << FC;
// }


// /* Ques 13. --> WAP to print all the ASCII Values with their equivalent 
//                     characters of 26 alphabets using a while loop. */

//     for(int i=65;i<=90;i++)
//     {
//         char n = (char)i;
//         cout<<i<<"-->"<<n<<endl;
//     }
// }
    