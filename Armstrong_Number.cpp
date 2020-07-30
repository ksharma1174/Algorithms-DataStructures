// Armstrong_Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Main function
int main() {
	//Intilizing int type sum
	int sum = 0;
	//Taking int type n 
	int n;
	//taking int type r
	int r;
	//Output statement
	cout << "Please enter value of n" << endl;
	//User input 
	cin >> n;
	//While loop to keep iterating until condition is proven false
	while (n != 0) {
		//Using r as a container to hold the last digit of each number
		r = n % 10;
		//cubing each digit and incrementing to sum
		sum = sum + (r*r*r);
		cout << n % 10 << "^3 +" << " ";
		//Getting the first digits of number using divison
		n = n / 10;

	}
	//Output the final sum
	cout << endl << sum;

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
