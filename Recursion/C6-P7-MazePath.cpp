
// Program 7. --> Calculate No.of ways for path of n x m Grid. (max. step = 1 with 'Down-Right').

// (i) Using Only 2 Parameters.
#include <iostream>
using namespace std;
int Maze(int n, int m)
{
    if (n == 1 || m == 1)
        return 1;
    int Rightways = Maze(n, m - 1);
    int Downways = Maze(n - 1, m);
    int Totalways = Rightways + Downways;
    return Totalways;
}
int main()
{
    int n, m;
    cout << "Enter Length & Breadth : ";
    cin >> n >> m;
    cout << Maze(n, m);
}
// here n & m are the remaining rows & Columns.


// // (ii) Using 4 Parameters.
// #include <iostream>
// using namespace std;
// int Maze(int cr, int cc, int er, int ec) // cr = current row, ec =  ending column.
// {
//     if (cr == er || cc == ec)
//         return 1;
//     int RightWays = Maze(cr, cc + 1, er, ec);
//     int DownWays = Maze(cr + 1, cc, er, ec);
//     int TotalWays = RightWays + DownWays;
//     return TotalWays;
// }

// int main()
// {
//     int n, m;
//     // cout << "Enter Length & Breadth : ";
//     cin >> n >> m;
//     cout << Maze(1, 1, n, m);
// }
// // here cr and cc are the current coordinates.