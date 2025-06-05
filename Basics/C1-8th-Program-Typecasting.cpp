
// For understanding Typecasting, Starting with a question.

/*Ques. --> Take integer 'x' as input and print half of the number.
            (Either Even or Odd.)*/

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter The Input Number : ";
    cin >> x;
    cout << "Half (Integer) Of The Entered Number is : " << x / 2 << endl; // gives integer value only.
    float y = (float)x;                                                    // Explicit Typecasting.
    cout << "Half (Float) Of The Entered Number is : " << y / 2 << endl;
    int z = y / 2; // Implicit Typecasting.
    cout << "z = " << z;

    return 0;
}

// Typecasting is used to change "int --> float" or vice-versa.

/* There are two types of Typecasting :
1. Implicit Typecasting --> Here we write float y = x;
                            i.e doesn't show the "float (x)"
2. Explicit Typecasting --> Here we write float y = float(x);
                            i.e we show the conversion properly. */