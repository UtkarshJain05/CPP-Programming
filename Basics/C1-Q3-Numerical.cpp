
// Ques 3. --> Evaluate : a = 7.0/22*(3.14 + 2)*3/5 .

#include<iostream>
using namespace std;
int main()
{
    float a;
    a = 7.0/22 * (3.14 + 2) * 3.0/5;
    cout<<"The Answer of the given Expression is "<<a<<".";
}

/* 
NOTE:-
    To show float value we need to add decimal in one of the 
    integer number of an expression.
    Example : float a = 5.0 / 2. 
*/

/*
If float a = 2/7;
then a = 0  instead of 0.28
because 2 and 7 both are integers.
*/