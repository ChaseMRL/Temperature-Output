#include "tempOut.h"
#include <iostream>
#include <iomanip>

using namespace std;

tempOut::tempOut()
{
	temp = 0; //setting a value to the temperature and amount of stars//
	stars = 0;
}
tempOut::~tempOut()
{
}

void tempOut::setTemp(int temp_)
{
	temp = temp_; //setting the int temp and set temp functions equal to each other//
}

void tempOut::outputBarGraph() 
{
	cout << setw(3) << temp << "   |"; //formatting for outputting the temperature//

		if (temp >= -30 and temp <= 120) //conditioning it to be within the temperature range//
		{
			while (((temp/3)+10) >= stars) //making it so it outputs a star for every three degrees//
			{
				cout << "*"; 
				stars++; 
			}
		}
		else {
			cout << "No worky...";
		}
		stars = 0;
		cout <<  endl;
}
