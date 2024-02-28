#include <iostream>
#include <vector>
using namespace std;

class Student
{
private:
    int rollNo, age;
    string name;

public:
    // Constructor to initialize the Student object
    Student(int stuRollno, int stuAge, string stuName)
    {
        rollNo = stuRollno;
        age = stuAge;
        name = stuName;
    }

    // Getters and Setters
    void setRoll(int stuRollNo)
    {
        rollNo = stuRollNo;
    }

    int getRoll()
    {
        return rollNo;
    }

    void setAge(int stuAge)
    {
        age = stuAge;
    }

    int getAge()
    {
        return age;
    }

    void setName(string stuName)
    {
        name = stuName;
    }

    string getName()
    {
        return name;
    }

    void displayStudent()
    {
        cout << "Roll: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << endl;
    }
};

void addNewStudent(vector<Student> &stu)
{
    int roll, age;
    string name;

    cout << "Enter New Student Roll No: ";
    cin >> roll;

    for (int i = 0; i < stu.size(); i++)
    {
        if (stu[i].getRoll() == roll)
        {
            cout << "Student Already Exists..." << endl;
            return;
        }
    }

    cout << "Enter New Student Name: ";
    cin.ignore(); // To clear the newline character from the buffer
    getline(cin, name);

    cout << "Enter New Student Age: ";
    cin >> age;

    Student newStudent(roll, age, name);
    stu.push_back(newStudent);

    cout << "Student Added Successfully..." << endl;
}

void displayAllStudent(vector<Student> students){
    if(students.empty()){
        cout<<"No student Found!"<<endl;
        return;
    }
    for(int i=0;i<students.size();i++){
        students[i].displayStudent();
        cout<<endl;
    }
}

void searchStudent(vector<Student> &students)
{
    int rollno;
    cout << "Enter Roll no of a Student :" << endl;
    cin >> rollno;

    bool found = false;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getRoll() == rollno)
        {
            cout << "-----Result Found-----" << endl;
            students[i].displayStudent();
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student Not Found" << endl;
    }
}

void updateStudent(vector<Student> &students)
{
    string sname;
    bool f = false;
    int c;

    cout << "Enter the student Name :" << endl;
    cin.ignore();
    getline(cin, sname);

    string newName; // Declare newName outside the switch

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getName() == sname)
        {
            f = true;

            cout << "-----Student found-----" << endl;
            cout << "1. Update Roll no" << endl;
            cout << "2. Update Name" << endl;
            cout << "3. Update Age" << endl;

            cout << "Enter Your Choice :" << endl;
            cin >> c;

            switch (c)
            {
            case 1:
                int newRoll;
                cout << "Enter New Roll No :" << endl;
                cin >> newRoll;
                students[i].setRoll(newRoll);
                cout<<"Roll no updated sucessfully..."<<endl;
                break;
            case 2:
                cout << "Enter New Name :" << endl;
                cin.ignore();
                getline(cin, newName);
                students[i].setName(newName);
                cout<<"Name updated sucessfully..."<<endl;
                break;
            case 3:
                int newAge;
                cout << "Enter New Age :" << endl;
                cin >> newAge;
                students[i].setAge(newAge);
                cout<<"Age updated sucessfully..."<<endl;
                break;
            default:
                cout << "Invalid Choice !" << endl;
            }
        }
    }
    if (f == false)
        cout << "Record Not Found!" << endl;
}

void deleteStudent(vector<Student> students)
{
    string name;
    int f = 0;

    cout << "Enter the Name that You want to Delete :" << endl;
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getName() == name)
        {
            f = 1;
            students.erase(students.begin() + i);
            cout << "Record deleted sucessfully..." << endl;
            return;
        }
    }
    if (f == 0)
        cout << "Record Not found" << endl;
}

int main()
{
    vector<Student> students;

    cout << "************************************************" << endl;
    cout << "***                                          ***" << endl;
    cout << "***   Welcome To Student Management System   ***" << endl;
    cout << "***                                          ***" << endl;
    cout << "************************************************" << endl;

    while (1)
    {
        char m;
        cout << "Press Any Key To Continue..." << endl;
        cin>>m;

        cout << "************************************************" << endl;
        cout << "*******             MAIN MENU            *******" << endl;
        cout << "************************************************" << endl;

        cout << "1. Add New Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Update Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Exit" << endl;

        int choice;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addNewStudent(students);
            break;
        case 2:
            displayAllStudent(students);
            break;
        case 3:
            searchStudent(students);
            break;
        case 4:
            updateStudent(students);
            break;
        case 5:
            deleteStudent(students);
            break;
        case 6:
            return 0; // Exit the program
        default:
            cout << "Invalid Choice. Please choose again." << endl;
        }
    }

    return 0;
}