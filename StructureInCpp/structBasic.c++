#include<iostream>
using namespace std;

struct student{
    int roll;
    string name;
    float mark;
};

int main(){
    struct student s;
    s.roll=101;
    s.name="Manas";
    s.mark=75.35;
    cout<<s.roll<<endl<<s.name<<endl<<s.mark<<endl;
}