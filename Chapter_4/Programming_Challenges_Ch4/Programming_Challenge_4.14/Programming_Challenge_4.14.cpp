//Running the Race

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string NAME_1, NAME_2, NAME_3;
	float time_1, time_2, time_3;

	cout << "Enter the names of three runners! " << endl;
	getline(cin, NAME_1);
	getline(cin, NAME_2);
	getline(cin, NAME_3);

	cout << "How much time they took to finish the race!" << endl;
	cin >> time_1 >> time_2 >> time_3;

	cout << "Time took by " << NAME_1 << " to finish the race is: " << time_1 << " seconds" << endl
		<< "Time took by " << NAME_2 << " to finish the race is: " << time_2 << " seconds" << endl
		<< "Time took by " << NAME_3 << " to finish the race is: " << time_3 << " seconds" << endl;

	if (time_1 && time_2 && time_3 <= 0)
	{
		cout << "Invalid time!" << endl;
	}
	else
	{
		if (time_1 < time_2 && time_1 < time_3)
		{
			cout << NAME_1 << " holds the first position!" << endl;
			if (time_2 < time_3)
			{
				cout << NAME_2 << " holds the second position!" << endl;
				cout << NAME_3 << " holds the third position!" << endl;
			}
			else
			{
				cout << NAME_3 << " holds the second position!" << endl;
				cout << NAME_2 << " holds the third position!" << endl;
			}
		}
		else if (time_2 < time_1 && time_2 < time_3)
		{
			cout << NAME_2 << " holds the first position!" << endl;
			if (time_1 < time_3)
			{
				cout << NAME_3 << " holds the second position!" << endl;
				cout << NAME_1 << " holds the third position!" << endl;
			}
			else
			{
				cout << NAME_1 << " holds the second position!" << endl;
				cout << NAME_3 << " holds the third position!" << endl;
			}
		}
		else if (time_3 < time_2 && time_3 < time_1)
		{
			cout << NAME_3 << " holds the first position!" << endl;
			if (time_2 < time_1)
			{
				cout << NAME_2 << " holds the second position!" << endl;
				cout << NAME_1 << " holds the third position!" << endl;
			}
			else
			{
				cout << NAME_1 << " holds the second position!" << endl;
				cout << NAME_2 << " holds the third position!" << endl;
			}
		}
	}

	return 0;
}







	//if(time_1&&time_2&&time_3>0)
	//{ 
	//	if (time_1 < time_2 && time_1 < time_3)
	//	{
	//		cout << NAME_1 << " Holds first position!" << endl;
	//	}
	//	else if (time_2 < time_3 && time_2 > time_1)
	//		{
	//			cout << NAME_2 << " Holds the second position!" << endl;
	//			cout << NAME_3 << "Holds the third position! " << endl;
	//		}
	//	}
	//	else if (time_2 < time_1 && time_2 < time_3)
	//	{
	//		cout << NAME_2 << " Holds first position!" << endl;
	//	}
	//	else if (time_1 < time_3 && time_1 > time_2)
	//		{
	//			cout << NAME_1 << " Holds the second position!" << endl;
	//			cout << NAME_3 << "Holds the third position! " << endl;
	//		}
	//	else if (time_3 < time_2 && time_3 < time_1)
	//	{
	//		cout << NAME_3 << " Holds first position!" << endl;
	//	}
	//		else if (time_3 < time_1 && time_3 > time_2)
	//		{
	//			cout << NAME_1 << " Holds the second position!" << endl;
	//			cout << NAME_2 << "Holds the third position! " << endl;
	//		}
	//else
	//{
	//	cout << "Invalid Time!" << endl;
	//}