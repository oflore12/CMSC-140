#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()

{
	const int SINGLE_RATE = 60, 
		DOUBLE_RATE = 75, 
		KING_RATE = 100, 
		SUITE_RATE = 150,
		MAX_ROOMS = 30,
		MIN_ROOMS = 1,
		MAX_FLOORS = 5,
		MIN_FLOORS = 1;

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
		absoluteSumOfRooms;

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
			cout << "\nEnter the number of floors for the hotel: ";
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
		// adds the amounts of single,double, king,suite rooms

		if (totalNumberOfOccupiedRooms <= numberOfRooms)
		{
			totalNumberOfSingleRooms += numberOfSingleRooms;
			totalNumberOfDoubleRooms += numberOfDoubleRooms;
			totalNumberOfKingRooms += numberOfKingRooms;
			totalNumberOfSuiteRooms += numberOfSuiteRooms;
			totalNumberOfHotelRooms += numberOfRooms;
		}




		//validate number of rooms input
		while (totalNumberOfOccupiedRooms > numberOfRooms)
		{
			//error message
			cout << "ERROR, the total number of occupied rooms exceeds the number of rooms on the floor"
				<< "\nPlease try again!\n";
			//prompt user to enter number of rooms in hotel 
			for (int floorNum = 1; floorNum <= numberOfFloors; floorNum++)
			{
				cout << "\nEnter the total number of rooms in floor # " << floorNum << ": ";
				cin >> numberOfRooms;

				while (numberOfRooms < MIN_ROOMS || numberOfRooms> MAX_ROOMS)
				{
					cout << "Number of rooms should be between 1 and 30 !!, please try again\n";
					cout << "\nEnter the number of floors for the hotel: ";
					cin >> numberOfRooms;
				}

				cout << "How many single rooms are occupied in floor # " << floorNum << ": ";
				cin >> numberOfSingleRooms;
				cout << "How many double rooms are occupied in floor # " << floorNum << ": ";
				cin >> numberOfDoubleRooms;
				cout << "How many king rooms are occupied in floor # " << floorNum << ": ";
				cin >> numberOfKingRooms;
				cout << "How many suite rooms are occupied in floor # " << floorNum << ": ";
				cin >> numberOfSuiteRooms;
				totalNumberOfOccupiedRooms = numberOfSingleRooms + numberOfDoubleRooms + numberOfKingRooms + numberOfSuiteRooms;

				if (totalNumberOfOccupiedRooms <= numberOfRooms)
				{
					totalNumberOfSingleRooms += numberOfSingleRooms;
					totalNumberOfDoubleRooms += numberOfDoubleRooms;
					totalNumberOfKingRooms += numberOfKingRooms;
					totalNumberOfSuiteRooms += numberOfSuiteRooms;
					totalNumberOfHotelRooms += numberOfRooms;
				}
			}

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
	hotelIncome = (static_cast<double>(totalNumberOfSingleRooms) * SINGLE_RATE) + (static_cast<double>(totalNumberOfDoubleRooms) * DOUBLE_RATE)
		+ (static_cast<double>(totalNumberOfKingRooms) * KING_RATE) + (static_cast<double>(totalNumberOfSuiteRooms)* SUITE_RATE);
	cout << setw(40) << "Hotel Income: " << setw(40) << fixed << setprecision(2) << hotelIncome << endl;

	//displays total rooms
	absoluteSumOfRooms = totalNumberOfSingleRooms + totalNumberOfDoubleRooms + totalNumberOfKingRooms
		+ totalNumberOfSuiteRooms + totalNumberOfHotelRooms;
	cout << setw(40) << "Total # of rooms: " <<  setw(40) << absoluteSumOfRooms << endl;
	
	//calculates and displays total occupied rooms
	absoluteNumberOfOccupiedRooms = totalNumberOfSingleRooms + totalNumberOfDoubleRooms + totalNumberOfKingRooms + totalNumberOfSuiteRooms;
	cout << setw(40) << "Total number of Occupied rooms: " << setw(40) << absoluteNumberOfOccupiedRooms << endl;

	//displays total number of unoccupied rooms
	cout << setw(40) << "Total # of unoccupied rooms " << setw(40) << (totalNumberOfHotelRooms- absoluteNumberOfOccupiedRooms) << endl;
	

	//displays occupancy rate
	occupancyRate = ((static_cast<double>(absoluteNumberOfOccupiedRooms) / static_cast<double>(totalNumberOfHotelRooms)) * 100);
	cout << setw(40) << "Occupancy rate:  " << fixed << setw(40) << setprecision(2) << occupancyRate << "%" << endl;

	//displays the floor with the least amount of occupied room

	return 0;
	}


