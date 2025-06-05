
//Program 12. --> CALCULATOR

// Another Way of if else.

#include<iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cout<<"Enter the Expression : ";
    cin>>a>>op>>b;
    

// // first by if else : 
//     if (op == '+') cout<<a+b;
//     else if (op == '-') cout<<a-b;
//     else if (op == '*') cout<<a*b;
//     else if (op == '/') cout<<"Quotient = "<<a/b<<" and Remainder = "<<a%b;
//     else cout<<"Error!";
// }

// BY SWITCH OPERATOR : 
switch (op) {
    case '+': cout<<a+b;
    break;
    case '-': cout<<a-b;
    break;
    case '*': cout<<a*b;
    break;
    case '/': cout<<"Quotient = "<<a/b<<" & Remainder = "<<a%b;
    break;
    default:
    cout<<"Error!";
}
}