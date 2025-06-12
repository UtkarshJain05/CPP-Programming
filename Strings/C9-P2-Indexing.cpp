// Program 2. --> Indexing Of Strings.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Utkarsh Jain";
    cout << s << endl;
    cout << s[3] << endl; // Printing Index Value.

    s[4] = 'n'; // Updation
    cout << s << endl;

    s[4] = 114; // Updation by ASCII value.
    cout << s << endl;

    cout << s.length();  // Length of String.
}