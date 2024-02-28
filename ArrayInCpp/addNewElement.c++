#include<iostream>
using namespace std;
int main(){
    int size,e;
    cout<<"Enter the Size: "<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter the all element :"<<endl;
    for(int i=0;i<size;i++)
    cin>>a[i];
    cout<<"Element are :"<<endl;
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";

    //from the beginnging ->

    cout<<endl;
    cout<<"enter the element you want to insert from the begnning :"<<endl;
    cin>>e;

    size++;
    for(int i=size-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=e;
   
   cout<<endl;
   cout<<"After inserted element : ";
   for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
}