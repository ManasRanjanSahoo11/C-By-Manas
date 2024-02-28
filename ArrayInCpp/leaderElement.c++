#include <iostream>
using namespace std;
int main()
{
    int size, l = 0, i;
    cout << "Enter the Size: " << endl;
    cin >> size;
    int a[size];
    cout << "Enter the all element in into the array in sorted manner :" << endl;
    for (int i = 0; i < size; i++)
        cin >> a[i];
    cout << "Element are :" << endl;
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    for (i = 0; i < size; i++)
    {
        l = 1;
        for (int j = 0; j < size; j++)
        {
            if (a[j] >= a[i])
            {
                l = 0;
                break;
            }
        }
    }
    if (l == 1)
        cout << "leader element :" << a[i] << endl;
}