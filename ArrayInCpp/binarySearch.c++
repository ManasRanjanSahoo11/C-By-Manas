#include <iostream>
using namespace std;
int main()
{
    int size, s, e, mid, element;
    cout << "Enter the Size: " << endl;
    cin >> size;
    int a[size];
    cout << "Enter the all element in into the array in sorted manner :" << endl;
    for (int i = 0; i < size; i++)
        cin >> a[i];
    cout << "Element are :" << endl;
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    cout << endl;
    cout << "enter the element you want to serach :" << endl;
    cin >> element;

    s = 0;
    e = size - 1;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (element == a[mid])
        {
            cout << "Element is found at index " << mid << endl;
            break;
        }
        else if (element < a[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    if (s > e)
        cout << "element is not found";
}