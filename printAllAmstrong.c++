#include <iostream>
using namespace std;

void printAmstrong(int x, int y)
{
    int i, rem, a=0, temp;
    for (i = 1; i < 1000; i++)
    {
        temp=i;
        while(temp!=0){
            rem=temp%10;
            a=a+rem*rem*rem;
            temp=temp/10;
        }
        if(i==a) cout<<a<<" ";
        a=0;
    }
}
int main()
{
    int x, y;
    cout << "Amstrong Number Beetween 1 to 1000 :"<<endl;
    printAmstrong(1,1000);
}