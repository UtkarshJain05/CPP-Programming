
// Program 9. --> Grading Question.

#include <iostream>
using namespace std;
int main()
{
    int Percentage;
    cout << "Enter The percentage : ";
    cin >> Percentage;

    if (Percentage >= 81 && Percentage <= 100)
    {
        cout << "A";
    }
    else if (Percentage >= 61)
    {
        cout << "B";
    }
    else if (Percentage >= 41)
    {
        cout << "C";
    }
    else if (Percentage <= 40)
    {
        cout << "Fail";
    }
    else
    {
        cout << "Error!";
    }
    // Here if Percentage is less than 81 then automatically comes B. So no need of <=80.
}