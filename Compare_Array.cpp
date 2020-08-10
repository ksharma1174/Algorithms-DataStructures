//Made By: Karan Sharma
//Compare the elements of one array to another

//Basic iostream library/directory
#include <iostream>
//Using the namespace standered library
using namespace std;
//Main class
int main(){
    //Creating integer data type varaiable called size
    int size;
    //Output statement
    cout<<"Enter Size";
    //User input size
    cin>>size;

    //Creating integer type two arrays and a result counter which has been created and intilized
    int a[size],  b[size],  result[2]={0,0};
    cout<<"Enter elements of 1st array"<<endl;
    //User input for elements from the user for 1st array
    for(int i=0; i<size; i++){
        cin>>a[i];
    }
    //User input for elements from the user for 2nd array
    cout<<"Enter elements of 2nd array"<<endl;
     for(int k=0; k<size; k++){
        cin>>b[k];
    }
    //For loop to compare elements in similar index of both arrays
    for(int i=0; i<size; i++){
            //If the element of 1st array is greater than second then increase result element in the first index of the result array
            if(a[i]>b[i]){

                    result[0]++;

            }
            //If the element of 2nd array is greater than first then increase result element in the second index of the result array
            if(b[i]>a[i]){

                    result[1]++;

            }
            //If both elements in the arrays are the same then skip the index and move to the next
            else if(b[i]==a[i]){
                continue;
            }


    }
    //Once loop has been terminated then print out the final result array
    cout<<"The frequency is:";
    for(int i=0; i<2; i++){
        cout<<result[i]<<" ";
    }

return 0;
}
