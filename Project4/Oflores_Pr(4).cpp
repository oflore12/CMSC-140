/*
 * Class: CMSC 140
 * Instructor: Greg Grinberg
 * Description: (Give a brief description for each Program)
 * Platform/Compiler: Visual Studio
 * Due: MM/DD/YYYY (<11/18/2019>)
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Odalis Flores
1.	Start
2.	Declare functions
	a.	numOfEmployees();
	b.	totDaysAbsent(int);
	c.	averageAbsent(double, double);
3.	declare text file ofstream fout;
4.	start main function
	a.	declare variables
		i.	 numberOfEmployees
		ii.	sumOfnumOfAbsentDays
		iii.	 average;
		iv.	PROGRAMMER_NAME = "Odalis R. Flores";
		v.	DUE_DATE= "11/18/2019";
		vi.	ASSIGNMENT_NUMBER = 4;
		vii.	userName;
	b.	display program description = Calculate the average number of days a company's employees are absent
	c.	prompt user to enter user ful name
	d.	get user full name
	e.	Open text file "EmployeeAbsent.txt"
	f.	Display header "EMPLOYEE ABSENT REPORT
	 employee ID: 		days absent:"
	g.	Call for function numOfEmployees and initialize return value to variable numberOfEmployees
	h.	Call for function totDaysAbsent with parameter set to numberOfEmployees and initialize return value to variable sumOfnumOfAbsentDays
	i.	Call for function averageAbsent with parameter set to numberOfEmployees and sumOfnumOfAbsentDays, inialize to variable average
	j.	Display �the numberOfEmployees number of employees were absent a total of sumOfnumOfAbsentDays. In text file "EmployeeAbsent.txt"
	k.	Display �the average of absent days is average� in text file "EmployeeAbsent.txt"
	l.	Display �Programmer: PROGRAMMER_NAME�
	m.	Close text file PROGRAMMER_NAME =
	n.	Display the users full name
	o.	Display thank you message: include
		i.	Programmer name
		ii.	Project number
		iii.	Due date
5.	Define function numOfEmployees() with no parameter
	a.	Declare variable x
	b.	Prompt user to enter number of employees
	c.	Get number and store in variable x
		i.	While x is less than 1
			1.	ERROR MESSAGE
			2.	Prompt user to enter number of employees
			3.	Get number and store in variable x
			4.	Repeat as long as while expression is true
	d.	Return value of variable x
6.	Define function totDaysAbsent(int z) with parameter of data type integer and argument z
	a.	Declare variables
		i.	employeeID
		ii.	numOfAbsentDays
		iii.	sumOfnumOfAbsentDays initialize to value 0
	b.	start for loop, for int = count, if count is less than or equal to z, increment count
		i.	prompt user to enter 4-digit
		ii.	ID number for employee
		iii.	get employeeID
		iv.	display employeeID in text file "EmployeeAbsent.txt"
		v.	Enter the number of absent days for employee #
		vi.	Get numOfAbsentDays
			1.	While numOfAbsentDays is less than 0
				a.	ERROR MESSAGE
				b.	Enter the number of absent days for employee #
				c.	Get numOfAbsentDays
				d.	Repeat as long as while expression is true
		vii.	Display numOfAbsentDays in text file "EmployeeAbsent.txt"
		viii.	Add the sum of numOfAbsentDays and initialize to variable sumOfnumOfAbsentDays
		ix.	Return value of sumOfnumOfAbsentDays
7.	Define function double averageAbsent with parameters with two arguments a, b of data type double
	a.	Declare variable for averageOfAbs
	b.	Calculate b divided by a and initialize value to variable averageOfAbs
	c.	Return the value of variable averageOfAbs
8.	End
*/


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

//Function prototype declaration
int numOfEmployees();
//Function prototype declaration
int totDaysAbsent(int);
//Function prototype declaration
double averageAbsent(double, double);
//text file output name declaration
ofstream fout;

int main()
{
	//variable declaration for number of employees, total absent days, average of absent days
	double numberOfEmployees;
	double TotalAbsentDays;
	double averageAbsentDays;
	const string PROGRAMMER_NAME = "Odalis R. Flores", DUE_DATE= "11/18/2019";
    const int ASSIGNMENT_NUMBER = 4;
    string userName;

	//display program description
	cout << "Calculate the average number of days a company's employees are absent." << endl<< endl;
	//prompt user to enter user name
	cout << "Please enter user full name: " << endl;
	getline(cin, userName);

	//open text file Employee Absenses
	fout.open("employeeAbsenses.txt");
	//display header for file
	fout << "EMPLOYEE ABSENSE REPORT" << endl;
	fout << setw(15) << left << "employee ID:"<< setw(15) <<"days absent:" << endl;

	//call for function numOfEmployees() and initalize return value to variable numberOfEmployees
	numberOfEmployees = numOfEmployees();
    
	//call for function totDaysAbsent with parameter set to numberOfEmployees, initializing return value to variable TotalAbsentDays
	TotalAbsentDays = totDaysAbsent(numberOfEmployees);

	//call for function averageAbsent with parameter set to numberOfEmployees and TotalAbsentDays, initializing return value to averageAbsentDays
	averageAbsentDays = averageAbsent(numberOfEmployees, TotalAbsentDays);

	//display message in text file Employee Absenses that shows the number of number Of Employees and to total absent days.
	//the average number of days absent 
	//and the programmer name
	fout << "\nThe " << numberOfEmployees << " employees were absent a total of " << TotalAbsentDays << " days." << endl;
	fout << "The average mumber of days absent is " << fixed << showpoint << setprecision(1) << averageAbsentDays << " days." << endl;
	fout << "Programmer : " << PROGRAMMER_NAME << endl;

	//close  text file Employee Absenses
	fout.close();
    
    // This section displays thank you message with programmer name, due date, and assignment number
	cout << "User full name : "<< userName << endl;
    cout << "Thank you for testing my program!";
    cout << "\nPROGRAMMER: " << PROGRAMMER_NAME << endl;
    cout << "CMSC 140 Common Project " << ASSIGNMENT_NUMBER << endl;
    cout << "Due Date : " << DUE_DATE << endl;
	return 0;
}


//**********************************************************
// Definition of numOfEmployees. 
// The parameter not identified in this function
// in function the user will be asked to enter the number of employee.
//**********************************************************
int numOfEmployees() 
{
	//declaration of variable num of employees
	int numOfEmployees;

	//prompt user to enter the number of employees
	cout << "Please enter the number of employees in the company:" << endl;
	//get number of employees
	cin >> numOfEmployees;
	//validating while loop, if number of employees is less than 1 is true repeat loop
	while (numOfEmployees < 1)
	{
		cout << "!! The number of employees has to be 1 or greater, please try again" << endl;
		cout << "Please re-enter the number of employees in the company:" << endl;
		cin >> numOfEmployees;
	}
	//return the value of number of employees
	return numOfEmployees;
}

//**********************************************************
// Definition of totDaysAbsent. 
// The parameter is the integar value of argument numOfEmployees
// in function the user will be asked to enter the employee ID
// and the employee's number of absent days as long at absent days
// is not less than 0. This information will also be saved into the text file 
// named EmployeeAbsenses. This will repeat in accordance to the 
// argurment passed in the parameter. The number of absent days is then
// added together and the value of the total sum is returned 
//**********************************************************
int totDaysAbsent(int numOfEmployees)
{
	//variable declaration for employee ID and absent days
	int employeeID, numOfAbsentDays;
	//variable declaration and initialization for total sum of absent days
	double sumOfNumOfAbsentDays = 0;
	//begining of for loop, as long as num is less than or equal to the argument is true loop will continue
	for (int num = 1; num <= numOfEmployees; num++)
	{
		//prompt user to enter employee ID
		cout << "Please enter the 4-digit empolyee ID for employee # " << num << endl;
		//get employee ID
		cin >> employeeID;
		//display employee ID in text file EmployeeAbsenses 
		fout << setw(15) << left << employeeID;

		//prompt user to enter number of absent days for employee
		cout << "Please enter the number of days employee # " << num << " was absent" << endl;
		//get number of absent days
		cin >> numOfAbsentDays;
		//validate input, if number of absent days is less than 0 is true continue loop
		while (numOfAbsentDays < 0)
		{
			cout << "!!The number of absent days has to be positive, please try again" << endl;
			cout << "Please re-enter the number of days employee # " << num << " was absent" << endl;
			cin >> numOfAbsentDays;
		}
		//display the number for absent days in  text file EmployeeAbsenses
		fout << setw(15) << numOfAbsentDays << endl;
		//calculate the total sum of absent day
		sumOfNumOfAbsentDays += numOfAbsentDays;
	}
	// return the value of the total sum of absent day
	return sumOfNumOfAbsentDays;
}
		
//**********************************************************
// Definition of averageAbsent. 
// The parameter is the data type double for argument numOfEmployee
// and TotalAbsentDays
// in function the average of the second argument divided by 
// the first argument is calculated and value is returned.
//**********************************************************	
double averageAbsent(double numOfEmployee, double TotalAbsentDays)
{
	//variable declaration for average absent days
	double averageOfAbsentDays;
	//calculation for average is 2nd argument / 1st argument
	averageOfAbsentDays = TotalAbsentDays / numOfEmployee;
	//value of variable is returned
	return averageOfAbsentDays;
}
