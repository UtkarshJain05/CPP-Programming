
// Program 7. --> Print Odd Number In Triangle form.

// Using Extra Variable.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a = a + 2;
        }
        cout << endl;
    }
}
// here n is behaving as the no. of lines.


// // Another Tough Way.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     for (int i = 1; i <= n; i = i + 2)
//     {
//         for (int j = 1; j <= i; j = j + 2)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// here n is behaving as last term of odd no.