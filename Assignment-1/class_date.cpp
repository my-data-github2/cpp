#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {

        this->day = 21;
        this->month = 9;
        this->year = 23;
    }

public:
    void printDateOnConsole()
    {
        cout << "Date : " << this->day << "-" << this->month << "-" << this->year << endl;
    }

public:
    void acceptDateFromConsole()
    {
        cout << "Enter the day :";
        cin >> this->day;
        cout << "Enter the month :";
        cin >> this->month;
        cout << "Enter the year :";
        cin >> this->year;
    }

public:
    bool isLeapYear()
    {
        int year;
        cout << "Enter Year" << endl;
        cin >> year;
        if (year % 400 == 0)
        {
            cout << "It is a Leap Year" << endl;
            return true;
        }
        else if (year % 100 == 0)
        {
            cout << "Not a Leap Year" << endl;
            return false;
        }
        else if (year % 4 == 0)
        {
            cout << "It is a Leap year" << endl;
            return true;
        }
        else
        {
            cout << "Not a leap year" << endl;
            return false;
        }
    }
};

int main()
{

    date d1;
    int choice = -1;

    while (choice!=0)
    {
        cout << "1. Initialize date " << endl;
        cout << "2. Print the date on console " << endl;
        cout << "3. Enter the date " << endl;
        cout << "4. Enter the year " << endl;

        cout << "Enter the choice :" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            d1.initDate();
            break;
        case 2:
            d1.printDateOnConsole();
            break;
        case 3:
            d1.acceptDateFromConsole();
            break;
        case 4:
            d1.isLeapYear();
            break;
        default:
            cout << "Invalid chocie" << endl;
        }
    }

    return 0;
}