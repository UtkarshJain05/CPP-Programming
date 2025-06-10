
// Program 4. --> Write a Function to calculate the nth fibonacci no. using Recursion.

#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    if (n <= 2)
        return n-1;
    int recAns = Fibonacci(n - 1) + Fibonacci(n - 2);
    return recAns;
}

int main()
{
    int n;
    cin >> n;
    cout << Fibonacci(n);
}


// 0 1 1 2 3 5 8 13 ....