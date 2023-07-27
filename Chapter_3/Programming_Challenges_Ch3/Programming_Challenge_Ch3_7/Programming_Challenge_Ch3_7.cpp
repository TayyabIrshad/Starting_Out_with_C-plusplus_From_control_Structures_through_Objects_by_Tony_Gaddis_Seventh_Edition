/*How Many Calories?*/

#include<iostream>
using namespace std;

int main()
{
	int no_of_cookies = 40;
	int total_servings = 10;
	int no_of_cookies_per_serving;
	int calories_per_serving = 300;
	int calories_per_cookie;
	int cookies_intake;
	int calories_intake;

	cout << "How many cookies you had? " <<endl;
	cin >> cookies_intake;

	no_of_cookies_per_serving = no_of_cookies / total_servings;
	/*cout << "Number of cookies per serving are: " << no_of_cookies_per_serving << endl;*/
	calories_per_cookie = calories_per_serving / no_of_cookies_per_serving;
	/*cout << "Number of calories per cookie are: " << calories_per_cookie << endl;*/
	calories_intake = cookies_intake * calories_per_cookie;

	cout << "You cosumed " << calories_intake << " calories in total." << endl;

	return 0;
}