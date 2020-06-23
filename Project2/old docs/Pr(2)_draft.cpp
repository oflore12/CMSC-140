/*
 * Class: CMSC140 CRN
 * Instructor: Greg Grinberg
 * Project<2>
 * Description: (Give a brief description for Project)
 * Due Date:10/14/2019
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Odalis Flores


 * Pseudocode or Algorithm for the program:
	(be sure to indent items with control structure)
	(need to match flow chart submitted in documentation)
  1.
  2.
  3.
  4.
  5.
 (more as needed)
*/



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	const int 
		TEMPERATURE_CONVERTER = 1,
		DISTANCE_CONVERTER = 2,
		WEIGHT_CONVERTER = 3,
		QUIT = 4,
		ASSIGNMENT_NUMBER = 2;
	const string 
		PROGRAMMER_NAME = "Odalis Flores", 
		DUE_DATE = "10/14/2019";
	int number;
	double
		fahrenheit, 
		celsius, 
		kilometer, 
		miles, 
		kilograms, 
		pounds;
	string countryName;

	cout << "Enter a country name: ";
	getline(cin, countryName);

	cout << "\n\nConverter Toolkit\n --------------------\n";
	cout << "1. Temperature Converter\n2. Distance Converter\n3. Weight Converter\n4. Quit\n";

	cout << "\nEnter your choice (1-4): ";
	cin >> number;


	switch (number)
	{
	case TEMPERATURE_CONVERTER:
		cout << "\nPlease enter temperature in Celsius (such as 24): " << endl;
		cin >> celsius;
		cout << fixed << setprecision(0);
		fahrenheit = (9.0 / 5.0) * celsius + 32;

		cout << "\nIt is " << fahrenheit << " in Fahrenheits." << endl;
	break;

	case DISTANCE_CONVERTER:
		cout << "\nPlease enter distance in Kilometer (such as 18.54): " << endl;
		cin >> kilometer;
		if (kilometer >= 0)
		{
			miles = kilometer * 0.6;
			cout << fixed << showpoint << setprecision(2);
			cout << "\nIt is " << miles << " in miles.\n";
		}
		else 
			cout << " !!! Program does not convert negative distance !!!" << endl;
	break;

	case WEIGHT_CONVERTER:
		cout << "\nPlease enter weight in Kilograms (such as 16.365): " << endl;
		cin >> kilograms;
		if (kilograms >= 0)
		{
			pounds = kilograms * 2.2;
			cout << fixed << showpoint << setprecision(1);
			cout << "\nIt is " << pounds << " in pounds.\n";
		}
		else
			cout << " !!! Program does not convert negative distance !!!" << endl;
	break;

	case QUIT:
		cout << "Program ended." << endl;
	break;

	default: cout << "invalid input";
	}

	// This section displays thank you message with programmer name, due date, and assignment
	cout << "\nThank you for testing my program!! " << endl;
	cout << "\nPROGRAMMER: " << PROGRAMMER_NAME << endl;
	cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
	cout << "Due Date : " << DUE_DATE << endl;


	return 0;
}
