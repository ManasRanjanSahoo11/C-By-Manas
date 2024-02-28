#include<iostream>
using namespace std;

struct student{
    int roll;
    string name;
    float mark;
};

void fun(struct student st){
        cout<<st.roll<<endl<<st.name<<endl<<st.mark<<endl;
}

int main(){
    struct student s;
    s.roll=101;
    s.name="Manas";
    s.mark=75.35;
    fun(s);
}