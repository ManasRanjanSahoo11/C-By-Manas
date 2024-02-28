#include<iostream>
using namespace std;
int main(){
     int x, rem, rev=0, temp;
    cout<<"Enter a number :";
    cin>>x;
    temp=x;
    while(temp!=0){
        rem=temp%10;
        temp=temp/10;
        rev=(rev*10)+rem;
    }
    if(rev==x) cout<<"Palindrome!";
    else cout<<"Not Palindrome!";
}