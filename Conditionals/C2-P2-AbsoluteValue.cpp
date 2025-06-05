
// Program 2. --> Take the input & Print The Absolute Value of that Integer.

// {Absolute Value --> Positive value of any Number is known as it's Absolute Values.}

#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "Enter The Number : ";
    cin >> n;
    if (n >= 0)
    {
        cout << "The Absolute Value of " << n << " = " << n;
    }
    else
    {
        cout << "The Absolute Value of " << n << " = " << -n;
    }
}
