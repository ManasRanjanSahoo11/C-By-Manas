#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size :";
    cin>>size;

    int a[size];

    cout<<"enter the all element of array :"<<endl;
    for(int i=0;i<size;i++)
    cin>>a[i];
   
    cout<<"all element of array are :"<<endl;
    for(int i=0;i<size;i++)
    cout<<a[i] <<" ";

   
    int max=a[0];
    for(int i=0;i<size;i++){
        if(max<a[i])
        max=a[i];
    }
    cout<<endl;
     cout<<"The greatest element : "<<max<<endl;
}