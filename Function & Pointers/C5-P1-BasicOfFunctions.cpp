
// Program 1 - Function for asking age Roll no. wise.

#include <iostream>
using namespace std;

void hello() // External function/
{
    int n, Rollno;
    cin >> Rollno >> n;
    cout << "My Roll no. = " << Rollno << endl;
    cout << "& My Age = " << n << endl;
    cout << "\nNoted Next...\n\n";
    return; // khatam
}

int main()
{
    int n;
    cout << "No. Of Students = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        hello(); // calling a function.
    }
}