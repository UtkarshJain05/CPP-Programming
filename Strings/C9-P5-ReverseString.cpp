
// Program 5. --> Reverse String.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Utkarsh";
    reverse(s.begin(), s.end());
    cout << s << endl;

    // Reversing String with Limits.
    string st = "Utkarsh Jain";
    reverse(st.begin() + 2, st.end() - 2);
    cout << st << endl;

    // Reversing 1st Half Of String.
    string U;
    getline(cin, U);
    reverse(U.begin(), U.begin() + U.length() / 2);
    cout << U << endl;
}