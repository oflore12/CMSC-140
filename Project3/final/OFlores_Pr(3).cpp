
/*
 * Class: CMSC140 CRN
 * Instructor: Greg Grinberg
 * Project<3>
 * Description:
 The BlueMont chain hotels have 4 different types of room: 

Single room: $60/night
Double room: $75/night
King room:   $100/night
Suite room: $150/night
 
The size of the hotel chains in different locations may be different in terms of the number of floors and the type and the number of rooms on each floor. 

You are required to write a program that calculates the occupancy rate and the total hotel income for one night and displays this information as well as some other information described below. 
The program starts by asking the location where this hotel chain is located and the number of floors in the hotel. The number of floors may not exceed 5.  The User then enters the total number of rooms for each floor. The program then asks specifically the number of occupied rooms for each room type on this floor. The total number of rooms on each floor may not exceed 30 and the program should check that the total number of occupied rooms on each floor does not exceed the total of rooms on that floor. 

After the information is entered for each floor, the program calculates the following:

- Hotel income (based on the room type and its rate),
- The total number of occupied rooms,
- Total number of the uncopied rooms,
- The rate of occupancy,
- Floor number with the minimum number of rooms. (Assume no two floors have the same number of rooms).
- A message to improve the occupancy rate for the occupancy rate of less than 60%.
- Programmer’s full name
- Project number
- Project due date

 * Due Date: 11/04/2019
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Odalis Flores
*/



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	//declare and initial constant variables with the rates for room type and max/min for rooms/floors
	const int SINGLE_RATE = 60,
		DOUBLE_RATE = 75,
		KING_RATE = 100,
		SUITE_RATE = 150,
		MAX_ROOMS = 30,
		MIN_ROOMS = 1,
		MAX_FLOORS = 5,
		MIN_FLOORS = 1,
		ASSIGNMENT_NUMBER = 3; // declaring assingment number
	const string
		PROGRAMMER_NAME = "Odalis Flores", // declaring constant string for programmer name and due date
		DUE_DATE = "11/04/2019";

	string hotelLocation;

	int numberOfFloors,
		numberOfRooms,
		numberOfSingleRooms,
		numberOfDoubleRooms,
		numberOfKingRooms,
		numberOfSuiteRooms,
		totalNumberOfOccupiedRooms,
		totalNumberOfSingleRooms = 0,
		totalNumberOfDoubleRooms = 0,
		totalNumberOfKingRooms = 0,
		totalNumberOfSuiteRooms = 0,
		totalNumberOfHotelRooms = 0,
		absoluteNumberOfOccupiedRooms,
		lowestNumberOfRooms,
		lowestRoomFloor;

	double hotelIncome,
		occupancyRate;


	//displays BlueMont Hotel header
	for (int x = 1; x < 50; x++)
		cout << "==";
	cout << endl;
	cout << "\t\tBlueMont Hotel\n";
	for (int x = 1; x < 50; x++)
		cout << "==";
	cout << endl;
	//prompt user to enter hotel location
	cout << "Enter the location of this hotel chain: ";
	getline(cin, hotelLocation);

	//prompt user for number of floors in hotel
	cout << "\nEnter the number of floors in the hotel: ";
	cin >> numberOfFloors;
	//validate number of floors entered by user
	while (numberOfFloors < MIN_FLOORS || numberOfFloors > MAX_FLOORS)
	{
		cout << "Number of floors should be between 1 and 5 !!, please try again\n";
		cout << "\nEnter the number of floors for the hotel: ";
		cin >> numberOfFloors;
	}

	//prompt user to enter number of rooms in hotel 
	for (int floorNum = 1; floorNum <= numberOfFloors; floorNum++)
	{
		cout << "\nEnter the total number of rooms in floor # " << floorNum << ": ";
		cin >> numberOfRooms;

		while (numberOfRooms < MIN_ROOMS || numberOfRooms> MAX_ROOMS)
		{
			cout << "Number of rooms should be between 1 and 30 !!, please try again\n";
			cout << "\nEnter the total number of rooms in floor # " << floorNum << ": ";
			cin >> numberOfRooms;
		}
		cout << "How many single rooms are occupied in floor # " << floorNum << ": ";
		cin >> numberOfSingleRooms;
		cout << "How many double rooms are occupied in floor #  " << floorNum << ": ";
		cin >> numberOfDoubleRooms;
		cout << "How many king rooms are occupied in floor # " << floorNum << ": ";
		cin >> numberOfKingRooms;
		cout << "How many suite rooms are occupied in floor # " << floorNum << ": ";
		cin >> numberOfSuiteRooms;
		//calculates the total number of rooms occupied in this floor
		totalNumberOfOccupiedRooms = numberOfSingleRooms + numberOfDoubleRooms + numberOfKingRooms + numberOfSuiteRooms;
		//validate number of rooms input

		while (totalNumberOfOccupiedRooms > numberOfRooms)
		{
			//error message
			cout << "ERROR, the total number of occupied rooms exceeds the number of rooms on the floor"
				<< "\nPlease try again!\n";
			//prompt user to enter number of rooms in hotel 
			{
				cout << "\nEnter the total number of rooms in floor # " << floorNum << ": ";
				cin >> numberOfRooms;
				//gets number of single, double,king, and suite rooms per floor
				cout << "How many single rooms are occupied in floor # " << floorNum << ": ";
				cin >> numberOfSingleRooms;
				cout << "How many double rooms are occupied in floor # " << floorNum << ": ";
				cin >> numberOfDoubleRooms;
				cout << "How many king rooms are occupied in floor # " << floorNum << ": ";
				cin >> numberOfKingRooms;
				cout << "How many suite rooms are occupied in floor # " << floorNum << ": ";
				cin >> numberOfSuiteRooms;
				//calculates the total number of rooms occupied in this floor
				totalNumberOfOccupiedRooms = numberOfSingleRooms + numberOfDoubleRooms + numberOfKingRooms + numberOfSuiteRooms;

			}
		}
	
	// adds the amounts of single,double, king,suite rooms
	totalNumberOfSingleRooms += numberOfSingleRooms;
	totalNumberOfDoubleRooms += numberOfDoubleRooms;
	totalNumberOfKingRooms += numberOfKingRooms;
	totalNumberOfSuiteRooms += numberOfSuiteRooms;
	totalNumberOfHotelRooms += numberOfRooms;
	//if statement that compares the total occupied rooms to the lowest number
	if (floorNum >= 1)
	{
		lowestRoomFloor = totalNumberOfOccupiedRooms;
		lowestRoomFloor = floorNum;
		lowestNumberOfRooms = numberOfRooms;
	}
	else
	{
		if (totalNumberOfOccupiedRooms < lowestRoomFloor)
			lowestRoomFloor = floorNum;
		lowestNumberOfRooms = numberOfRooms;
	}
	}


		// displays room rates
		for (int x = 1; x < 50; x++)
			cout << "==";
		cout << endl;
		cout << "\t\t\tBlueMont Hotel located at " << hotelLocation << endl;
		for (int x = 1; x < 50; x++)
			cout << "==";
		cout << endl;
		cout << "\t\tToday's Room Rates <US $/ night>" << endl;
		cout << setw(15) << "Single Room" << setw(15) << "Double Room" << setw(15) << "King Room" << setw(15) << "Suite Room" << endl
			<< setw(15) << SINGLE_RATE << setw(15) << DOUBLE_RATE << setw(15) << KING_RATE << setw(15) << SUITE_RATE << endl;
		for (int x = 1; x < 50; x++)
			cout << "==";
		cout << endl;


		//calculate and display hotel income
		hotelIncome = (static_cast<double>(totalNumberOfSingleRooms)* SINGLE_RATE) + (static_cast<double>(totalNumberOfDoubleRooms)* DOUBLE_RATE)
			+ (static_cast<double>(totalNumberOfKingRooms)* KING_RATE) + (static_cast<double>(totalNumberOfSuiteRooms)* SUITE_RATE);
		cout << setw(40) << "Hotel Income: " << setw(40) << fixed << setprecision(2) <<"$" << hotelIncome << endl;

		//displays total rooms
		cout << setw(40) << "Total # of rooms: " << setw(40) << totalNumberOfHotelRooms << endl;

		//calculates and displays total occupied rooms
		absoluteNumberOfOccupiedRooms = totalNumberOfSingleRooms + totalNumberOfDoubleRooms + totalNumberOfKingRooms + totalNumberOfSuiteRooms;
		cout << setw(40) << "Total number of Occupied rooms: " << setw(40) << absoluteNumberOfOccupiedRooms << endl;

		//displays total number of unoccupied rooms
		cout << setw(40) << "Total # of unoccupied rooms: " << setw(40) << (totalNumberOfHotelRooms - absoluteNumberOfOccupiedRooms) << endl;


		//displays occupancy rate
		occupancyRate = ((static_cast<double>(absoluteNumberOfOccupiedRooms) / static_cast<double>(totalNumberOfHotelRooms)) * 100);
		cout << setw(40) << "Occupancy rate:  " << fixed << setw(40) << setprecision(2) << occupancyRate << "%" << endl;

		//displays the floor with the least amount of rooms and room amount if occupancy rate is less than 60%
		if (occupancyRate < 60.0)
		{
			cout << "\n\nYou need to improve the occupancy rate. Floor # " << lowestRoomFloor << " with "
				<<lowestNumberOfRooms<<" rooms has the least number of rooms." << endl;
		}


		// This section displays thank you message with programmer name, due date, and assignment number
		cout << "\nThank you for testing my program!";
		cout << "\nPROGRAMMER: " << PROGRAMMER_NAME << endl;
		cout << "CMSC 140 Common Project " << ASSIGNMENT_NUMBER << endl;
		cout << "Due Date : " << DUE_DATE << endl;
	
	return 0;
	}


