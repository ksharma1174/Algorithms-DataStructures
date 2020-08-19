#include <iostream>
using namespace std;
struct Student{
    int rollno;
    string name;HHH
    int section;

};
int main(){
    Student s1[3];
    for(int i=0; i<3; i++){
      cin>>s1[i].rollno;
      cin>>s1[i].name;
      cin>>s1[i].section;

        cout<<"The rollno is:"<<s1[i].rollno<<endl<<"The name is:"<<s1[i].name<<endl<<"The class section is:"<<s1[i].section;

    }
    return 0;
}

