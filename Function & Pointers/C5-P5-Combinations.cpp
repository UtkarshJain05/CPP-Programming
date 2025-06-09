
// Program 5. --> Combinations

// (i) By Using Function.
#include <iostream>
using namespace std;
int factorial(int a){
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int x, int y){
    return factorial(x) / (factorial(x - y) * factorial(y));
}

int main(){
    int n, r;
    cout << "Enter n & r values = ";
    cin >> n >> r;
    cout << combination(n, r);
}


// // (ii) Without Using Functions.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, r;
//     cin >> n >> r; // Taking Value Of n & r for nCr (Combination).

//     int nfact = 1, rfact = 1, nrfact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         nfact = nfact * i;
//     }

//     for (int i = 1; i <= r; i++)
//     {
//         rfact = rfact * i;
//     }

//     for (int i = 1; i <= n - r; i++)
//     {
//         nrfact = nrfact * i;
//     }

//     int nCr = nfact / (nrfact * rfact);
//     cout << n << "C" << r << " = " << nCr;
// }