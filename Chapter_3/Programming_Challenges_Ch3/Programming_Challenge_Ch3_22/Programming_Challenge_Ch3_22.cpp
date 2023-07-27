// Word Game

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	string age;
	string city;
	string college;
	string profession;
	string animal;
	string pet_name;

	cout << "What is your name? " << endl;
	getline(cin, name);

	cout << "What is your age? " << endl;
	getline(cin, age);

	cout << "Where do you live?" << endl;
	getline(cin, city);

	cout << "Which college you went?" << endl;
	getline(cin, college);

	cout << "What is your profrssion?" << endl;
	getline(cin, profession);

	cout << "What animal do you have as a pet" << endl;
	getline(cin, animal);

	cout << "What is name of your pet?" << endl;
	getline(cin, pet_name);
	cout << endl << endl;

	cout << "There once was a person named " << name
		<<" who lived in " << city <<". "
		<<"At the age of " << age <<", "
		<< name <<" went to college at " << college <<". "
	    << name <<" graduated and went to work as a " << profession <<". "
		<< "Then, " << name <<" adopted a " << animal
		<<" named " << pet_name << ". " 
		<< "They both lived happily ever after!" << endl;

	return 0;
}