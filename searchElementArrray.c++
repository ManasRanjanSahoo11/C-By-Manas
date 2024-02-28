#include<iostream>
using namespace std;
int main(){
    int size,n,flag=0;
    cout<<"Enter the size :";
    cin>>size;

    int a[size];

    cout<<"enter the all element of array :"<<endl;
    for(int i=0;i<size;i++)
    cin>>a[i];
   
    cout<<"all element of array are :"<<endl;
    for(int i=0;i<size;i++)
    cout<<a[i] <<" ";

    cout<<"Enter the element you want to search :"<<endl;
    cin>>n;

    for(int i=0;i<size;i++){
        if(n==a[i]){
        cout<<"Element is found.And index is "<<i;
        flag=1;
        break;
        }
    }
    if(flag==0) cout<<"element is not found";
}