#include <iostream>
using namespace std;
int main()
{
    int size1, size2, i;
    cout << "Enter the 1st Array Size: " << endl;
    cin >> size1;

    int a[size1];

    cout << "Enter the all element :" << endl;
    for (i = 0; i < size1; i++)
        cin >> a[i];
    cout << "1st Array Element are :";
    for (i = 0; i < size1; i++)
        cout << a[i] << " ";

    cout<<endl;
    cout << "Enter the 2nd Array Size: " << endl;
    cin >> size2;

    int b[size2];

    cout << "Enter the all element : ";
    for (i = 0; i < size2; i++)
        cin >> b[i];

    cout<<endl;
    cout << "2nd Array Element are :";
    for (i = 0; i < size2; i++)
        cout << b[i] << " ";

    int totsize=size1+size2;
    int c[totsize];

    for(i=0;i<totsize;i++){
        c[i]=a[i];
    }

    for(i=0;i<totsize;i++){
        c[size1+i]=b[i];
    }

    cout<<endl;
    cout<<"Merged array :"<<endl;
    for(i=0;i<totsize;i++)
    cout<<c[i]<<" ";
}