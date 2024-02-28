#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the Size: " << endl;
    cin >> size;
    int a[size];
    cout << "Enter the all element :" << endl;
    for (int i = 0; i < size; i++)
        cin >> a[i];
    cout << "Element are :" << endl;
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            if(a[i] == a[j]){
                for(int k=j;k<size;k++){
                    a[k]=a[k+1];
                }
                size--;
                j--;
            }

        }
    }

    cout<<endl;
    cout<<"After deleted duplicate element :"<<endl;
    for (int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
   
}