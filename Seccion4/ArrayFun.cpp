#include <iostream>

using namespace std;
 
int main()
{
   /* const int ARRAY_SIZE = 5;
    int myArray[ARRAY_SIZE];

    myArray[0] = 15;
    myArray[1] = 20;
    myArray[2] = 22;
    myArray[3] = 13;
    myArray[4] = 6;

    for(int i = 0; i < ARRAY_SIZE; i++ )
    {
        cout << myArray[i] << endl;
    } */

    string names[4] = { "Bob", "Sally", "John", "Ed"};

    //for(int i = 0; i < 4; i++)
    //{
     //   cout << names[i] << endl;
    //}

    //for(string name : names)
    //{
   //     cout << name << endl;
    //}

    for(auto name : names)
    {
        cout << name << endl;
    }

    return 0;
}