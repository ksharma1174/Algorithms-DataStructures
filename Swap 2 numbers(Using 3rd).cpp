// Swap 2 numbers(Using 3rd).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Main class 
int main()
{
    //Output Statement
    cout << "Before Swap"<<endl;
    //Creating variables a,b and temporary variable "temp" and intilizing temp variable all have integer data type
    int a, b, temp = 0;
    //Output statement
    cout << "Input a";
    //Input statement from user
    cin >> a;
    cout << "Input b";
    cin >> b;
    //Assigning temp variable to a so now value of a is assignined to temp
    temp = a;
    //Assigning value of b to as a is empty and hence the value of b is now assigned to a
    a = b;
    //Assigning the value of temp(which was originally value of a) to b hence now b is value of a 
    b = temp;
    //Output the new values of a & b
    cout << "After Swap" << endl << "a=" << a << endl << "b=" << b;
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
