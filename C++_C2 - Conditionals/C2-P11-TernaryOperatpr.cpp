
// Program 11. --> Short Synatx For if else.
// Syntax --> (Condition) ? if true : if false;

// Even Odd Question.

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter N : ";
    cin >> n;
    (n % 2 == 0) ? cout << "Even Number" : cout << "Odd Number";
}

// use only in case of two conditions otherwise it becomes complex.