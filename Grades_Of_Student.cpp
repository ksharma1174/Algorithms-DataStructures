// Grades_Of_Student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

 
int main()
{
	int maths;
	int physics;
	int chemistry;
	int english;
	int hindi;
	int total;
	float percentage;
	total = 0;
	percentage = 0.0;

	
	cout << "Please Enter math marks";
	cin >> maths;
	cout << "Please Enter physics marks";
	cin >> physics;
	cout << "Please Enter chemistry marks";
	cin >> chemistry;
	cout << "Please Enter english marks";
	cin >> english;
	cout << "Please Enter hindi marks";
	cin >> hindi;
	if (maths > 100 || physics > 100 || chemistry > 100 || english > 100 || hindi > 100) {
		cout << "Please enter valid values";
		return 0;
	}
	
	total = maths + physics + chemistry + english + hindi;
	percentage = (total * 100.0) / 500.0;

	cout << "The sum is:" << total << endl;

	cout << "The percentage is:" << percentage << "%" << endl;

	if (percentage < 33) {
		cout << "Student has failed" << endl;
	}
	if (percentage > 33 && percentage < 60) {
		cout << "Student has D Grade" << endl;
	}
	if (percentage > 60 && percentage < 75) {
		cout << "Student has C Grade" << endl;
	}
	if (percentage > 75 && percentage < 80) {
		cout << "Student has B Grade" << endl;
	}
	if (percentage > 80 && percentage < 95) {
		cout << "Student has A Grade" << endl;
	}
	if (percentage > 95) {
		cout << "Student has A+ Grade" << endl;
	}
	
	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
