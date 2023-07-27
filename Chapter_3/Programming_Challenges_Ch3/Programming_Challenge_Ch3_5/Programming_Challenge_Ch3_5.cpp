/*Box Office*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	double gross_profit;
	double net_profit;
	string movie_name;
	double adult_tickets_sold;
	double child_tickets_sold;
	double adult_ticket_price = 6.00;
	double child_ticket_price = 3.00;
	double adult_tickets_income;
	double child_tickets_income;
	double theater_percent;
	double amount_paid_to_distributor;

	cout << "What is the name of the movie? " << endl;
	getline(cin, movie_name);

	cout << "How many adult tickets were sold? " << endl;
	cin >> adult_tickets_sold;
	
	adult_tickets_income = adult_tickets_sold * adult_ticket_price;
	/*cout << "Adult Tickets income: " << adult_tickets_income << endl << endl;*/

	cout << "How many child tickets were sold? " << endl;
	cin >> child_tickets_sold;
	
	child_tickets_income = child_tickets_sold * child_ticket_price;
	/*cout << "Child Tickets income: " << child_tickets_income << endl << endl;*/

	gross_profit = adult_tickets_income + child_tickets_income;
	
	cout << "How much the theater keeps of the gross box office profit in percent? " << endl;
	cin >> theater_percent;

	net_profit = (gross_profit * theater_percent) / 100;
	

	amount_paid_to_distributor = gross_profit - net_profit;
	
	cout << setprecision(2) << fixed;
	cout << "Movie Name:" << setw(46) << movie_name << endl;
	cout << "Adult Tickets Sold:" << setw(30) << adult_tickets_sold << endl;
	cout << "Child Tickets Sold:" << setw(30) << child_tickets_sold << endl;
	cout << "Gross Box Office Profit: " << setw(17) << "$ " << gross_profit << endl;
	cout << "Net Box Office Profit: " << setw(20) << "$  " << net_profit << endl;
	cout << "Amount paid to distributor: " << setw(14) << "$ " << amount_paid_to_distributor << endl;

	return 0;
}