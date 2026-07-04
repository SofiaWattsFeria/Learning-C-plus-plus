#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    double bill;
    double percentage;
    double residual;

    cout << fixed << setprecision(2);

    cout << "Please enter total bill amount: " << endl;
    cin >> bill;

    cout << "Please enter the tip percentage you would like to leave: " << endl; 
    cin.get();

    cin >> percentage; 

    percentage = (percentage / 100);
    residual = (bill * percentage);
    bill = (residual + bill);

    cout << "Your total bill including the tip percentage is: $" << bill << "." << endl;



    return 0;
}