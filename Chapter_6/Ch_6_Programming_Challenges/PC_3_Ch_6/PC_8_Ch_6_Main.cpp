//Coin Toss

#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

void coinToss();

int main()
{
	unsigned seed = time(0);
	srand(seed);

	int no_of_times;
	cout << "How many times the coin should be tossed? ";
	cin >> no_of_times;
	
	for (int count = 1; count <= no_of_times; count++)
	{
		cout << count << "\t";
		coinToss();
	}
	return 0;
}
void coinToss()
{
	int num;
	num = 1 + rand() % 2;
	if (num == 1)
	{
		cout << num << "\theads" << endl;
	}
	else if (num == 2)
	{
		cout << num << "\ttails" << endl;
	}
	
}
