
// Program 5. --> Calculate No.of ways for path of n stairs. (if max. step is of 3 & min of 1).

#include <iostream>
using namespace std;
int stair(int n)
{
    if (n <= 2)
        return n;
    if (n == 3)
        return 4;
    int totalways = stair(n - 1) + stair(n - 2) + stair(n - 3);
    return totalways;
}

int main()
{
    int n;
    cin >> n;
    cout << stair(n);
}

// here n = remaining stairs.