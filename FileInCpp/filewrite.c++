#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string str;
    char ch;
    ofstream newFile("manas.txt");

    while(ch != '#'){
        cout<<"Enter the data into the file :"<<endl;
        getline(cin, str);

        newFile<<str<<endl;

        cout<<"Do you want to continue! if No, press # "<<endl;;
        cin>>ch;
    }
    
    newFile.close();
}