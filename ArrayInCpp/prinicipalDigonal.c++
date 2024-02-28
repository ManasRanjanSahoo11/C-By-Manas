#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of row/column :"<<endl;
    cin>>n;

    int a[n][n];

    cout<<"the all element :"<<endl;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            cin>>a[i][j];
         }
    }

    cout<<"enter the all element :"<<endl;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
         }
         cout<<endl;
    }

    int sum=0;

    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(i==j) sum+=a[i][j];
         }
    }

    cout<<"Sum of digonal :"<<sum;
}