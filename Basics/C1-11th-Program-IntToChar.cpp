
// Now we'll convert integer value (ASCII value) into Char value.

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the ASCII Value : ";
    cin>>x;
    char ch = (char)x;
    cout<<"The char value for given ASCII Value is "<<ch<<".";
return 0;
}