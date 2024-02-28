#include<iostream>
using namespace std;
int a,b;
class A{
    public:
    void input();
    void add();
};
void A::input(){
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
}
void A::add(){
    cout<<"Addition :"<<a+b<<endl;
}

class B{
    
    public:
    void sub();
};
void B::sub(){
    cout<<"Subtraction :"<<a-b<<endl;
}

class C:public A, public B{
    public:
    void multi();
};

void C::multi(){
    cout<<"Multiplication :"<<a*b<<endl;
}

int main(){
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.multi();
}