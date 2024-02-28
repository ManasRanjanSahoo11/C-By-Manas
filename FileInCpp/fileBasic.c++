#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream newFile("manas.txt");
    cout<<"file created"<<endl;
    newFile<<"Hello Manas! how are you ?";
    newFile.close();
}