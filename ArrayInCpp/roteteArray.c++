#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the row/column" << endl;
    cin >> n;
    int a[n][n];
    cout<<"Enter the all element :"<<endl;  //read element
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin>>a[i][j];
    }
    cout<<"Element are:"<<endl;   // display element
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // perform operation 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<=j){
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }   
    } 
    
    for (int i = 0; i < n; i++)
    {
       int j=0, k=n-1;
       while(j<k){
        int temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
            j++;
            k--;
       }   
    }  
    cout<<"After 90 degree rotared :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 
}