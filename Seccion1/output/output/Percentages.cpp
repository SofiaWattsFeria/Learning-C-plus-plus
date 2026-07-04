#include <iostream>
#include <string> 

using namespace std;

int main()
{
    string fullName;
    string location;
    int initialScore;
    
    cout << "Please enter your full name: " << endl;
    getline(cin, fullName); 

    cout << "Where are you located?: " << endl;
    getline(cin, location);

    cout << "What is your initial score?: " <<endl;
    cin >> initialScore;


    cout << "hello, " << fullName << endl;
    cout << "We heard you are from " << location << endl;
    cout << "Your original score is " << initialScore << ", but with five points added, your score is " << (initialScore + 5) << endl;

    return 0;

}