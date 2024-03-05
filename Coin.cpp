#include "Coin.h"
#include <iostream>
#include <ctime>
using namespace std;

	
	//Coin constructor preselect heads or tails
	Coin::Coin(double coinValue)
	{
		
		value = coinValue;

		int assignSide = rand() % 2;

		if (assignSide == 0) {
			sideUp = "Heads";
		} else {
			sideUp = "Tails";
		}

	}

	// Returns the value of the coin object passed to it 
	double Coin::getValues()
	{
		if (sideUp == "Heads") {
			return value;
		}
		else {
			return 0.0; 
		}
	}

	//selects 0 or 1 for heads or tails
	void Coin::toss()
	{
		int flip = rand() % 2;
		
		if (flip == 0) {
			sideUp = "Heads";
			
		}
		else {
			sideUp = "Tails :(";
		}
	}

	// Tells main if heads is true or false
	bool Coin::getHeads()
	{
		if (sideUp == "Heads") {
			return true;
		}
		else {
			return false;
		}
	}

	// Tells main which side "heads" or "tails" is face up. 
	string Coin::getSideUp()
	{
		return sideUp;
	}
	

