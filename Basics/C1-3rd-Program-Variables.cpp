
#include<iostream>
using namespace std;
int main()
{

    int a; //Declaration
    a = 2; // Initialisation
    
    int b = 3; // Both In 1 Step.
   
    int c = 5, d = 10; 
    // 2 variables Declared and Initialised in 1 step.

    cout<<b+3<<endl;
    
    cout<<(a+b)*2<<endl;
    // here () is used for applying BODMAS Rule.

    cout<<c*d<<endl;
    
    a = 7, b= 13;
    cout<<a+b<<"\n";
    // here the values of a & b are updated.

    c = c + 7; // c value updated using it's previous value.
    // Can also be written as c += 7.
    cout<<c<<endl;

    b = a * b;  // can also be written as b *= a
    cout<<b;
    /*here the value of b is updated such that 
      something is operated on its previous value.*/

    return 0;

}