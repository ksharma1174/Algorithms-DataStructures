//Made By: Karan Sharma

//Copying an Array to another

//iostream library intialized
#include <iostream>
using namespace std;
//Main class
int main(){
    //An integer data type size created
     int size;

     //Output statement
    cout<<"Please Enter Size";

    //Input the size
    cin>>size;

    //Creating an array with the inputted size
    int ar[size];

    //Doing the same for the following array as done for "ar[]" array
    int num[size];

    //Inputting elements from user into "ar[]" array
    for(int i=0; i<size; i++)
        {
        cin>> ar[i];


        }
        cout<<"The elements of the first array before the copy:"<<endl;

        //Displaying elements of the "ar[]" array
        for(int k=0; k<size; k++)
        {
                cout<<ar[k]<<" ";

        }
        //Copying the elements of "ar[]" array into "num[]" array
        for(int i=0; i<size; i++)
        {
            num[i]=ar[i];
        }
        cout<<endl<<endl<<"The elements of the second array After the Copy:"<<endl;

        //Displaying contents of "num[]" array
        for(int s=0; s<size; s++)
        {
            cout<<num[s]<<" ";

        }

                return 0;


        }







