#ifndef CLASS_TEMPOUT
#define CLASS_TEMPOUT

class tempOut //creating a class//
{
private:
	int temp; //putting a variable for the temperature//
	int stars; //number of stars//

public:
	tempOut(); //constructor//
	~tempOut(); //destructor//

	void outputBarGraph(); //function for putting the stars on the stream//
	void setTemp(int temp_); //function for setting the temperature//
};

#endif !CLASS_TEMPOUT