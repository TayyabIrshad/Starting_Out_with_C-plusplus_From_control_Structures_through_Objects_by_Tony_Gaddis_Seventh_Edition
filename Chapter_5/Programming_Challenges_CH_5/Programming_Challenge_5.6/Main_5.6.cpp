//Distance Traveled

#include<iostream>
using namespace std;

int main()
{
	//int speed;
	//int time;
	//int distance;

	//cout << "What is the speed of the vehicle in mph? ";
	//cin >> speed;

	//cout << "How many hours has it travelled? ";
	//cin >> time;

	//while (speed < 0 || time < 1)
	//{
	//	cout << "Negative value for speed & Value less than 1 for time travelled is not acceptable!" << endl;

	//	cout << "What is the speed of the vehicle in mph? ";
	//	cin >> speed;

	//	cout << "How many hours has it travelled? ";
	//	cin >> time;
	//}


	//cout << "Hours\t" << "Distance Travelled\n"
	//	<< "--------------------------------\n";
	//

	//for (int hour = 1; hour <= time; hour++)
	//{
	//	distance = hour * speed;
	//	/*cout << "Distance travelled is: " << distance << " mph!" << endl;*/
	//	cout << hour << "\t\t" << distance << endl;
	//}

	int speed;
	int max_time;
	int min_time = 1;
	int distance;

	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;

	cout << "How many hours has it travelled? ";
	cin >> max_time;

	while (speed < 0 || max_time < 1)
	{
		cout << "Negative value for speed & Value less than 1 for time travelled is not acceptable!" << endl;

		cout << "What is the speed of the vehicle in mph? ";
		cin >> speed;

		cout << "How many hours has it travelled? ";
		cin >> max_time;
	}

	cout << "Hours\t" << "Distance Travelled\n"
		<< "--------------------------------\n";
	for (int time = min_time; time <= max_time; time++)
	{
		distance = speed * time;
		cout << time << "\t\t" << distance << endl;
	}
	return 0;
}