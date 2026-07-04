#include <iostream>


// Control statements, sequential, selection, repetition.
using namespace std;

int main() 
{
    int age;
    char gender;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your gender Female(F) or Male(M): ";
    cin >> gender; 

    if ((age >= 60) && (gender == 'f'|| gender == 'F'))
    {
        cout << "You are eligible!" << endl; 
    
    }
    else
    {
        cout << "You are not eligible." << endl;
    }

    return 0;

}