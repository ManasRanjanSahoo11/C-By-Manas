//    1
//    0 1
//    1 0 1
//    0 1 0 1

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i){
                if((i+j)%2==0) cout<<"1 ";
                else cout<<"0 ";
            }
                
            else
                cout << " ";
        }
        cout << endl;
    }
}