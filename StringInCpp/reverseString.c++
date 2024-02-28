#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[30];
    cout<<"Enter the string :"<<endl;
    cin.getline(a,30);

    int i=0, j=strlen(a)-1;
    while(i<j){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

    cout<<"Reverse String :"<<a;
}