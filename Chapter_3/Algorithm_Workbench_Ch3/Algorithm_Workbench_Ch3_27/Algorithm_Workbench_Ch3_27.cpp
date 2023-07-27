/*
  Get three inputs of golfer's scores in three games
  Calulate the average of scores by adding them and then dividing the result after adding with the number of scores which in this case is 3.
  Display the average of the three scores
*/



#include<iostream>
using namespace std;

int main()
{
	int score1, score2, score3;
	int no_of_scores = 3;
	double average;

	cout << "Enter the scores: " << endl;

	cout << "Score 1 is: ";
	cin >> score1;

	cout << "Score 2 is: ";
	cin >> score2;

	cout << "Score 3 is: ";
	cin >> score3;

	/*average = (score1 + score2 + score3) / no_of_scores;*/
	average = score1 + score2 + score3;
	/*average = average / no_of_scores;*/
	average /= no_of_scores;
	cout << "The average of three scores is: " << average << endl;

	return 0;
}