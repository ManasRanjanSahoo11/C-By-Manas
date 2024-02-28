#include<iostream>
using namespace std;
int main(){
    int x, rem, sum=0;
    cout<<"Enter a number :";
    cin>>x;
    while(x!=0){
        rem=x%10;
        x=x/10;
        sum=sum+rem;
    }
    cout<<sum;
}
