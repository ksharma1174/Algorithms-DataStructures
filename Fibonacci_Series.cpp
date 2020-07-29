// Fibonacci_Series.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Made By Karan Sharma

#include <iostream>
using namespace std;
//Main class
int main()
{
	//Intilizing integer values
	int n1 = 0, n2 = 1, nextvalue, elements;
	//Output statement
	cout << "Enter the number of elements to be printed";
	//Input Statment from user
	cin >> elements;
	//Output the first two values hardcoded
	cout << n1 <<" " << n2;
	//for loop
	for (int i = 2; i <= elements; i++) {
		//Add the values of n1 and n2 after each iteration and store in nextvalue
		nextvalue = n1 + n2;
		//Print value of nextvalue after each iteration
		cout <<" " <<nextvalue<<" ";
		//Make n1 value n2 after each iteration
		n1 = n2;
		//make value of nextvalue to n2 after each iteration
		n2 = nextvalue;
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
