/*
 * Class: CMSC140 CRN 21714
 * Instructor: Greg Grinberg
 * Project<2>
 * Description: There are two main systems for measuring distance, weight and temperature
	•	the Imperial System of Measurement 
	•	the Metric System of Measurement
Most countries use the Metric System, which uses the measuring units such as 
meters and grams and adds prefixes like kilo, milli and centi to count orders of magnitude. 
In the United States, we use the older Imperial system, where things are measured in feet, inches and pounds.
 * Due Date:10/14/2019
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Odalis Flores


 * Pseudocode or Algorithm for the program:
	(be sure to indent items with control structure)
	(need to match flow chart submitted in documentation)
1.	Declare and initialize constant integer variables 
	a.	Temperature converter = 1 
	b.	Distance converter = 2
	c.	Weight converter =3
	d.	Quit = 4
	e.	Assignment number = 2
2.	Declare and initialize constant string variables
	a.	Programmer name = Odalis Flores
	b.	Due date = 10/14/2019
3.	Declare integer variable
	a.	 number
4.	Declare double variables 
	a.	fahrenheit 
	b.	celsius
	c.	kilometer 
	d.	miles
	e.	kilograms
	f.	pounds
5.	Declare string variable 
	a.	country name
6.	Display “Enter a country name:”
7.	Get country name from user
8.	Display Converter tool kit Menu 
	“Converter Toolkit
	-------------------- 
	1. Temperature Converter 
	2. Distance Converter
	3. Weight Converter
	4. Quit”
9.	Display message to user “Enter your choice (1-4):”
10.	 Get number from user
11.	Switch statement begins, switch (number)
	a.	Case temperature converter:
		i.	Prompt user “Please enter temperature in Celsius (such as 24):
		ii.	Get Celsius from user
		iii.	Convert Celsius to Fahrenheit using expression Fahrenheit = (9/5)* Celsius +32
		iv.	Display “It is (display Fahrenheit as a whole number) in Fahrenheit”
		v.	break
	b.	Case distance converter:
		i.	prompt user “Please enter distance in Kilometer (such as 18.54):”
		ii.	get kilometer from user
			1.	if kilometer is greater than or equal to 0
				a.	then convert kilometer to miles, using expression miles = kilometer * 0.6
				b.	display “It is (miles displayed in two decimal places) in miles.
			2.	Else 
				a.	Display “!!! Program does not convert negative distance !!!”
		iii.	break
	c.	Case weight converter:
		i.	Prompt user “Please enter weight in Kilograms (such as 16.365):”
		ii.	Get kilograms from user
			1.	If kilogram is greater than or equal to 0 
				a.	Convert kilogram to pounds, using expression pounds = kilograms * 2.2
				b.	Display “It is (pounds shown to one decimal place) in pounds”
			2.	Else
				a.	Display “!!! Program does not convert negative distance !!!”
		iii.	break
	d.	Case quit:
		i.	Display “Program ended.”
		ii.	Break
	e.	Default:
		i.	Display “You have entered an invalid number, please close the window and run the program again”
12.	 Display “(country name) sounds fun!!’
13.	Display “Thank you for testing my program!
	PROGRAMMER: (programmer name)
	CMSC 140 Common Project (assignment number)
	Due date : (due date)
*/



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	const int // declaring variables for converter toolkit with the number on list
		TEMPERATURE_CONVERTER = 1,
		DISTANCE_CONVERTER = 2,
		WEIGHT_CONVERTER = 3,
		QUIT = 4,
		ASSIGNMENT_NUMBER = 2; // declaring assingment number
	const string 
		PROGRAMMER_NAME = "Odalis Flores", // declaring constant string for programmer name and due date
		DUE_DATE = "10/14/2019";
	int number; // declaring number as a variable for converter toolkit option
	double //Declaring variables that will be used to convert imperial system to metric system
		fahrenheit, 
		celsius, 
		kilometer, 
		miles, 
		kilograms, 
		pounds;
	string countryName; //Declaring variable string for the name of country
	
	
	cout << "Enter a country name: "; //This section will prompt the user to enter the name of a country, 
	getline(cin, countryName); //The name of a country will be initalized to the variable countryName

	//This section displays the converter toolkit, and prompts the user to enter their choice (1-4)
	cout << "\n\nConverter Toolkit\n --------------------\n";
	cout << "1. Temperature Converter\n2. Distance Converter\n3. Weight Converter\n4. Quit\n";
	//The user's input will initialize to the variable number
	cout << "\nEnter your choice (1-4): ";
	cin >> number;


	//This is the start of the switch statement, the cases will be compared to the variable number that the user entered.
	switch (number)
	{
	//if the user enters 1, then the temperature converter will run
	//temperature in celsius gathered by the user and converted to fahrenheits
	case TEMPERATURE_CONVERTER: 
		cout << "\nPlease enter temperature in Celsius (such as 24): " << endl;
		cin >> celsius;
		cout << fixed << setprecision(0);
		fahrenheit = (9.0 / 5.0) * celsius + 32; //This is the mathmatical expression to convert celsius to farenheits
		cout << "\nIt is " << fahrenheit << " in Fahrenheits." << endl; //this statement displays the conversion
	break;

	//If the user enters 2, then the distance converter will run
	//This section will prompt the user to enter distance in kilometers, value entered is initalized to variable kilometer
	case DISTANCE_CONVERTER:
		cout << "\nPlease enter distance in Kilometer (such as 18.54): " << endl;
		cin >> kilometer;
		if (kilometer >= 0) //If the value for kilometer is greater than or equal to 0, then kilometer will be converted to miles
		{
			miles = kilometer * 0.6; //This is the mathematical expression to convert kilometer to miles, that value is initalized to the variable miles
			cout << fixed << showpoint << setprecision(2);//Statement will show miles with only two decimal places
			cout << "\nIt is " << miles << " in miles.\n";
		}
		else //if the value is anything else an error message will display
			cout << " !!! Program does not convert negative distance !!!" << endl;
	break;

	//If the user enters 3, then the weight converter will run
	//This will prompt the user to enter weight in kilograms, the value is initalized to the variable kilogram
	case WEIGHT_CONVERTER:
		cout << "\nPlease enter weight in Kilograms (such as 16.365): " << endl;
		cin >> kilograms;
		if (kilograms >= 0)//if kilograms is a number equal to or greater than 0, then kilograms will be converted to pounds
		{
			pounds = kilograms * 2.2;
			cout << fixed << showpoint << setprecision(1); //statement will display pounds with only one decimal place
			cout << "\nIt is " << pounds << " in pounds.\n";
		}
		else//if the value enter for kilograms is anything else, an error message will display
			cout << " !!! Program does not convert negative distance !!!" << endl;
	break;

	//If the user enters 4. then the programs ends
	case QUIT:
		cout << "Program ended." << endl;//prompts the user that the program ended
	break;

	//If the user enters any other value to be initialized to the variable number that is not 1-4
	//then the error message will display
	default: 
		cout << "You have entered an invalid input.\nPlease close the window and run the program again." << endl;
	break;
	}
	
	cout << "\n" << countryName << " sounds fun!!!" << endl; //Statement displays the country entered in the begining sounds fun

	// This section displays thank you message with programmer name, due date, and assignment number
	cout << "\nThank you for testing my program!";
	cout << "\nPROGRAMMER: " << PROGRAMMER_NAME << endl;
	cout << "CMSC 140 Common Project " << ASSIGNMENT_NUMBER << endl;
	cout << "Due Date : " << DUE_DATE << endl;


	return 0;
}
