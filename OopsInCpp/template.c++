#include<iostream>
using namespace std;
/*
Template Fuction :->

template <class A>
void dispaly(A x,A y){
    cout<<x<<" "<<y<<endl;
}
int main(){
    // dispaly(10, 20);
    dispaly('a', 'b');
}

*/

// Template Class :->

template <class A>
class God{
    public:
    God(A x, A y){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    // God <int> g(19, 20);
    // God <char> h('a', 'b');
    God <float> i(10.32, 96.23);
}