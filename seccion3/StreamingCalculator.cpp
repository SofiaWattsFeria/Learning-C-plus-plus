#include <iostream>

using namespace std;


int devicesUsed;
char package;
int total; 

int main()
{
    cout << "\t\tWelcome to the Streaming Subscription!" << endl;
    cout << "These are the streaming plans below: " << endl;
    cout << "\n";
    cout << "Package A(Basic)\n";
    cout << "* $9/mont\n";
    cout << "* Includes 1 device\n"; 
    cout << "* Each addition device: $6\n";
    cout << "Package B(Standard)\n";
    cout << "* $14/mont\n";
    cout << "* Includes 3 devices\n"; 
    cout << "* Each addition device: $4\n";
    cout << "Package C(Premium)\n";
    cout << "* $20/mont\n";
    cout << "* Includes 5 device\n"; 
    cout << "* Each addition device: $2\n";   
    cout << "\n";

    cout << "Please enter the package you purchased (A, B, or C): " << endl;
    cin >> package;
    

    cout << "please enter the amount of additional devices used: " << endl;
    cin >> devicesUsed;

    if(package == 'A' || package == 'a')
    {
        if(devicesUsed <= 0 )
        {
            total = 9;
        }
        else
        {
            total = 9 + (devicesUsed * 6);
        }
    
        
    }
    else if(package == 'b' || package == 'B')
    {
        if(devicesUsed <= 0)
        {
            total = 14;
        }
        else
        {
            total = 14 + (devicesUsed * 4);
        }
        

    }
    else if(package == 'c' || package == 'C')
    {
        if(devicesUsed <= 0)
        {
            total = 20;
        }
        else
        {
            total = 20 + (devicesUsed * 2);
        }

    }
    else
    {
        cout << "This package doesnt exist" << endl;
    }

    cout << "The monthly total of your subscription is: " << total << endl;

    return 0;
}