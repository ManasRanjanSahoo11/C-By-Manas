#include<iostream>
using namespace std;
int main(){
    int size,e,pos;
    cout<<"Enter the Size: "<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter the all element :"<<endl;
    for(int i=0;i<size;i++)
    cin>>a[i];
    cout<<"Element are :"<<endl;
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";

    //from specified position ->

    cout<<endl;
    cout<<"enter the element you want to insert :"<<endl;
    cin>>e;

    cout<<endl;
    cout<<"enter the position :"<<endl;
    cin>>pos;

    size++;
    for(int i=size-1;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=e;
   
   cout<<endl;
   cout<<"After inserted element : ";
   for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
}