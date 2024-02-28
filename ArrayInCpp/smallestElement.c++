#include<iostream>
using namespace std;
int main(){
    int size;

    cout<<"Enter the Size: "<<endl;
    cin>>size;

    int a[size];

    cout<<"Enter the all element :"<<endl;
    for(int i=0;i<size;i++)
    cin>>a[i];

    cout<<"Element are :"<<endl;
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";

    int min=a[0];

    for(int i=0;i<size;i++){
        if(min>a[i])
        min=a[i];
    }
    
    cout<<endl;
    cout<<"Smallest Element : "<<min;

}