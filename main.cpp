#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
        SecretDoor game;
        int repeat;
        int win=0;
        cout<<"How many times do you want to play?"<<endl;
        cin>>repeat;
        for (int x=0; x<repeat; x++)
        {
                game.newGame();
                game.guessDoorC();
                game.guessDoorC();
                if (game.isWinner() == true)
                {
                        win++;
                }
        }
        if ( win<=1)
        {
        cout<<"You won "<<win<< " time "<<endl;
        }
        else
        {
        cout<<"You won "<<win<<" times "<<endl;
        }
        return 0;
}
