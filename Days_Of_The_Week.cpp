// Days_Of_The_Week.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int i;
	cout << "Please enter a number";
	cin >> i;
	switch (i) {
	case 1: 
		cout << "Its Monday";
		break;
	case 2:
		cout << "Its Tuesday";
		break;
	case 3:
		cout << "Its Wednesday";
		break;
	case 4:
		cout << "Its Thursday";
		break;
	case 5:
		cout << "Its Friday";
		break;
	case 6:
		cout << "Its Saturday";
		break;
	case 7:
		cout << "Its Sunday";
		break;

	default:
		cout << "Please enter a number between 1-7";
		break;
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
