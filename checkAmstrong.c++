#include<iostream>
#include<cmath>
using namespace std;
int main(){
    /* int x, rem, p=0, temp;
    cout<<"Enter three digit number :";
    cin>>x;
    temp=x;
    while(temp!=0){
        rem=temp%10;
        temp=temp/10;
        p=p+rem*rem*rem;
    }
    if(x==p) cout<<"Amstrong!";
    else cout<<"Not Amstrong!"; */

    int x,rem,a=0,temp, count=0;
    cout<<"Enter a number :";
    cin>>x;
    temp=x;
    while (x!=0)
    {
        rem=x%10;
        x=x/10;
        count++;
    }
    x=temp;
    while (x!=0)
    {
        rem=x%10;
        x=x/10;
        a=a+pow(rem,count);
    }

    if(temp==a) cout<<"Amstrong!";
    else cout<<"Not Amstrong!";
    
}