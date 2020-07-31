// Swap_Number(!using 3rd).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Standered namespace library
using namespace std;
//Main class
int main()
{
    //Creating null values num1 & num2 with integer data type
    int num1,num2;
    //Output Statement
    cout << "Before swap" << endl;
    cout << "Enter num1";
    //Input num1 from user
    cin >> num1;
    cout << "Enter num2";
    //Input num2 from user
    cin >> num2;
    //Assigning num1 as sum of num1 and num2
    num1 = num1 + num2;
    //Assigning num2 the remaining number after subtracting num2 from num1(Which is num2=num1)
    num2 = num1 - num2;
    //Assigning num1 the remaining number after subtracting the new value of num2 from num1(Which is num1=num2)
    num1 = num1 - num2;


    //Printing out new num1 & num2
    cout <<endl<<"After Swap"<<endl<<"num1="<< num1<<endl <<"num2="<<num2;
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
