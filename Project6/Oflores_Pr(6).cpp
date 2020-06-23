/*
 * Class: CS 140
 * Instructor: Greg Grinberg
 * Description: Dentist bill, 
 * Due: 12/19/2019
 * I pledge that I have completed the programming assignment  independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Odalis R. Flores
1.	State function prototype for totalCharges that accepts two arguments
2.	State function prototype for totalCharges that accepts three arguments
3.	Start main function
4.	Declare text file output name
5.	Declare constant string variables
a.	Programmer name = odalis flores
b.	Due date 12/19/2019
6.	Declare constant integer for assignment number = 6
7.	Declare a string variable names textFile
8.	Declare double variables for
	a.	Member
	b.	serviceCharges
	c.	testCharges
	d.	medicineCharges
	e.	totalBill
9.	display header: Dentist Bill Program
10.	prompt user to enter name of output file
11.	get textFile name
12.	open the text file and name it textFile
13.	prompt user to enter a 1 if they are a member and anything else if they are not
14.	get member
15.	start if statement
	a.	if member is equal to 1
		i.	prompt user to enter amount of service charges
		ii.	get service charges
		iii.	prompt user to enter amount of test charges
		iv.	get test charges
		v.	call function totalCharges that accepts two arguments and pass 
		service charges and test charges, initialize the function to variable totalBill
	b.	else
		i.	prompt user to enter amount of service charges
		ii.	get service charges
		iii.	prompt user to enter amount of test charges
		iv.	get test charges
		v.	prompt user to enter medicine charges
		vi.	get medicine charges
		vii.	call function totalCharges that accepts three arguments 
		and pass service charges, test charges, and medicine charges. 
		initialize the function to variable totalBill
16.	start if statement
	a.	if output file fails
		i.	display error message
	b.	else
		i.	display total bill
		ii.	display processing complete
		iii.	display programmer name
		iv.	project number
		v.	and due date
			1.	in file
			2.	display total bill
			3.	display processing complete
			4.	display programmer name
		vi.	close the file
17.	end main function

18.	start function definition for totalCharges
	a.	accepts two arguments of double data type
	b.	adds the arguments and stores in variable totalBill
	c.	return totalBill
19.	start function definition for totalCharges
	a.	accepts three arguments of double data type
	b.	adds the arguments and stores in variable totalBill
	c.	return totalBill

*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
//function prototypes
double totalCharges(double service, double test);
double totalCharges(double service, double test, double medicine);

int main()
{
	//text file out stream variable.
	ofstream fout;
	//constant variable for programmer name and due date
	string const PROGRAMMER_NAME = "Odalis R. Flores", DUE_DATE = "12/19/2019";
	//constant integer for assignment number
	const int ASSIGNMENT_NUMBER = 6;
	//string variable to hold text file and
	string textFile;
	//double variables for members, service, test, and medicine charges, total bill
	double member, 
		serviceCharge, 
		testCharges,
		medicineCharges, 
		totalBill;
	//program header
	cout << "Dentist Bill Program" << endl;
	//prompt user to enter name of text file
	cout << "Please enter output file name\n";
	//get text file name
	getline(cin, textFile);
	//open the file with the user text file name
	fout.open(textFile);
	//prompt user to enter 1 if its a member or any other number if not
	cout << "Please input a (1) if you are a member of the dental plan \nInput any other number if you are not\n";
	//get number
	cin >> member;
	//if statement begins
	if (member == 1)
	{
		//if member is equal to one asked for service and test charges and call for function that allows two arguments
		cout << "Please input the service charge:" << endl;
		cin >> serviceCharge;
		cout << "Please input the test charges:" << endl;
		cin >> testCharges;
		totalBill = totalCharges(serviceCharge, testCharges);
	}
	else
	{
		//else ask for service, test, and medicine charges and call for function that allows three arguments to its parameter
		cout << "Please input the service charge:" << endl;
		cin >> serviceCharge;
		cout << "Please input the test charges:" << endl;
		cin >> testCharges;
		cout << "Please input the medicine charges:" << endl;
		cin >> medicineCharges;
		totalBill=totalCharges(serviceCharge, testCharges, medicineCharges);
	}
	//test if the file opens
	//if it fails the print error message
	//if else then send out total bill to file and state that processing is complete with programmer name
	//also display the message on the screen
	if (fout.fail())
	{
		cout << "\n!!!ERRROR OPENING FILE!!!\n";
		exit(0);
	}
	else
	{
		fout << "The total bill is $";
		fout << fixed << setprecision(2) << totalBill;
		fout << "\n*Processing Complete*\n";
		fout << "Programmer: " << PROGRAMMER_NAME;
	
		
		cout << "The total bill is $";
		cout << fixed << setprecision(2) << totalBill;
		cout << "\n*Processing Complete*\n";
		cout << "Thank you for testing my program!";
		cout << "\nPROGRAMMER: " << PROGRAMMER_NAME << endl;
		cout << "CMSC 140 Common Project " << ASSIGNMENT_NUMBER << endl;
		cout << "Due Date : " << DUE_DATE << endl;
		fout.close();
	}
	return 0;
}
/*************************************************************************************
function definition for totalCharges (overloaded funtion)
this function accepts two arguments of double data type
the serive and test varaibles are added and stored in totalBill
the function returns totalBill of double data type
*************************************************************************************/
double totalCharges(double service, double test)
{
	double totalBill = service +test;
	return (totalBill);
}
/*************************************************************************************
function definition for totalCharges (overloaded funtion)
this function accepts three arguments of double data type
the serive, test and medicine varaibles are added and stored in totalBill
the function returns totalBill of double data type
*************************************************************************************/
double totalCharges(double service, double test, double medicine )
{
	double totalBill = service+ test + medicine;
	return (totalBill);

}
