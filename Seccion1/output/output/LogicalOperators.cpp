#include <iostream>

using namespace std;

int main()
{
    bool isRaining = false;
    bool isWarm = false;

    cout << boolalpha;

    cout << "Is raining AND is warm? " << ( isRaining && isWarm ) << endl;
    cout << "Is raining OR is warm? " << ( isRaining || isWarm ) << endl;
    cout << "Is it NOT raining? " << ( !isRaining ) << endl;

     return 0;
}