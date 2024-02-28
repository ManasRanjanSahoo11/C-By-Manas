#include <iostream>
using namespace std;
int main()
{
    // Arithemetic Operator
    int a, b, x, res;  
    cin >> a >>b;
    cout<<"Enter your choose :"<<endl<<"1.Add"<<endl<<"2.sub"<<endl<<"3.mul"<<endl<<"4.division"<<endl<<"5.modulus"<<endl;
    cin>>x;
    switch (x)
    {
    case 1:
         res =a+b;
        cout<<res;
        break;
    case 2:
        res =a-b;
        cout<<res;
        break;
    case 3:
        res =a*b;
        cout<<res;
        break;
    case 4:
        res =a/b;
        cout<<res;
        break;
    case 5:
        res =a%b;            // modulus
        cout<<res;          //a%b=a if -> a<b
        break;              //a%-b = a%b    
                            // -a %b = -(a%b)

    default:cout<<"invalid";
        break;
    }

}
