/*
 * Class: CMSC140 CRN 21714
 * Instructor: Greg Grinberg
 * Project<1>
 * Description: 
 The Department plans to purchase a humanoid robot. 
 The Chairman would like you to write a program to 
 show a greeting script the robot can use later. 
 Your first task is to use the following script to 
 prototype the robot for presentation:

**************** Robot Prototype Scripting ********************

Hello, welcome to Montgomery College! My name is Nao. May I have your name?
john Smith
Nice to have you with us today, john Smith!
Let me impress you with a small game.
Give me the age of an important person or a pet to you.
Please give me only a number:
2

You have entered 2.
 If this is for a person, the age can be expressed as:
 2 years
 or  24 months
 or about 720 days
 or about 17280 hours
 or about 1036800 minutes
 or about 62208000 seconds.
 If this is for a dog, it is 14 years old in human age.
 If this is for a gold fish, it is 10 years old in human age.

Let's play another game, john Smith. Give me a whole number.
4
Very well. Give me another whole number.
5
Using the operator '+' in C++, the result of 4 + 5 is 9.
Using the operator '/', the result of 4 / 5 is 0
however, the result of 4.0 / 5.0 is about 0.8.

Thank you for testing my program!!
PROGRAMMER: Tina Lee
CMSC140 Common Project 1
Due Date: 2/10/2019

 * Due Date: 09/30/2019
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Odalis Flores
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

	// This section will compute the age in human years, months, 
	// days, hours, minutes, seconds, in dog years and gold fish years.
	cout << "\nIf this is for a person, the age can be expressed as\n" << age * ONE_HUMAN_YEAR << " years.\n";	
	cout << "Or " << age * MONTHS_PER_YEAR <<" months.\n";
	cout << "Or about " << age * MONTHS_PER_YEAR * DAYS_PER_MONTH << " days.\n";
	cout << "Or about " << age * MONTHS_PER_YEAR * DAYS_PER_MONTH * HOURS_PER_DAY << " hours.\n";
	cout << "Or about " << age * MONTHS_PER_YEAR * DAYS_PER_MONTH * HOURS_PER_DAY * MINUTES_PER_HOUR << " minutes.\n";
	cout << "Or about " << fixed << age * MONTHS_PER_YEAR * DAYS_PER_MONTH * HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE << " seconds.\n";
	cout << "If this is for a dog, it is " << age * ONE_DOG_YEAR << " years in human age.\n";
	cout << "If this is for a gold fish, it is " << age * ONE_GOLDFISH_YEAR << " years in human age.\n";

	// This section will ask the visitor for 2 whole numbers
	// and it will compute operations for addition and division
	// for the division section this program will cast different data type
	// to compute and display decimal point output
	cout << "\n\nLet's play another game, " << visitorName << ". Give me a whole number." << endl;
	cin >> number1;
	cout << "Very well. Give me another whole number." << endl;
	cin >> number2;
	cout << "Using the operator '+' in C++, the result of " << number1 << " + " << number2 << " is " << number1 + number2 << endl;
	cout << "Using the operator '/', the result of " << number1 << " / " << number2 << " is " << number1 / number2 << endl;
	cout << fixed << setprecision(1) << showpoint;
	cout << "However, the result of " << number1 << " / " << number2 << " is about ";
	cout << static_cast<double>(number1) / static_cast<double>(number2) << endl;

	// This section displays thank you message with programmer name, due date, and assignment
	cout << "\nThank you for testing my program!! " << endl;
	cout << "\nPROGRAMMER: " << PROGRAMMER_NAME << endl;
	cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
	cout << "Due Date : " << DUE_DATE << endl;

	return 0;
}