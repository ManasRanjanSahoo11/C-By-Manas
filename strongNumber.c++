#include <iostream>
using namespace std;

void checkStrong(int x)
{
    int rem, sum=0, temp;
    temp=x;
    while (x != 0)
    {
        rem=x%10;
        int fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum=sum+fact;
        x=x/10;
    }
    if(temp==sum) cout<<"Strong Number!";
    else cout<<"Not Strong Number!";

}
int main()
{
    int x;
    cout << "Enter a number :";
    cin >> x;
    checkStrong(x);
}