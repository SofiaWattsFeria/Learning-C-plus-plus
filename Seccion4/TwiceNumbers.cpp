#include <iostream>
#include <array>

using namespace std;

int main()
{
    //const int hey = 10;
    //int twice[hey];

    array<int, 10> hey;

    for(int i = 0; i < hey.size(); i++)
    {
        hey[i] = i * 2;
    }
    for( int stud : hey)
    {
        cout << stud << endl;
    }

    return 0;

}