
#include <iostream>
using namespace std;
int main()
{

// // Ques 1. --> Print A Star Solid Square.

//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


// // Ques 2. --> Print Odd Number Rectangle.

//     int n, m;
//     cin>>n>>m;
//     for(int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for(int j = 1; j <= m; j++)
//         {
//             cout << a << " ";
//             a = a + 2;
//         }
//         cout << endl;
//     }
// }


// // Ques 3. --> Print Inverted Number Triangle.

//     int n;
//     cin>>n;
//     int a = n;
//     for (int i = 1; i <= n; i++)
//     {
//         int b = 1;
//         for(int j = 1; j <= a; j++)
//         {
//             cout << b << " ";
//             b++;
//         }
//         cout << endl;
//         a--;
//     }
// }


// // Ques 4. --> Print Inverted Odd No. Triangle + ASCII Values @ i = even in continuation.

//     int n;
//     cin >> n;
//     int a = n, b = 1, c = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= a; j++)
//         {
//             if (i % 2 != 0)
//             {
//                 cout << b << " ";
//                 b = b + 2;
//             }
//             else
//             {
//                 char x = (char)c + 64;
//                 cout << x<<" ";
//                 c++;
//             }
//         }
//         a--;
//         cout << endl;
//     }
// }


// /* Ques 5. --> Print The Pattern :  (Floyd's Triangle)
//                     1
//                     2 3
//                     4 5 6
//                     7 8 9 10             */

//     int n;
//     cin >> n;
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << a << " ";
//             a++;
//         }
//         cout << endl;
//     }
// }


// /* Ques 6. --> Print Even Number Inverted Triangle / Print The Pattern :
//                     0 2 4 6 8
//                     0 2 4 6
//                     0 2 4
//                     0 2
//                     0        */

//     int n;
//     cin >> n;
//     int a = n;
//     for (int i = 1; i <= n; i++)
//     {
//         int b = 0;
//         for (int j = 1; j <= a; j++)
//         {
//             cout << b << " ";
//             b = b + 2;
//         }
//         cout << endl;
//         a--;
//     }
// }


// /* Ques 7. --> Print The Pattern :
//                 A
//                 1 2
//                 A B C
//                 1 2 3 4
//                 A B C D E        */

//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % 2 != 0)
//             {
//                 char b = (char)(a + 64); // b --> (char)65 = 'A'.
//                 cout << b << " ";
//             }
//             else
//             {
//                 cout << a << " ";
//             }
//             a++;
//         }
//         cout << endl;
//     }
// }


// // Ques 8. --> Print Hollow Rectangle.

//     int n, m;
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//     {
//         char a = ' ';
//         for (int j = 1; j <= m; j++)
//         {
//             if (i == 1 || i == n || j == 1 || j == m)
//                 cout << "* ";
//             else
//                 cout << a << " ";
//         }
//         cout << endl;
//     }
// }


// /* Ques 9. --> Print The Pattern:  { O-1 Triangle}
//                     1
//                     0 1
//                     1 0 1
//                     0 1 0 1         */

//     int n; cin>>n;
//     int a;
//     for(int i =1;i<=n;i++)
//     {
//         if(i%2!=0) a=1;
//         else a=0;
//         for(int j =1; j<=i;j++){
//             cout<< a<<" ";
//             if(a==0) a=1;
//             else a=0;
//         }
//         cout<<endl;
//     }
// }


// // Ques 10. --> Print a Rhombus.

//     int n;
//     cin>>n;
//     int a=n-1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=a;j++){
//             cout<<"  ";
//         }
//         a--;
//         for (int k=1;k<=n;k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// /* Ques 11. --> Print The Pattern :
//                         A
//                         A B
//                     A B C
//                     A B C D    */

//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int nsp = n - 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= nsp; j++)
//         {
//             cout << " ";
//         }
//         nsp--;
//         int nst=1;
//         for (int k = 1; k <= i; k++)
//         {
//             char x = (char)(nst+64);
//             cout << x;
//             nst++;
//         }
//         cout << endl;
//     }
// }


// // Ques 12. -->  Print ASCII Values Inverted Pyramid.

//     int n;
//     cin >> n;
//     int nsp = 0;
//     int nst = 2 * n - 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= nsp; j++)
//         {
//             cout << "  ";
//         }
//         nsp++;
//         int a = 1;
//         for (int k = 1; k <= nst; k++)
//         {
//             char x = (char)a + 64;
//             cout << x << " ";
//             a++;
//         }
//         cout << endl;
//         nst = nst - 2;
//     }
// }


// /* Ques 13. --> Print The Pattern :
//                         ABCDEFG
//                         ABC EFG
//                         AB   FG
//                         A     G   */

//     int n;
//     cin >> n;
//     int nst = n - 1;
//     int nsp = 1;
//     for (int h = 1; h <= 2 * n - 1; h++)
//     {
//         char x = (char)h + 64;
//         cout << x;
//     }
//     cout << endl;
//     for (int i = 1; i <= n - 1; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= nst; j++)
//         {
//             char y = (char)a + 64;
//             cout << y;
//             a++;
//         }
//         for (int k = 1; k <= nsp; k++)
//         {
//             cout << " ";
//             a++;
//         }
//         for (int l = 1; l <= nst; l++)
//         {
//             char y = (char)a + 64;
//             cout << y;
//             a++;
//         }
//         nsp += 2;
//         nst--;
//         cout << endl;
//     }
// }
