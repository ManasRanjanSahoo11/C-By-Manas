#include<iostream>
using namespace std;

class A{
    int x;
    public:
    void set(int a){
        x=a;
    }
    int get(){
        return x;
    }   
};

int main(){
    A ob;
    ob.set(19);
    cout<<ob.get();
}