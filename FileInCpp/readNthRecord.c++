#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct student {
    int roll;
    string name;
    float mark;
};

int main() {
    ifstream newFile("manas.txt");

    if (!newFile.is_open()) {
        cout << "File not found" << endl;
        return 1;  // Use return to gracefully exit the program
    }

    struct student s;
    int n;

    cout << "Enter the record no you want to read: " << endl;
    cin >> n;

    // Calculate the position of the nth record
    streampos pos = (n - 1) * sizeof(student);

    // Move the file pointer to the beginning of the file
    newFile.seekg(pos, ios::beg);

    // Read the nth record
    newFile.read(reinterpret_cast<char*>(&s), sizeof(student));

    // Display the data
    cout << "Record " << n << ":\n";
    cout << "Roll: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Mark: " << s.mark << endl;

    newFile.close();
    return 0;
}
