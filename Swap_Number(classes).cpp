#include<iostream>
using namespace std;
    class Swap_Number{
    public:
        int getNumber(int n){
            int firstdigits;
            int lastdigit;
            int swap;
            firstdigits=n/10;
            lastdigit=n%10;
            swap=(lastdigit*100)+firstdigits;
            return swap;
        }
    };

int main(){
    int num;
    cin>>num;
    Swap_Number Swap;
    cout<<Swap.getNumber(num);
    return 0;
}

