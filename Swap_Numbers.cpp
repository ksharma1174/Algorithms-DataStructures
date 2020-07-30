// Swap_Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Standerd namespace library
using namespace std;
//Main class 
int main()
{
   //Creating a null variable num
    int num;
    //Output statement
    cout << "Input num";
    //Input from user 
    cin >> num;
    //Creating null intger variable rev
    int rev;
    //Intilizing rev variable 
    rev = 0;
    //While loop to keep running usntil condition proven false
    while (num > 0) {
        //Here rev is multiplied by 10 so that every value that is added is incremented by a value of 10 after each iteration and % operator is used to get last number of after every iteration
        rev = rev * 10 + num % 10;
        //This is to get the remaining digits of num after the remainder(last number is pulled out)
        num = num / 10;
    }
    //Output the final reversed number 
    cout << "The reversed num is" << rev;
    
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
