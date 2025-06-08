
// Program 10. --> Star Triangle Flipped.

// In these types of Questions, We Use 2 Inner Loops.
// 1st Inner Loop for Spaces. & 2nd Inner Loop for Stars.

/* Concept --> i is used for No. of lines.
               j is used for Printing Spaces.
               k is used for Printing Star or Pattern */
               
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int nsp = n - 1;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp--;
        int b=1;
        for (int k = 1; k <= nst; k++)
        {
            cout<<"*";
        }
        nst++;
        cout << endl;
    }
}