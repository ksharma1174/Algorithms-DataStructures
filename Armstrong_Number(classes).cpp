#include<iostream>
using namespace std;
class Armstrong_Number{

    public:
    int CreateArmstrong(int n){
        int a,b,c,sum;
        while(n!=0){
            a=n%10;
            n=n/10;
            sum=sum+(a*a*a);

        }
        return sum;

    }
    public:
        string ArmstrongCompare(int num2,int store){
            if(store==num2){
                return "The number is armstrong";

            }
            else  {
                return "The number is not armstrong";

            }

    }

};

int main(){
    Armstrong_Number obj;
    int num;
    cin>>num;
    int num1=obj.CreateArmstrong(num);
    cout<<num1<<endl;
    cout<<obj.ArmstrongCompare(num, num1);
    return 0;
}

