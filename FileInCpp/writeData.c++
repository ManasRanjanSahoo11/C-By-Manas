#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string str;
    ofstream newFile("manas.txt");
    cout<<"Enter the content you want to write into the file :"<<endl;
    getline(cin, str);

    newFile << str << endl;  // Use << to write to the file
    
    newFile.close();
}