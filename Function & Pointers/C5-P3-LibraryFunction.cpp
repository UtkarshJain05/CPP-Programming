
// program 3. --> Library Function.

#include <iostream> //  Generally Used Library.
#include <math.h>   // Another library.
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Both Numbers : ";
    cin >> a >> b;      // cout and cin are also iostream library funtions.
    
    int p = pow(a, b);  // Calling math.h Library Function
    int ma = max(a, b); // Calling iostream Library Function
    int mi = min(a, b); // Calling iostream Library Function
    int SQRT = sqrt(b); // Calling math.h Library Function

    cout << "min = " << mi << endl;
    cout << "max = " << ma << endl;
    cout << "Power = " << p << endl;
    cout << "Square Root = " << SQRT;
    return 0;
}