
// Program 8. --> Pre In Post  {Recursion Working Explanation.}

#include <iostream>
using namespace std;
void PreInPost(int n)
{
    if (n == 0)
        return;
    cout << n;
    PreInPost(n - 1);
    cout << n;
    PreInPost(n - 1);
    cout << n;
    return;
}

int main()
{
    int n;
    cin >> n;
    PreInPost(n);
}