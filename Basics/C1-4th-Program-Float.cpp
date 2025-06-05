
// float is a type of datatype used when decimal value is required.

/* 
    To show float value we need to add decimal in one of the 
    integer number of an expression.
    Example : float a = 5.0 / 2. 
    This only need to be done if directly numbers 
    (instead of variables) are need to be operated. 
    Examople is given below in form of 'd'.
*/

#include<iostream>
using namespace std;
int main()
{
    float a = 5;
    float b = 2;
    float c = a / b;
    cout<<c<<endl;
// but if
    float d = 5/2;
    cout<<d<<endl<<endl;
    
// 2nd Case for Basic Float Understanding:-

    float x = 5.5;
    float y = 2.5;

    cout<<x + y<<endl;
    cout<<x - y<<endl;
    cout<<x * y<<endl;
    cout<<x / y<<endl;
    
    float z = 5.01;
    cout<<z<<endl;

    return 0;
}