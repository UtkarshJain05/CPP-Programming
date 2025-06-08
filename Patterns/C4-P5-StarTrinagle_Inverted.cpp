
// Program 5. --> Star Triangle Inverted.

// Using Extra Variable :

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << "*";
        }
        a--;
        cout << endl;
    }
}

// // Another Way.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n+1-i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


