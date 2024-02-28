#include<iostream>
using namespace std;
class Human{
    public:
    int eye=2;
};

class Boy:public Human{
    public:
    string name;
    int age;
};

class Girl:public Human{
    public:
    string name;
    int age;
};

int main(){
    Boy b;
    Girl g;
    b.name="Manas";
    b.age=21;

    g.name="Ella";
    g.age=20;

    cout<<"Name :"<<b.name<<endl;
    cout<<"Age :"<<b.age<<endl;
    cout<<"Eye :"<<b.eye<<endl;
    cout<<endl;
    cout<<"Name :"<<g.name<<endl;
    cout<<"Age :"<<g.age<<endl;
    cout<<"Eye :"<<g.eye<<endl;
}