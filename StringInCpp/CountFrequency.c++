#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[20];
    int i, j, count;
    cout<<"Enter the string :"<<endl;
    cin.getline(a, 20);

    for(i=0;i<strlen(a);i++){
        char ch=a[i];
        count=0;
        if(ch != ' '){
            for(j=0;j<strlen(a);j++){
                if(a[j] == ch){
                    count++;
                    a[j]=' ';
                }
            }
        }
        cout<<ch<<" "<<count<<endl;
    }    
}