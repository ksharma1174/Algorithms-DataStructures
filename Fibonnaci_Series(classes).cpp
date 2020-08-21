#include <iostream>
using namespace std;
class Fibonacci_Series{
    public:
        int getSeries( int n, int previous, int next, int nextvalue ){

     for(int i=0; i<n; i++){
                nextvalue=next+previous;
                previous=next;
                next=nextvalue;
                cout<<nextvalue<<" ";
            }
        }

};
int main(){
    int size;
    cin>>size;
    Fibonacci_Series myseries;
    myseries.getSeries(size, 0, 1, 0);
    return 0;
}
