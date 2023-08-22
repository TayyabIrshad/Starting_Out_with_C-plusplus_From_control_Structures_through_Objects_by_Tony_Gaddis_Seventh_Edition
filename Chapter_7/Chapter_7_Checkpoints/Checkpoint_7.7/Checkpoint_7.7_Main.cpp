
//CP_7.7

#include<iostream>
using namespace std;

int main()
{
	const int NUM_FISH = 20;
	int fish[NUM_FISH];
	int total = 0;
	for (int count = 0; count < 20; count++)
	{
		cout << "How many fich were caught by fisher man " << count + 1 << "?  " ;
		cin >> fish[count];
		total += fish[count];
	}
	cout << total;
	
	return 0;
}