//By: Karan Sharma
//Date: 09/29/2020
//Creating a Stack Data Structure

#include <bits/stdc++.h>
using namespace std;
class Stack{
    private:
        int size; int stack[100], top =-1;

    public:
    Stack(int size){}

    void push(int value){
        if(top>=size-1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
        top++;
        stack[top]= value;
        }

    }
    void pop(){
       if(top<=-1){
        cout<<"Stack Underflow";
       }
       else{

        top--;
       }

    }
    void peek(){
        for(int i=0; i<=top; i++){
            cout<<stack[i]<<" ";
        }

    }

};
int main(){
    int thesize, value, num;
    cout<<"Please enter size"<<endl;
    cin>>thesize;
    Stack obj(thesize);


    for(int i=0; i<thesize; i++){
    cout<<endl<<"Chose procedure:"<<endl<<"1.To push value"<<endl<<"2. To display stack"<<endl<<"3. To pop first input element"<<endl;
    cin>>num;
    cout<<endl;
    switch(num){
        case 1:
        cout<<"Enter value to be pushed:";
        cin>>value;
        obj.push(value);
        break;

        case 2:
        cout<< "The stack has:";
        obj.peek();
        break;

        case 3:
        obj.pop();
        break;

        default:
            cout<< "Please enter value from 1-3";
        }

     }
      return 0;

    }





