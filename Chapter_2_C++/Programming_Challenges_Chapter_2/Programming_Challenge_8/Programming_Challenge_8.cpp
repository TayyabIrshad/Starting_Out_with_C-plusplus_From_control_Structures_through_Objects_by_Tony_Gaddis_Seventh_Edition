//Total Purchase

#include<iostream>
using namespace std;

int main()
{
	double item_1 = 12.95;
	double item_2 = 24.95;
	double item_3 = 6.95;
	double item_4 = 14.95;
	double item_5 = 3.95;
	double subtotal = 0;
	double sales_tax_percent = 6;
	double sales_tax_amount = 0;
	double total_bill = 0;

	//subtotal for all items
	subtotal = item_1 + item_2 + item_3 + item_4 + item_5;

	//sales tax amount on all items collectively
	sales_tax_amount = sales_tax_percent / 100 * subtotal;

	//total bill including sales tax
	total_bill = subtotal + sales_tax_amount;

	cout << "Price of item 1 is: " << item_1 << endl
		 << "Price of item 2 is: " << item_2 << endl
		 << "Price of item 3 is: " << item_3 << endl
		 << "Price of item 4 is: " << item_4 << endl
		 << "Price of item 5 is: " << item_5 << endl << endl;

	cout << "The subtotal of the sale is: " << subtotal << endl;
	cout <<"The amount of sales tax is: " << sales_tax_amount << endl;
	cout << "The total is: " << total_bill << endl;
	
}