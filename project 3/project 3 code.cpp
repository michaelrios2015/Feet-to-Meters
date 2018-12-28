//*********************************************** 
// COSC 501                                Project 3
// Michael Rios                             10/29/13 
// PROGRAM-NAME: Project 3 
// converts feet into meters
//*********************************************** 

#include <iostream>
#include <iomanip>
using namespace std;

//takes input using refernce 
void input (int& feet, int& inches);

//converts feet into meters 
double feet_to_meters(int feet, int inches);

//displays output nicely
void output(double meters,  int feet, int inches);

void main()
{
	//the used to control loop till user says stop
	char letter;
	
	//intialization
	letter = 'a';
	
	// keeps us going till n is typed
	while (letter != 'n')
	{
		
		//the variables
		int feet, inches;

		input (feet, inches);
		
		//
		output(feet_to_meters(feet, inches), feet, inches);

		// allow user to go again, or not
		cout << "\nwould you like to continue?? (y/n)\n";
		cin >> letter;
		cout << endl;
	

	}
	//farwell
	cout << "Till next time :) \n";
}


void input (int& feet, int& inches)
{
		//gets input using refernce to change variables 
		cout << "what is the lenght in feet and inches ";
		cin >> feet >> inches;
		cout << endl;
}

double feet_to_meters(int feet, int inches)
{

	double meters;

	//where the math happens
	meters = (feet * .3048) + (inches * .3048/12);

	return meters;

}

void output(double meters, int feet, int inches)
{
	//outputs data fix it to two decimal points as to show meters and centimeters
	cout << feet << " feet and " << inches << " inches is " << fixed << setprecision(2) << meters << " meters";

}