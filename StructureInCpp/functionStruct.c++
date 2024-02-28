#include<iostream>
using namespace std;

struct student{
    int roll;
    string name;
    float mark;
};

void fun(int r, string n, float m){
    cout<<r<<endl<<n<<endl<<m<<endl;
}

int main(){
    struct student s;
    s.roll=101;
    s.name="Manas";
    s.mark=75.35;
    fun(s.roll, s.name, s.mark);
}