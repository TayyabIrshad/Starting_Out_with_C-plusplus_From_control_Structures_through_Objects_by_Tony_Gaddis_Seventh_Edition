//Fat Gram Calculator

#include<iostream>
using namespace std;

int main()
{
	float total_calories;
	float calories_from_fat;
	float fat_grams;
	float calories_percentage;
	float min_calories_percentage = 30;

	cout << "How many number of calories are there in a food? " << endl;
	cin >> total_calories;

	cout << "How many fat grams are there in a food?" << endl;
	cin >> fat_grams;

	if (total_calories >= 0 && fat_grams >= 0)
	{
		calories_from_fat = fat_grams * 9;
		calories_percentage = (calories_from_fat / total_calories) * 100;

		if(calories_from_fat < total_calories)
		{ 
			if (calories_percentage < min_calories_percentage)
				
			{
				cout << "Calories Percentage is: " << calories_percentage << endl;
				cout << "Food is low fat!";
			}
			else
			{
				cout << "Calories Percentage is: " << calories_percentage << endl;
				cout << "Food is high fat";
			}
		}
		else
		{
			cout << "Either the calories or fat grams were incorrectly entered!" << endl;
		}
	}
	else
	{
		cout << "Invalid input!" << endl;
	}
	return 0;
}