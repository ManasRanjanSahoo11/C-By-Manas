#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[20], s2[20];
    int i, j, l1, l2, flag=0;

    cout<<"Enter the main string :"<<endl;
    cin.getline(s1, 20);

    cout<<"Enter the sub string :"<<endl;
    cin.getline(s2, 20);

    l1=strlen(s1);
    l2=strlen(s2);

    for(i=0;i<l1;i++){
        for(j=0;j<l2;j++){
            if(s1[i+j] != s2[j])
            break;
        }
        if(j==l2){
        cout<<"Substring is found!";
        flag=1;
        }
    }

    if(flag==0)
        cout<<"Substring is not found!";
}