#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter an integer number " << endl;
    cout << "If you want the program to stop, enter a negative number. " << endl;
    cin >> num;

    while (num >= 0)
    {
        cout << "You entered: " << num << endl;
        cout << "If you want the program to stop, enter a negative number. " << endl;
        cin >> num;
    
    }

    return 0;
}