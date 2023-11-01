/*
	Chase Deiter
	C++ Fall 2023
	Due: 10/31/2023
	Lab 4 Temperature Output

	Design and write a C++ program that inputs a series of hourly temperature
from a file, and outputs a bar chart (using stars) of the temperatures. The temperature
should be printed to the left of the corresponding bar, and there should be a heading
that gives the scale of the chart. The range of temperatures should be from -30 to 120.
Because it is hard to display 150 characters on the screen, you should have each star
represent a range of 3 degrees. That way, the bars will be at most 50 characters wide.
Use meaningful variable names, proper indentation, and appropriate comments.
Thoroughly test the program using your own data sets. Make sure to vet the values from
the input file. Use good programming practices including, classes, comments, and
pre/post conditions.
*/

#include "tempOut.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	tempOut c; //setting a value to the class//

	ifstream inFile; //opening the data file//
	inFile.open("tempOut.dat");

	int temp;

	cout << "Temperature(F)" << endl; //formatting the graph for the output//
	cout << setw(9) << "-30" << setw(5) << "-15" << setw(4) << "0" << setw(6) << "15" << setw(5) << "30" << setw(5) 
		<< "45" << setw(5) << "60" << setw(5) << "75" << setw(5) << "90" << setw(6) << "105" << setw(5) << "120" << endl;
	
	while (true) //while statement that loops until there is no more data in the data file//
	{
		inFile >> temp; //assigning the numbers in the data file the temp int//
		
		c.setTemp(temp); //calling the set temp//

			if (!inFile) //checking to make sure the data file works//
			{
				cout << "data file error" << endl;
				return 0;
		}

		c.outputBarGraph(); //calling the function to output the stars and temperature values onto the graph//
	}
	       
	inFile.close(); //closing the data file when done//

	return 0;
}

