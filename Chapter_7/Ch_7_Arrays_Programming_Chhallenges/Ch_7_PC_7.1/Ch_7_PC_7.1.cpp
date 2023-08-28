//Largest/Smallest Array Values

#include<iostream>
using namespace std;

//int main()
//{
//	const int values = 10;
//	int arr[values];
//	int highest, lowest;
//
//	cout << "Enter the values! " << endl;
//	for (int count = 0; count < values; count++)
//	{
//		cin >> arr[count];
//	}
//
//	highest = arr[0];
//	for (int count = 0; count < values; count++)
//	{
//		if (arr[count] > highest)
//		{
//			highest = arr[count];
//		}
//	}
//	cout << "Highest value is: " << highest << endl;
//
//	lowest = arr[0];
//	for (int count = 0; count < values; count++)
//	{
//		if (arr[count] < lowest)
//		{
//			lowest = arr[count];
//		}
//	}
//	cout << "Lowest value is: " << lowest;
//}


//Arrays Comparison

int main()
{
	const int size = 5;
	int arr1[size];
	int arr2[size];
	bool arrayequal = true;

	cout << "Enter the values in Array 1: " << endl;
	for (int count = 0; count < size; count++)
	{
		cin >> arr1[count];
	}
	cout << "Enter the values in Array 2: " << endl;
	for (int count = 0; count < size; count++)
	{
		cin >> arr2[count];
	}

	for (int count = 0; count < size; count++)
	{
		cout << "Array 1 values are: " << arr1[count] << endl;
	}
	cout << endl;
	for (int count = 0; count < size; count++)
	{
		cout << "Array 2 values are: " << arr2[count] << endl;
	}

	//for (int count = 0; count < size; count++)
	//{
	//	if (arr1[count] != arr2[count])
	//	{
	//		arrayequal = false;
	//		cout << "Arrays are not equal. " << endl;
	//	}
	//	else
	//	{
	//		cout << "Arrays are equal. " << endl;
	//	}
	//}

	int count = 0;
	while (arrayequal && count < size)
	{
		if (arr1[count] != arr2[count])
		{
			arrayequal = false;
		}
		
		count++;
	}
	if (arrayequal)
	{
		cout << "Arrays are equal. " << endl;
	}
	else
		cout << "Arrays are not equal. " << endl;
}