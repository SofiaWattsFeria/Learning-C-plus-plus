#include <iostream>

using namespace std;

int main()
{
    int sum = 0;

    int num;

    cout << "Enter an integer number and if you want to quit a negative" << endl;
    cin >> num;

    while (num >= 0)
    {
        sum += num; 

        cout << "You have entered: " << num << endl;
        cout << "Enter another integer and if you want to stop enter a negative." << endl;
        cin >> num;

    }

    cout << "The sum of the numbers you entered is: " << sum << endl;

    return 0;
}