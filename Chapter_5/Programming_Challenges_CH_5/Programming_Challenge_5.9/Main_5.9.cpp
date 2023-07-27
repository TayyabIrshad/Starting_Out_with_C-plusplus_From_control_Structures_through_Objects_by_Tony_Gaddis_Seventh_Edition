//Hotel Occupancy

#include<iostream>
using namespace std;

int main()
{
	int total_floors;
	int total_hotel_rooms = 0;
	int total_occupied_rooms = 0 ;
	double occupied_rooms_percentage;
	int unoccupied_rooms;

	cout << "How many floors the hotel has? ";
	cin >> total_floors;

	while (total_floors < 1)
	{
		cout << "Error! Number of floors are not accetable! " << endl;
		cout << "How many floors the hotel has? ";
		cin >> total_floors;
	}
	
	for (int floor = 1; floor <= total_floors; floor++)
	{
		int floor_rooms;
		int occupied_rooms;

		cout << "How many number of rooms are there on " << floor <<" floor? ";
		cin >> floor_rooms;

		while (floor_rooms < 10)
		{
			cout << "Error! Number of floor rooms are not accetable! " << endl;
			cout << "How many number of rooms are there on " << floor << " floor? ";
			cin >> floor_rooms;
		}
		total_hotel_rooms += floor_rooms;

		cout << "How many rooms are occupied on this floor? ";
		cin >> occupied_rooms;
		total_occupied_rooms += occupied_rooms;
	}

	cout << endl;

	unoccupied_rooms = total_hotel_rooms - total_occupied_rooms;
	occupied_rooms_percentage = total_occupied_rooms * 100;
	occupied_rooms_percentage /= total_hotel_rooms;

	/*cout << "floor" << "\t" << "floor_rooms" << "\t" << "occupied_rooms" << endl;*/

	cout << "The total rooms the hotel has: " <<total_hotel_rooms<< endl;
	cout << "Occupied rooms: " << total_occupied_rooms << endl;
	cout << "Unoccupied rooms: " << unoccupied_rooms << endl;
	cout << "Percentage of rooms that are occupied: " << occupied_rooms_percentage << endl;

	//percentage=occupied rooms/the number of rooms.

	return 0;
}