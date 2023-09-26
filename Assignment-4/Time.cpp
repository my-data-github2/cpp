#include <iostream>
using namespace std;

class Time
{

private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
    }
    Time(int hours, int minutes, int seconds)
    {
    }
    int getHour()
    {
        return this->hours;
    }
    int getMinutes()
    {
        return this->minutes;
    }
    int getSeconds()
    {
        return this->seconds;
    }
    void printTime()
    {
        cout << "The time is" << endl;
    }
    void setHour(int hours)
    {
        this->hours = hours;
    }
    void setMinute(int minutes)
    {
        this->minutes = minutes;
    }
    void setSeconds(int seconds)
    {
        this->seconds = seconds;
    }
};
int main()
{
    Time **arr = new Time *[2];

    for (int i = 0; i < 2; i++)
    {
        arr[i] = new Time();
    }

    for (int i = 0; i < 2; i++)
    {
        arr[i]->setHour(2);
        arr[i]->setMinute(10);
        arr[i]->setSeconds(30);
    }
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i]->getHour() << ":";
        cout << arr[i]->getMinutes() << ":";
        cout << arr[i]->getSeconds() << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        arr[i]->setHour(3);
        arr[i]->setMinute(05);
        arr[i]->setSeconds(40);
    }
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i]->getHour() << ":";
        cout << arr[i]->getMinutes() << ":";
        cout << arr[i]->getSeconds() << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        delete arr[i];
        delete[] arr;
        return 0;
    }
}
