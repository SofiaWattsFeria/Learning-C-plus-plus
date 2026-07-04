#include <iostream>

using namespace std;




int main()
{
    const int arraySize = 10;

    int size[arraySize];


    for(int i = 0; i < arraySize; i++)
    {
        size[i] = i + 1;
    }
    for(int j : size)
    {
        cout << j << endl;
    }


    

    return 0;
}