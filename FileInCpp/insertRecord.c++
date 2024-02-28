#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct student{
    int roll;
    string name;
    float mark;
};

int main(){
    struct student s;
    ofstream newFile("manas.txt", ios::app);

    int i,n;
    cout<<"Enter the how many record you want to insert :"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"Enter the "<<i<<" student details :"<<endl;
        cout<<i<<" Student Roll no :"<<endl;
        cin>>s.roll;
        fflush(stdin);

        cout<<i<<" Student Name :"<<endl;
        getline(cin,s.name);
        fflush(stdin);

        cout<<i<<" Student Mark :"<<endl;
        cin>>s.mark;

        newFile<<s.roll<<','<<s.name<<','<<s.mark<<endl;
    }

    newFile.close();
}