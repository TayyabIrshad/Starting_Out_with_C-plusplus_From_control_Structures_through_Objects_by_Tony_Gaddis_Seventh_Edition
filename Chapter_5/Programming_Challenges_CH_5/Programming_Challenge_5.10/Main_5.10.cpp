//Average Rainfall

#include<iostream>
using namespace std;

//Example Program 5-14.
/*int main()
{
	int num_of_students;
	int num_of_test_scores;
	int average;

	cout << "How many number of students are there: ";
	cin >> num_of_students;

	cout << "How many number of test scores are there per student: ";
	cin >> num_of_test_scores;
	cout << endl;

	for (int student = 1; student <= num_of_students; student++)
	{
		int total = 0;
		for (int test = 1; test <= num_of_test_scores; test++)
		{
			double score;
			cout << "How many scores does the student "<<student<< " have in test " << test << " : ";
			cin >> score;
			cout << endl;
			total += score;
		}
		cout << "Total score is: " << total << endl;
		average = total / num_of_test_scores;
		cout << "Average scores of student " << student << " are: " << average << endl << endl;
	}
	return 0;
}*/

int main()
{
	int total_months;
	int no_of_years;
	int no_of_months = 12;
	float total_rainfall = 0;
	double average_rainfall;

	cout << "Enter the number of years: ";
	cin >> no_of_years;
	cout << endl;

	while (no_of_years < 1)
	{
		cout << "Error! Number of years is not acceptable!" << endl;
		cout << "Enter the valid number of years!" << endl;
		cout << "\nEnter the number of years: ";
		cin >> no_of_years;
		cout << endl;
	}

	for (int year = 1; year <= no_of_years; year++)
	{
		float rainfall_per_year = 0;
		for (int month = 1; month <= no_of_months; month++)
		{
			float rainfall_amount;
			cout << "Enter the amount of rainfall for year " << year 
				<< " in inches this for month " << month <<": ";
			cin >> rainfall_amount;
			rainfall_per_year += rainfall_amount;
		}
		total_rainfall += rainfall_per_year;

		cout << "Rainfall for year " << year << " is: " << rainfall_per_year << endl;
		cout << "Total rainfall is: " << total_rainfall << endl;
	}
	total_months = no_of_months * no_of_years;
	average_rainfall = total_rainfall / total_months;
	cout << "Total number of months are: " << total_months << endl;
	cout << "The average rainfall per month for the entire period is: " << average_rainfall << endl;
	return 0;
}