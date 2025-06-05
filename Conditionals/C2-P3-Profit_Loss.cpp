
/* Program 3. --> If cost price and selling price of an item is input through the keyboard,
               write a program to determine whether the seller has Made profit or incurred
               loss or no profit no loss. Also determine how much profit he Made or
               loss he incurred. */

#include <iostream>
using namespace std;
int main()
{
    float CP, SP;
    string Product;

    cout << "Enter The Product Name : ";
    cin >> Product;

    cout << endl
         << "Enter The Cost Price of the " << Product << " : ";
    cin >> CP;
    cout << "Enter The Selling Price of the " << Product << " : ";
    cin >> SP;

    if (CP < SP)
    {
        cout << "The Seller Made a Profit of " << SP - CP << " Rupees by Selling " << Product << ".\n\n";
    }

    else if (CP > SP)
    {
        cout << "The Seller Incurred Loss of " << CP - SP << " Rupees by Selling " << Product << ".\n\n";
    }

    else
    {
        cout << "The Seller Didn't Made any Profit or Loss by Selling " << Product << ".\n\n";
    }
}