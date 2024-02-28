#include<iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int l = 0, i = 0;
    while (s[i] != '\0') {
        l++;
        i++;
    }

    cout << "Length of the string: " << l << endl;

    return 0;
}
