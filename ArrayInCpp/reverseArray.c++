#include<iostream>
using namespace std;
int main(){
    int size,i,j;

    cout<<"Enter the Size: "<<endl;
    cin>>size;

    int a[size];

    cout<<"Enter the all element :"<<endl;
    for(i=0;i<size;i++)
    cin>>a[i];

    cout<<"Element are :"<<endl;
    for(i=0;i<size;i++)
    cout<<a[i]<<" ";

    // Reverse array ->
    i=0;
    j=size-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

    cout<<endl;
    cout<<"Reverse array :"<<endl;
    for(i=0;i<size;i++)
    cout<<a[i]<<" ";
}