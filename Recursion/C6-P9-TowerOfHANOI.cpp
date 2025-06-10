
// Program 9. --> Tower Of HANOI.

#include <iostream>
using namespace std;
void HANOI(int n, char s, char h, char d)
{
    if (n == 0)
        return;
    HANOI(n - 1, s, d, h);
    cout << s << "-->" << d << endl;
    HANOI(n - 1, h, s, d);
    return;
}

int main()
{
    int n;
    cin >> n;
    HANOI(n, 'A', 'B', 'C');
}