//Pseudocode algorithm
/*
  Get the amount of sale.
  input in a variable named sale_amount.
  Get the amount of sales tax rate.
  input in a variale named sales_tax_rate.
  Calculate the amount of sales tax by multiplying the sale_amount with sales_tax_rate.
  Store the amount of sales tax is a variable named sales_tax_amount.
  Display the amount of sales tax.
  Calculate the total of the sale by adding the sale_amount to the sales_tax_amount.
  Store the amount of total sale in a variable named total_sale
  Display the total of the sale.
*/

#include<iostream>
using namespace std;

int main()
{
	double sale_amount;
	double sales_tax_rate;
	double sales_tax_amount;
	double total_sale;

	cout << "What is the sale amount? " << endl;
	cin >> sale_amount;

	cout << "What is the sales tax rate? " << endl;
	cin >> sales_tax_rate;

	/*sales_tax_amount = (sale_amount * sales_tax_rate)/100;*/
	sales_tax_amount = sale_amount * sales_tax_rate;
	cout << "The amount of sales tax is: " << sales_tax_amount << endl;

	total_sale = sale_amount + sales_tax_amount;
	cout << "The total of the sale is: " << total_sale << endl;

	return 0;
}