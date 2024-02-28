#include <iostream>
using namespace std;
int main()
{
    int size, max, max1;
    cout << "Enter the Size: " << endl;
    cin >> size;
    int a[size];
    cout << "Enter the all element :" << endl;
    for (int i = 0; i < size; i++)
        cin >> a[i];
    cout << "Element are :" << endl;
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    max =max1= a[0];
    for (int i = 0; i < size; i++)
    {
        if (max < a[i])
            max = a[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (max1 < a[i] && max != a[i])
            max1 = a[i];
    }

    cout << endl;
    cout << "2nd largest element : " << max1;
}