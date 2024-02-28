//    1
//    A B
//    1 2 3
//    A B C D
//    1 2 3 4 5

#include <iostream>
using namespace std;
int main()
{
    
    for (int i = 1; i <= 5; i++)
    {
        char ch='A';
        for (int j = 1; j <= 5; j++)
        {     
            if (j <= i){
                if(i%2==0) cout<<ch++<<" ";
                else cout<<j<<" ";   
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
