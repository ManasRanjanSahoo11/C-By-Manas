#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string s;
    ifstream newfile("manas.txt");

    while(getline(newfile, s)){
        cout<<s<<endl;
    }
    newfile.close();
}