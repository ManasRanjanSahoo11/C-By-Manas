#include<iostream>
using namespace std;

void checkPrime(int x){
    int i;
    for(i=2;i<x;i++){
        if(x%i==0){
            break;
        }
    }
    if(i==x) cout<<"Prime!";
    else cout<<"Not Prime!";
}
int main(){
    int x;
    cout<<"Enter a number :";
    cin>>x;
    checkPrime(x);
}