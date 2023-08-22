#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//int values[] = { 2, 6, 10, 14 };

	//cout << values[2] << endl;
	//cout << ++values[0] << endl;
	//cout << values[1]++ << endl;
	//
	//int x = 2;
	//cout << values[++x];

	const int SIZE = 5;
	int time[SIZE] = { 1, 2, 3, 4, 5 },
		speed[SIZE] = { 18, 4, 27, 52, 100 },
		dist[SIZE];
	for (int count = 0; count < SIZE; count++)
		dist[count] = time[count] * speed[count];
	for (int count = 0; count < SIZE; count++)
	{
		cout << time[count] << " ";
		cout << speed[count] << " ";
		cout << dist[count] << endl;
	}
}
