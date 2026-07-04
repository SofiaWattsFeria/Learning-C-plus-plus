#include <iostream>

using namespace std;

int main()
{
    //while
    int count = 0;

    while(count < 10)
    {

     cout << "Count: " << count << endl;
     count++; 

    }

    //do-while
    int counter2 = 100;
    
    do 
    {
        cout << "Counter2: " << counter2 << endl;
        counter2++;
    }
    while (counter2 < 10);

    //for loop

    for(int i = 0; i < 10; i++)
    {
        cout << "i is " << i << endl;
    }

    return 0;

    // while and for loop are pre-test
    // do while loop post-test(executes even if condition is false)
    
   
}
