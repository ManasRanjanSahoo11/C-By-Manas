#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char a[10], b[30];
    cout << "Enter the 1st string: ";
    cin.getline(a, 10); // Use cin.getline() for character arrays

    cout << "Enter the 2nd string: ";
    cin.getline(b, 30);
    
    int i=0, j=strlen(b);

    while(a[i]!='\0'){
        b[j]=a[i];
        i++;
        j++;
    }
    b[j]='\0';
    cout<<"Concatinate string :"<<b;
}
