/*How Many Widgets?*/
#include<iostream>
using namespace std;

int main()
{
	float widgets_weigh = 9.2;
	int widgets_stacked;
	float pallet_weigh_itself;
	float pallet_weigh_with_widgets;
	/*float pallet_total_weight;*/
	float widgets_total_weigh_on_pallet;

	cout << "How much the pallet weigh by itself: ";
	cin >> pallet_weigh_itself;

	cout << "How much the pallet weigh with the widgets stacked on it: ";
	cin >> pallet_weigh_with_widgets;

	//pallet_total_weight = pallet_weigh_itself + pallet_weigh_with_widgets;
	//cout << "The total weigh of pallet is: " << pallet_total_weight << endl;

	widgets_total_weigh_on_pallet = pallet_weigh_with_widgets - pallet_weigh_itself;
	cout << "Widgets total weigh on pallet is: " << widgets_total_weigh_on_pallet <<" pounds" << endl;

	widgets_stacked = widgets_total_weigh_on_pallet / widgets_weigh;
	cout << "Number of widgets stacked on a pallet based on the total weigh of pallet are: " << widgets_stacked << endl;

	return 0;
}