#include<iostream>
using namespace std;
class Abc{
    public:
    string name;
    int age;
};

int main(){
    Abc ob;
    ob.name="Manas ranjan";
    ob.age=21;

    Abc o;
    o.name="Pritam";
    o.age=22;
    cout<<"Name :"<<ob.name<<" "<<",Age :"<<ob.age<<endl;
    cout<<"Name :"<<o.name<<" "<<",Age :"<<o.age<<endl;
}