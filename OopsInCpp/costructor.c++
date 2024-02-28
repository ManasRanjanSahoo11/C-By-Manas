#include<iostream>
using namespace std;

class Rectangle{
    public:
    int l;
    int b;

    Rectangle(){
        l=0;
        b=0;
        cout<<l<<" "<<b<<endl;
        cout<<"hello this is default constructor"<<endl;
        }

     Rectangle(int x, int y){
        l=x;
        b=y;
        cout<<l<<" "<<b<<endl;
        cout<<"hello this is parameterized constructor"<<endl;
    }

    Rectangle(Rectangle& r){
        l=r.l;
        b=r.b;
        cout<<l<<" "<<b<<endl;
        cout<<"hello this is copy constructor"<<endl;
    }
};

int main(){
    Rectangle ob1;
    Rectangle ob2(5,2);
    Rectangle ob3 = ob2;
}