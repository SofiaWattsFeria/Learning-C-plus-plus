#include <iostream>

using namespace std;

int startingYear;
int endingYear;
int count;


int main()
{
    cout << "Welcome to the Leap Year Checker!"<< endl;
    cout << "Please enter a starting year: " <<endl;
    cin >> startingYear;
    cout << "Please enter an ending year:" <<endl;
    cin >> endingYear;


    for(int years = startingYear; years <= endingYear; years++)
    {

      if((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0))
      {
         cout << years << " is a leap year.\n";
      }
      else
      {
         cout << years << " is not a leap year.\n";
      }




    }

    /*while( startingYear <= endingYear)
    {
       startingYear++;
    }
    if( startingYear / 400 || startingYear / 4) 
    {
      cout << startingYear << " is a leap year.\n";
    }
    else
    {
      cout << startingYear << " is not a leap year.\n";
    }
*/



    return 0;


   // if leap year is not divisible by 400 do
}