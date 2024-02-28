#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[30];
    cout<<"Enter the string :"<<endl;
    cin.getline(a,30);

    int i=0, j=strlen(a)-1, flag=0;
    while(i<j){
        if(a[i] == a[j]){
            flag=1;
            i++;
            j--;
        }
        else {
            flag=0;
            break;
        }
    }

    if(flag==1)
        cout<<"string is palindrome!";
    else
        cout<<"string is not palindrome!";
}