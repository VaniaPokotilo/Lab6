#include <iostream>
using namespace std;

struct Workers
{
	string name;
	int age;
	string work;
	int experience;
};

int main()
{
	Workers a;
	cout << "\tQuestionnaire" << endl << endl;

	cout << "Enter your name: ";
	cin >> a.name;

	cout << "Enter how old are you: ";
	cin >> a.age;

	cout << "Enter previous work: ";
	cin >> a.work;

	cout << "Enter how many years of experience: ";
	cin >> a.experience;

	cout << endl << endl;
	cout << "Your questionnaire has been submitted!" << endl << endl;

	cout << "Name: " << a.name << endl;
	cout << "Age: " << a.age << endl;
	cout << "Previous work: " << a.work << endl;
	cout << "experience: " << a.experience << endl << endl;

	cout << "We will write to you if you suit us." << endl;
}