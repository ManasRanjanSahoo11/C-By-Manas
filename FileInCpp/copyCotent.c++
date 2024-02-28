#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    
    ifstream newfile("manas.txt");
    ofstream newfile1("temp.txt");

    string s;

    while(getline(newfile, s)){
        newfile1<<s<<endl;
    }
    cout<<"File copied sucessfully."<<endl;
    newfile.close();
    newfile1.close();
}