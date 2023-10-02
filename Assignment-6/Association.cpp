#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int get_day()
    {
        return this->day;
    }
    void set_day(int day)
    {
        this->day = day;
    }
    int get_month()
    {
        return this->month;
    }
    void set_month(int month)
    {
        this->month = month;
    }
    int get_year()
    {
        return this->year;
    }
    void set_year(int set)
    {
        this->year = year;
    }
    void accept(int day, int month, int year)
    {
        cout << "Enter the day: ";
        cin >> day;
        cout << "Enter the Month: ";
        cin >> month;
        cout << "Enter the year: ";
        cin >> year;
    }
    void display()
    {
        cout << this->day << "-" << this->month << "-" << this->year << endl;
        cout << endl;
    }
    bool isLeapYear()
    {
        if (400 % this->year == 0)
        {
            cout << "This is a leap year";
            return true;
        }
        else if (100 % this->year == 0)
        {
            cout << "This is not a leap year";
            return false;
        }
        else if (4 % this->year == 0)
        {
            cout << "This is a leap year";
            return true;
        }
        else
            cout << "This is not a leap year";
    }
};
class employee
{
private:
    int id;
    float sal;
    string dept;
    date jdate; //Association -> composition

public:
    employee()
    {
        this->id = 0;
        this->dept = "";
        this->sal = 0;
    }
    employee(int id, float sal, string dept, int day, int month, int year) : jdate(day, month, year)
    {
        this->id = id;
        this->dept = dept;
        this->sal = sal;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    int get_id()
    {
        return this->id;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    int get_sal()
    {
        return this->sal;
    }
    void set_dept(string dept)
    {
        this->dept = dept;
    }
    string get_dept()
    {
        return this->dept;
    }
    date get_join_date()
    {
        cout << "Date of Joining = ";
        jdate.display();
    }
    void set_join_date(date jdate)
    {
        cout << "Enter the Date Of joining\n";
        jdate.accept(12, 2, 2000);
    }
};
class person
{
private:
    string name;
    string address;
    date dob;
    date jdate; //Association -> Composition

public:
    person()
    {
        this->name = "";
        this->address = "";
    }
    person(string name, string address, int day, int month, int year) : jdate(day, month, year)
    {
        this->name = name;
        this->address = address;
    }
    string get_name()
    {
        return this->name;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_address()
    {
        return this->address;
    }
    void set_address(string address)
    {
        this->address = address;
    }
    date get_birth_date()
    {
        cout << "Birth date:";
        jdate.display();
    }
    void set_birth_date()
    {

        jdate.accept(1, 1, 2000);
    }
};

int main()
{
    employee e1;
    employee e2(2, 3000, "Maths", 2, 12, 2020);

    e1.set_dept("Science");
    e1.set_id(1);
    e1.set_sal(2000);
    cout << "Employee Dept: " << e1.get_dept() << endl;
    cout << "Employee id: " << e1.get_id() << endl;
    cout << "Employee Salary: " << e1.get_sal() << endl;
    e1.get_join_date();
    cout << "Employee Dept: " << e2.get_dept() << endl;
    cout << "Employee id: " << e2.get_id() << endl;
    cout << "Employee Salary: " << e2.get_sal() << endl;
    e2.get_join_date();

    person p1;
    person p2("Virat Markam", "Mukta a2", 17, 9, 2022);

    p1.set_name("Kunal Markam");
    p1.set_address("Shyam Nagar");
    cout << "Perosn Name: " << p1.get_name() << endl;
    cout << "Person Address: " << p1.get_address() << endl;
    p1.get_birth_date();
    cout << "Perosn Name: " << p2.get_name() << endl;
    cout << "Person Address: " << p2.get_address() << endl;
    p2.get_birth_date();

    return 0;
}