
// ASCII Values

/*
ASCII values are the specific INTEGER values given to the charcters as 
their integer values.

SOME ASCII Values:-
'0' = 48  --> '9' = 57
'A' = 65  --> 'Z' = 90
'a' = 97  --> 'z' = 122
*/

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Character whose ASCII value is Required = ";
    cin>>ch;
    float x = (float)ch;  //Typecasting.
    cout<<"The ASCII value of "<<ch<<" is "<<x<<".";   
return 0;
}