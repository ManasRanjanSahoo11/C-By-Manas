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

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(a[i] > a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
   
   cout<<endl;
   cout<<"Sorted Array : ";
   for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
}