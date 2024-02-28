#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream newFile("manas.txt");

    ifstream newFile1("temp.txt");

    ofstream newFile2("data.txt");
    
    if(!newFile.is_open() || !newFile1.is_open()){
        cout<<"File not found"<<endl;
        return 1;
    }

    string str;
    while(getline(newFile, str)){
        newFile2<<str<<endl;
    }

    string str2;
    while(getline(newFile1, str2)){
        newFile2<<str2<<endl;
    }

    cout<<"Merged sucessfully"<<endl;
    newFile.close();
    newFile1.close();
}