
// Program 4. --> String Functions

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Utkarsh";
    cout << s << " " << s.length() << endl;

    // append
    s.append(" Jain");
    cout << s << " " << s.length() << endl;

    // pop_back()
    s.pop_back();
    cout << s << " " << s.length() << endl;

    // push_back()
    s.push_back('n');
    cout << s << " " << s.length() << endl;

    // Clear()
    s.clear();
    cout << s << " " << s.length() << endl
         << endl;

    // to_string()
    int x = 1234;
    string str = to_string(x);
    cout << str + "5678" << endl;

    // stoi()
    string stg = "4321";
    int y = stoi(stg);
    cout << y+5679 << endl << endl;

    // Plus Operator
    string st = " Jain";
    cout << st << " " << st.length() << endl;
    st = "Utkarsh" + st;
    cout << st << " " << st.length() << endl;
}