#include<iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

// Global constants 
const int ARRAY_SIZE = 3;  // The number of elements in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number
int arrayRow1[ARRAY_SIZE],
arrayRow2[ARRAY_SIZE],
arrayRow3[ARRAY_SIZE];

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);

int main()
{

	int magicArray[ARRAY_SIZE],
		size = 3;
	char UserResponse;
	fillArray(arrayRow1, arrayRow2, arrayRow3, size);
	if (isMagicSquare(arrayRow1, arrayRow2, arrayRow3, size) == true)
		cout << "\nThis is a Lo Shu magic square\n";
	else
		cout << "This is not a Lo Shu magic square" << endl;
	cout << "Would you like to try again? (Y/N) " << endl;
	cin >> UserResponse;
		while (UserResponse == 'Y' || UserResponse == 'y')
		{
			fillArray(arrayRow1, arrayRow2, arrayRow3, size);
			showArray(arrayRow1, arrayRow2, arrayRow3, size);
			if (isMagicSquare(arrayRow1, arrayRow2, arrayRow3, size) == true)
				cout << "\nThis is a Lo Shu magic square\n";
			else
				cout << "This is not a Lo Shu magic square" << endl;
			cout << "Would you like to try again? (Y/N) " << endl;
			cin >> UserResponse;
		}
		if (UserResponse == 'N' || UserResponse == 'n')
			exit(0);

	
	/*
	cout << checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size);
	cout << checkColSum(arrayRow1, arrayRow2, arrayRow3, size);
	cout << checkRowSum(arrayRow1, arrayRow2, arrayRow3, size);
	cout << checkUnique(arrayRow1, arrayRow2, arrayRow3, size);
	cout << checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX);
	*/

	return 0;
}

bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	if (checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX) == true)
	{
		if (checkUnique(arrayRow1, arrayRow2, arrayRow3, size) == true)
		{
			if (checkRowSum(arrayRow1, arrayRow2, arrayRow3, size) == true)
			{
				if (checkColSum(arrayRow1, arrayRow2, arrayRow3, size) == true)
				{
					if (checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size) == true)
						return true;
					else return false;
				}
				else return false;
			}
			else return false;
		}
		else return false;
	}
	else return false;

}

bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
{
	if (arrayRow1[0] >= min && arrayRow1[0] <= max)
	{
		if (arrayRow1[1] >= min&& arrayRow1[1] <= max)
		{
			if (arrayRow1[2] >= min&& arrayRow1[2] <= max)
			{

				if (arrayRow2[0] >= min&& arrayRow2[0] <= max)
				{
					if (arrayRow2[1] >= min&& arrayRow2[1] <= max)
					{
						if (arrayRow2[2] >= min&& arrayRow2[2] <= max)
						{
							if (arrayRow3[0] >= min&& arrayRow3[0] <= max)
							{
								if (arrayRow3[1] >= min&& arrayRow3[1] <= max)
								{
									if (arrayRow3[2] >= min&& arrayRow3[2] <= max)
										return true;
									else return false;
								}
								else return false;
							}
							else return false;
						}
						else return false;
					}
					else return false;
				}
				else return false;
			}
			else return false;
		}
		else return false;
	}
	else return false;				
}

bool checkUnique(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	if (arrayRow1[0] != arrayRow1[1] && arrayRow1[1] != arrayRow1[2] && arrayRow1[2] != arrayrow2[0] && arrayrow2[0] != arrayrow2[1] && arrayrow2[1] != arrayrow2[2] &&
		arrayrow2[2] != arrayrow3[0] && arrayrow3[0] != arrayrow3[1] && arrayrow3[1] + arrayrow3[2])
		return true;
	else
		return false;
}


bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	int sumRow1 = arrayRow1[0] + arrayRow1[1] + arrayRow1[2];
	int sumRow2 = arrayrow2[0] + arrayrow2[1] + arrayrow2[2];
	int sumRow3 = arrayrow3[0] + arrayrow3[1] + arrayrow3[2];
	if (sumRow1 == 15 && sumRow2 == 15 && sumRow3 == 15)
		return true;
	else
		return false;
}

bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	int sumCol1 = arrayrow1[0] + arrayrow2[0] + arrayrow3[0];
	int sumCol2 = arrayrow1[1] + arrayrow2[1] + arrayrow3[1];
	int sumCol3 = arrayrow1[2] + arrayrow2[2] + arrayrow3[2];
	if (sumCol1 == 15 && sumCol2 == 15 && sumCol3 == 15)
		return true;
	else
		return false;

}

bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	if (arrayrow1[0] + arrayrow2[1] + arrayrow3[2] == 15)
	{
		if (arrayrow3[0] + arrayrow2[1] + arrayrow1[2] == 15)
			return true;
	}
	else
		return false;
}

void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
	//for loop to get user number into row 1
	for (int count = 0; count < size; count++)
	{
		cout << "Please enter row 1" << " column " << count + 1 << " number: ";
		cin >> arrayRow1[count];
	}

	//for loop to get user number into row 2
	for (int count = 0; count < size; count++)
	{
		cout << "Please enter row 2" << " column " << count + 1 << " number: ";
		cin >> arrayRow2[count];
	}
	//for loop to get user number into row 3
	for (int count = 0; count < size; count++)
	{
		cout << "Please enter row 2" << " column " << count + 1 << " number: ";
		cin >> arrayRow3[count];
	}
	showArray(arrayRow1, arrayRow2, arrayRow3, size);
}

void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
	//Displays numbers entered by user for row 1
	cout << setw(3);
	cout << setw(3) << arrayRow1[0] << setw(3) <<  arrayRow1[1] << setw(3) << arrayRow1[2] << endl;
	//Displays numbers entered by user for row 2
	cout << setw(3) << arrayRow2[0] << setw(3) << arrayRow2[1] << setw(3) << arrayRow2[2] << endl;
	//Displays numbers entered by user for row 3
	cout << setw(3) << arrayRow3[0] << setw(3) << arrayRow3[1] << setw(3) << arrayRow3[2] << endl;
}

