#pragma once
#ifndef Coin_H
#define Coin_H
#include <iostream>
#include <string>
using namespace std;


class Coin
{
	//private assets
private:
	string sideUp;
	bool heads;
	double value;


	//public assets 
public:
	Coin();
	Coin(double coinValue);
	void toss();
	string getSideUp();
	bool getHeads();	
	double getValues();


};
#endif
