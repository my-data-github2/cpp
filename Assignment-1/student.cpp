#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    float marks;

public:
    void initStudent()
    {
        this->rollno = 23;
        this->name = "Kunal Markam";
        this->marks = 85.2;
    }

public:
    void printStudentOnConsole()
    {
        cout << "Student's Roll Number: " << this->rollno << endl<<"Student's Name: " << this->name <<endl<< "Student's Marks: " << this->marks << endl;
    }

public:
    void accpetStudentFromConsole()
    {
        cout << "Enter Student's Roll Number: " << endl;
        cin >> this->rollno;
        cout << "Enter Student's Name: " << endl;
        cin >> this->name;
        cout << "Enter Student's Marks: " << endl;
        cin >> this->marks;
    }
};

int main()
{
    student s1;
    int choice;

    cout << "1. Intialize student." << endl;
    cout << "2. Print the students." << endl;
    cout << "3. Enter the student data." << endl;

    cout<<"Enter the choice"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
        s1.initStudent();
        break;
    case 2:
        s1.printStudentOnConsole();
        break;
    case 3:
        s1.accpetStudentFromConsole();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}