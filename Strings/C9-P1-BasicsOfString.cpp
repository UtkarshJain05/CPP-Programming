
// Program 1. --> Basics Of Strings.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Utkarsh Jain";
    cout << str << endl;
    cout << str.length() << endl;
    // cout << str[13] << endl; // = \0
    cout << str[3] << endl;

    int x = 0;
    char ch = (char)x;  // ch = '\0'
    cout << ch << endl; // Prints Nothing.

    // String Input
    string s;
    getline(cin, s);
    cout << s;
}