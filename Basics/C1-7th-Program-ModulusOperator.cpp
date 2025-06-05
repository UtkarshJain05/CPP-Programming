
// Modulus Operator (%) :-

/*When written x%y then this means that when x  is divided by y (x/y)
 then {x%y = Remainder of x/y}.*/

 // Modulus Operator majorly used for divisiblity Test.

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter First Number: ";
    cin>>x;
    cout<<"Enter Second Number: ";
    cin>>y;
    cout<<"The Modulus of both Numbers = "<<x%y;
    return 0;
}

/* 
SOME INMPORTANT POINTS:-
   1. a % b = a [if a<b].
   2. a % a = 0.
   3. a % b = 0 [if a is divisible by b (a/b = exact integer)].
   4. a % (-b) = a % b.
   5. (-a) % b = -(a % b).
*/