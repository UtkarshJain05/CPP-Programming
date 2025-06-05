
// Program 13. --> Check 3 points (x1,y1), (x2,y2) & (x3,y3) lie on a straight line or not?

#include<iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2, x3, y3;
    
    cout<<"Enter 1st Cordinate : ";
    cin>>x1>>y1;
    cout<<"Enter 2nd Cordinate : ";
    cin>>x2>>y2;
    cout<<"Enter 3rd Cordinate : ";
    cin>>x3>>y3;
    
    int m1, m2;
    m1 = (y2-y1)/(x2-x1);  // Slope 1
    m2 = (y3-y2)/(x3-x2);  // Slope 2

    if (m1 == m2) { 
        cout<<"All 3 points Lies on a staright line.";
    }
    else {
        cout<<"Points Doesn't Lies on a staright line.";
    }
}