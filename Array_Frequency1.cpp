#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int count=0;
    int ar[]={10, 20, 20, 10, 10, 30, 50, 10, 20, 50};
    sort(ar, ar+9);
    for(int i=0; i<9; i++){

    if(ar[i]==ar[i+1]){
            ar[i]=0;
            ar[i+1]=0;
            count++;
        }
    }

    cout<<count++;
    return 0;
}



