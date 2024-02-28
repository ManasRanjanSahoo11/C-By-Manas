#include<iostream>
using namespace std;
int main(){
    int n,i=0,count=0;
    cout<<"Enter a decimal nummber :"<<endl;
    cin>>n;

    int a[10]; 
    
    while(n!=0){
        a[i]=n%2;
        n=n/2;
        count++;
        i++;
    }

    cout<<"the binary value of given decimal no :"<<ends;
    for(i=count-1;i>=0;i--)
        cout<<a[i];
}