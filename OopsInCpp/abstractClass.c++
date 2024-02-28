#include<iostream>
using namespace std;
class Animal{
    virtual void sound();
};
class Dog:public Animal{
    public:
    void sound(){
        cout<<"woof woof"<<endl;
    }
};
int main(){
    Dog d;
    d.sound();
}