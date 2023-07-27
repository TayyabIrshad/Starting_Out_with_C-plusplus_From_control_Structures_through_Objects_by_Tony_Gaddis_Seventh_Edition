// Personal Best

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	string date1, date2, date3;
	float vault_height_1, vault_height_2, vault_height_3;

	cout << "What is the name of the paul vaulter?" << endl;
	getline(cin, name);

	cout << "Enter the dates of vault:" << endl;
	getline(cin, date1);
	getline(cin, date2);
	getline(cin, date3);

	cout << "What are the three best vault heights. Write in meteres: " << endl;
	cin >> vault_height_1 >> vault_height_2 >> vault_height_3;

	if (vault_height_1 && vault_height_2 && vault_height_3 > 2)
	{
		if (vault_height_1 && vault_height_2 && vault_height_3 < 5)
		{
			if (vault_height_1 > vault_height_2 && vault_height_1 > vault_height_3)
			{
				cout << "On the date " << date1 << " this vault was made and its height was " << vault_height_1
					<<" and this is the first best!" << endl;
				if (vault_height_2 > vault_height_3)
				{
					cout << "On the date " << date2 << " this vault was made and its height was " << vault_height_2
						<< " and this is the second best!" << endl;
					cout << "On the date " << date3 << " this vault was made and its height was " << vault_height_3
						<< " and this is the third best!" << endl;
				}
				else
				{
					cout << "On the date " << date3 << " this vault was made and its height was " << vault_height_3
						<< " and this is the second best!" << endl;
					cout << "On the date " << date2 << " this vault was made and its height was " << vault_height_2
						<< " and this is the third best!" << endl;
				}
			}
			else if (vault_height_2 > vault_height_3 && vault_height_2 > vault_height_1)
			{
				cout << "On the date " << date2 << " this vault was made and its height was " << vault_height_2
					<< " and this was the first best!" << endl;
				if (vault_height_3 > vault_height_1)
				{
					cout << "On the date " << date3 << " this vault was made and its height was " << vault_height_3
						<< " and this is the second best!" << endl;
					cout << "On the date " << date1 << " this vault was made and its height was " << vault_height_1
						<< " and this is the third best!" << endl;
				}
				else
				{
					cout << "On the date " << date1 << " this vault was made and its height was " << vault_height_1
						<< " and this is the second best!" << endl;
					cout << "On the date " << date3 << " this vault was made and its height was " << vault_height_3
						<< " and this is the third best!" << endl;
				}
			}
			else if (vault_height_3 > vault_height_1 && vault_height_3 > vault_height_2)
			{
				cout << "On the date " << date3 << " this vault was made and its height was " << vault_height_3
					<< " and this was the first best!" << endl;
				if (vault_height_1 > vault_height_2)
				{
					cout << "On the date " << date1 << " this vault was made and its height was " << vault_height_1
						<< " and this is the second best!" << endl;
					cout << "On the date " << date2 << " this vault was made and its height was " << vault_height_2
						<< " and this is the third best!" << endl;
				}
				else
				{
					cout << "On the date " << date2 << " this vault was made and its height was " << vault_height_2
						<< " and this is the second best!" << endl;
					cout << "On the date " << date1 << " this vault was made and its height was " << vault_height_1
						<< " and this is the third best!" << endl;
				}
			}
		}
		else
		{
			cout << "Vault height is not valid!" << endl;
		}
	}
	else
	{
		cout << "Vault height is not valid!" << endl;
	}
	return 0;
}