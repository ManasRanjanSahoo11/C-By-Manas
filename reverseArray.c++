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

    
    int i=0, j=size-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
    cout<<"reverse an array :"<<endl;
    for(int i=0;i<size;i++)
    cout<<a[i] <<" ";
}