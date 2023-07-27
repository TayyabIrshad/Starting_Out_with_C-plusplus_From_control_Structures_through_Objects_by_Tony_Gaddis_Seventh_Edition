//Stock Transaction Program

#include<iostream>
using namespace std;

int main()
{
	int no_of_shares = 1000;
	double purchase_price_per_share = 32.87;
	double commission_perentage = 2;
	double total_purchase_cost;
	double purchase_commission_amount_paid;
	double sell_commissionn_amount_paid;
	double total_commission_paid;
	double total_earning;
	double earning_after_total_commission_paid;
	double purchase_cost_after_commission_paid;
	double selling_income_after_commission_paid;

	double sell_price_per_share = 33.92;
	double total_selling_income;

	total_purchase_cost = no_of_shares * purchase_price_per_share;
	purchase_commission_amount_paid = total_purchase_cost * commission_perentage / 100;

	total_selling_income = no_of_shares * sell_price_per_share;
	sell_commissionn_amount_paid = total_selling_income * commission_perentage / 100;

	total_commission_paid = purchase_commission_amount_paid + sell_commissionn_amount_paid;
	total_earning = total_selling_income - total_purchase_cost;
	earning_after_total_commission_paid = total_earning - total_commission_paid;
	

	cout << "The amount of money Joe paid for the stock: $" << total_purchase_cost << endl;
	cout << "The amount of commission Joe paid on purchasing the stock to his stock broker: $" << purchase_commission_amount_paid << endl;
	cout << "Joe sold the stock for: $" << total_selling_income << endl;
	cout << "The amount of commission Joe paid on selling the stock to his stock broker: $" << sell_commissionn_amount_paid << endl;
	cout << "Total commission paid: " << total_commission_paid << endl;
	cout << "Total earning without paying commission: " << total_earning << endl;
	cout << "The amount of profit Joe made after selling his stock and paying two commissions to his broker: " << earning_after_total_commission_paid << endl;

	return 0;
}