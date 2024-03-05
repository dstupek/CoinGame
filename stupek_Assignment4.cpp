#include <iostream>
#include <iomanip>
#include <string>
#include "Coin.h"
using namespace std; 


int main()
{
    // Initialize the game score variable and set it to zero.  
    double gameScore = 0;
    // Seed number for RNG
    srand(static_cast<unsigned int>(time(0)));
    // Create three objects of the Coin class // Set the values for each coin
    Coin Quarter(0.25);
    Coin Dime(0.10);
    Coin Nickle(0.05);
    

    // Force a .00 
    cout << fixed << setprecision(2);


    // The game itself. The do while loop flips each coin with the .toss, and then if .getHeads returns a true
    // add the value to game score. And tell the user we added the value. 
    do {

        Quarter.toss();
        cout << "Quarter is showing : " << Quarter.getSideUp() << endl;
        if (Quarter.getHeads()) {
            gameScore += Quarter.getValues();
            cout << "Plus !$0.25" << endl;
        }

        Dime.toss();
        cout << "Dime is showing : " << Dime.getSideUp() << endl;
        if (Dime.getHeads()) {
            gameScore += Dime.getValues();
            cout << "Plus !$0.10" << endl;
        }

        Nickle.toss();
        cout << "Nickle is showing : " << Nickle.getSideUp() << endl;
        if (Nickle.getHeads()) {
            gameScore += Nickle.getValues();
            cout << "Plus !$0.05" << endl;
        }

        cout << "The current score is : $" << gameScore << endl;

    } while (gameScore < 1);

    // if / else if returns something once the condition is met to stop the do while loop. 

    if (gameScore > 1) {
        cout << "Bust. Restart the program and try again." << endl;
    } else if (gameScore == 1) {
        cout << "AMAZING YOU ARE A WINNER!!!" << endl;
    }


    

}
