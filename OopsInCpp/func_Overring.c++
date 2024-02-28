#include<iostream>
using namespace std;

class A{
    public:
    void fun(){
        cout<<"This is Fun, today!"<<endl;
    }
};

class B:public A{
    public:
   void fun(){
        cout<<"Be prepared!"<<endl;
    }
};

int main(){
    B obj;
    obj.fun();
}