#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


char userMove;
char computerMove;


int main()
{
    srand(time(nullptr));


    cout << "Welcome to ROCK, PAPER SCISSORS!!! " << endl;
    cout << endl;
    cout << "Please enter the move you want to use (R, P, or S)" << endl;
    cin >> userMove;

    int randNum = rand() % 3;

    if(randNum == 0)
    {
        computerMove = 'R';
    }
    else if( randNum == 1)
    {
        computerMove = 'P';

    }
    else
    {
        computerMove = 'S';

    }

    cout << computerMove << endl;

    if(computerMove == userMove)
    {
        cout << "It's a tie!" << endl;

    }
    else if ( 
        (userMove == 'R' && computerMove == 'S') || 
        (userMove == 'P' && computerMove == 'R') ||
        (userMove == 'S' && computerMove == 'P')
    )
    {
        cout << "You won!" << endl;

    }
    else if(
        (userMove == 'R' && computerMove == 'P') || 
        (userMove == 'P' && computerMove == 'S') ||
        (userMove == 'S' && computerMove == 'R')
    )
    {
        cout << "The computer won!" << endl;
    }
   

    

    


    return 0;
}