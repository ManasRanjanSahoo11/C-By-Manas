#include<iostream>
using namespace std;

class A{
    public:
    int roll;
    string name;
};

class B:public A{
    public:
    int pin;
    string address;
};

int main(){
    B obj;
    obj.roll=19;
    obj.name="Manas";
    obj.pin=759103;
    obj.address="Angul";
    
    cout<<"Roll :"<<obj.roll<<endl;
    cout<<"Name :"<<obj.name<<endl;
    cout<<"Pin :"<<obj.pin<<endl;
    cout<<"Address :"<<obj.address<<endl;
}