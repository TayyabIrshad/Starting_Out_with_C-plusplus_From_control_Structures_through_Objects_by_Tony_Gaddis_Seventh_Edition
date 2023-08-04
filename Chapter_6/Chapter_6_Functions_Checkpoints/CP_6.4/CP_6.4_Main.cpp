#include <iostream>
using namespace std;

//void qualify()
//{
//	cout << "This applicant qualifies for the card and the interest rate will be 12%!\n";
//}
//void noQualify()
//{
//	cout << "This applicant does not qualifies for the card!\n";
//}
//int main()
//{
//	double salary;
//	int years;
//	double annual_interest = 0.12;
//	double total_interest;
//	cout << "This program will determine if you qualify\n";
//	cout << "for our credit card.\n";
//	cout << "What is your annual salary? ";
//	cin >> salary;
//	cout << "How many years have you worked at your ";
//	cout << "current job? ";
//	cin >> years;
//	if (salary >= 17000.0 && years >= 2)
//	{
//		cout << "You meet the reqirements! ";
//		qualify();
//		total_interest = (salary * annual_interest) * years;
//		cout << "\nAccording to your salary and serving years the total interest will be: " << total_interest << endl;
//	}
//	else
//	{
//		noQualify();
//		cout<<"To qualify, you must have worked on your current job" 
//			<< " for at least two years and make at least $17, 000 per year";
//	}
//	return 0;
//}

void qualify(int, double, double, double);
void noQualify();

int main()
{
	double salary_1;
	int years_1;
	double annual_interest_1 = 0.12;
	double total_interest_1 = 0;
	cout << "This program will determine if you qualify\n";
	cout << "for our credit card.\n";
	cout << "What is your annual salary? ";
	cin >> salary_1;
	cout << "How many years have you worked at your ";
	cout << "current job? ";
	cin >> years_1;
	if (salary_1 >= 17000.0 && years_1 >= 2)
	{
		cout << "You meet the reqirements! ";
		qualify(years_1, salary_1, annual_interest_1, total_interest_1);
		
	}
	else
	{
		noQualify();
		cout << "To qualify, you must have worked on your current job"
			<< " for at least two years and make at least $17, 000 per year";
	}
	return 0;
}

	void qualify(int years, double salary, double annual_interest, double total_interest)
	{
		cout << "This applicant qualifies for the card and the interest rate will be 12%!\n";
		total_interest = (salary * annual_interest) * years;
		cout << "\nAccording to your salary and serving years the total interest will be: " << total_interest << endl;
	}
	void noQualify()
	{
		cout << "This applicant does not qualifies for the card!\n";
	}
	
