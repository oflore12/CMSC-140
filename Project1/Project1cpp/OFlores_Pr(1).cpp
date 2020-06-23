/*
 * Class: CMSC 140 CRN 21714
 * Instructor: Greg Grinberg
 * Project<1>
 * Description: 
 The Department plans to purchase a humanoid robot. 
 The Chairman would like you to write a program to 
 show a greeting script the robot can use later. 
 Your first task is to use the following script 
 to prototype the robot for presentation:
 

 * Pseudocode or Algorithm for the program:
	(be sure to indent items with control structure)
	(need to match flow chart submitted in documentation)
	1.	Declare all variables
	2.	Display welcoming message
	3.	Ask for visitor name
	4.	Get visitors name
	5.	Ask for an age
	6.	Get age
	7.	Times age by human age
	8.	Display human age
	9.	Times age by months per year
	10.	Display months
	11.	Times age by months per year and days per month
	12.	Display days
	13.	Times age by months per year and days per month and hours per day
	14.	Display hours
	15.	Times age by months per year and days per month and hours per day and minutes per hour
	16.	Display hours
	17.	Times age by months per year and days per month and hours per day and minutes per hour and seconds per minute
	18.	Display seconds
	19.	Times age with one dog year
	20.	Display dog years in human form
	21.	Times age with one goldfish year
	22.	Display goldfish years in human form
	23.	Ask visitor for a whole number
	24.	Ask for another whole number
	25.	Add both numbers and display
	26.	Divide both numbers and display
	27.	Now cast both numbers and display decimal form
	28.	Divide casted numbers and display result to 1 decimal place
	29. Thank visitor, display programmer name, class and project with assignment number, and due date
	
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main ()

{
	string visitorName,
		robotName = "Nao" ;
	const string PROGRAMMER_NAME = "Odalis Flores",
		DUE_DATE = "09/30/2019";
	int age,
		number1, 
		number2;
	const double ONE_DOG_YEAR = 7,
		DAYS_PER_MONTH = 30,
		ONE_GOLDFISH_YEAR = 5,
		ONE_HUMAN_YEAR = 1,
		MONTHS_PER_YEAR = 12,
		HOURS_PER_DAY = 24,
		MINUTES_PER_HOUR = 60,
		SECONDS_PER_MINUTE = 60,
		ASSIGNMENT_NUMBER = 1;

	// The following section will display introduction message to visitor, and will ask for an age input.
	cout << "Hello, welcome to Montgomery College! My name is " <<  robotName << ". May I have your name?" << endl;
	getline(cin, visitorName);
	cout << "Nice to have you with us today, " << visitorName <<"!"<< endl;
	cout << "Let me impress you with a small game. " << endl;
	cout << "Give me the age of an important person or a pet to you. \nPlease give me only a number: " << endl;
	cin >> age;
	cout << "\nYou have entered " << age << ".";

	cout << fixed << setprecision(0);
	cout << "\nIf this is for a person, the age can be expressed as\n" << age * ONE_HUMAN_YEAR << " years.\n";	//displays human years
	cout << "Or " << age * MONTHS_PER_YEAR <<" months.\n"; //displays # of months equivalent to age
	cout << "Or about " << age * MONTHS_PER_YEAR * DAYS_PER_MONTH << " days.\n"; // displays # of days equvilent to age
	cout << "Or about " << age * MONTHS_PER_YEAR * DAYS_PER_MONTH * HOURS_PER_DAY << " hours.\n"; // displays # of hours equvilent to age
	cout << "Or about " << age * MONTHS_PER_YEAR * DAYS_PER_MONTH * HOURS_PER_DAY * MINUTES_PER_HOUR << " minutes.\n"; // displays # of minutes equvilent to age
	cout << "Or about " << age * MONTHS_PER_YEAR * DAYS_PER_MONTH * HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE << " seconds.\n"; // displays # of seconds equvilent to age
	cout << "If this is for a dog, it is " << age * ONE_DOG_YEAR << " years in human age.\n"; // displays # of dog years equvilent to human age
	cout << "If this is for a gold fish, it is " << age * ONE_GOLDFISH_YEAR << " years in human age.\n"; // displays # of goldfish years equvilent to human age

	
	cout << "\n\nLet's play another game, " << visitorName << ". Give me a whole number." << endl;
	cin >> number1; // gets first whole number from visitor
	cout << "Very well. Give me another whole number." << endl;
	cin >> number2; // gets second whole number from visitor
	cout << "Using the operator '+' in C++, the result of " << number1 << " + " << number2 << " is " << number1 + number2 << endl; // uses addition operand to add both whole numbers
	cout << "Using the operator '/', the result of " << number1 << " / " << number2 << " is " << number1 / number2 << endl; //  uses division operand to divide both whole number
	cout << setprecision(1);
	cout << "However, the result of " << static_cast<double>(number1)<< " / " << static_cast<double>(number2) << " is about "; // displays whole numbers in decimal point
	cout << static_cast<double>(number1)/ static_cast<double>(number2) << endl; // uses division operand on casted numbers to display a decimal value rounded to the tenth decimal place

	// This section displays thank you message with programmer name, due date, and assignment
	cout << "\nThank you for testing my program!! " << endl;
	cout << "\nPROGRAMMER: " << PROGRAMMER_NAME << endl;
	cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
	cout << "Due Date : " << DUE_DATE << endl;

	return 0;
}