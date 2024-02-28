#include<iostream>
using namespace std;
class A{
    public:
   void hello(){
    cout<<"This is pen"<<endl;
    }
    void hello(int x,int y){
        cout<<"This is manas"<<endl;
    }
};
int main(){
    A obj;
    // obj.hello();
    obj.hello(8, 6);
}