#include<iostream>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter the string: ";
    getline(cin, s1);

    s2.resize(s1.size()); //this is important to initializer.

    int i=0;
    while(s1[i]!='\0'){
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    cout<<"copied string :"<<s2;
}
