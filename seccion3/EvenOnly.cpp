#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    while(num <= 10)
    {
        if(num % 2 != 0 )
        {
            num++;
            continue;
        }

        cout << "number: " << num << endl;
        num++;

    }

    return 0;
}