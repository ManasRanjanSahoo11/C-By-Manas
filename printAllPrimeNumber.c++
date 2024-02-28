#include <iostream>
using namespace std;

void printPrime(int x, int y)
{
    int i, j;
    for (j = x; j <= y; j++)
    {
        for (i = 2; i <= j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }
        if (i == j)
            cout << i << " ";
    }
}
int main()
{
    int x, y;
    cout << "Enter a range, you want to print :";
    cin >> x >> y;
    printPrime(x, y);
}