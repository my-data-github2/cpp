#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    float marks;

public:
    student();
    void initStudent();
    void printStudentOnConsole();
    void acceptStudentFromConsole();
};
student::student()
{
    this->rollno = 0;
    this->name = "";
    this->marks = 0;
}

void student::initStudent()
{
    this->rollno = 23;
    this->name = "Kunal";
    this->marks = 85.2;
}
void student::printStudentOnConsole()
{
    cout << "Student's Rollno: " << this->rollno << endl;
    cout << "Student's Name: " << this->name << endl;
    cout << "Student's Marks: " << this->marks << endl;
}
void student::acceptStudentFromConsole()
{
    cout << "Enter Student's Rollno: ";
    cin >> this->rollno;
    cout << "Enter Student's Name: ";
    cin >> this->name;
    cout << "Enter Student's Marks: ";
    cin >> this->marks;
}

int main()
{
    student s1;
    int choice =-1;

    while(choice!=0 )
    { 
        cout << "1. Initailize Student" << endl;
        cout << "2. Accept from Console. " << endl;
        cout << "3. Print on console" << endl;

        cout << "Enter the choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s1.initStudent();
            break;
        case 2:
            s1.acceptStudentFromConsole();
            break;
        case 3:
            s1.printStudentOnConsole();
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }

    return 0;
}
