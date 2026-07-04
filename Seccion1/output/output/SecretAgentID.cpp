#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fullName;
    string secretAlias;
    int age;
    int agentLevel;
    string favoriteGadget;



    cout << "Lets create a secret agent ID for you, please insert your information:"  << endl;

    cout << "Please enter your full name: " << endl;
    getline(cin, fullName);

    cout << "Please enter your secret alias: " << endl;
    getline(cin, secretAlias);

    cout << "Please enter your age: " << endl;
    cin >> age;

    cin.get();

    cout << "Please enter your agent level (1-10): " << endl;
    cin >> agentLevel;

    cout << "Please enter your favorite gadget: " << endl;
    cin.get();

    getline(cin, favoriteGadget);


    cout << "/////////////////////////////////////////" << endl;
    cout << "       S E C R E T      A G E N T        " << endl;
    cout << "/////////////////////////////////////////" << endl;
    cout << "Name: "  << fullName << endl;
    cout << "Secret alias: " << secretAlias << endl;
    cout << "Age: " << age << endl;
    cout << "Agent level: " << agentLevel << endl;
    cout << "Favorite gadget: " << favoriteGadget << endl;
    cout << "/////////////////////////////////////////" << endl;




    return 0;
}