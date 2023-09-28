#include <iostream>
using namespace std;

class Time {

private:
    int hour;
    int minute;
    int second;

public:
    Time() {
        this->hour = 0;
        this->minute = 0;
        this->second = 0;

    }

    Time(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    int getHour() {
        return this->hour;
    }
    int getMinute() {
        return this->minute;
    }
    int getSecond() {
        return this->second;
    }
    void setHour(int hour) {
        this->hour = hour;
    }
    void setMinute(int minute) {
        this->minute = minute;
    }
    void setSecond(int second) {
        this->second = second;
    }
    void printTime() {
        cout << this->hour << ":" << this->minute << ":" << this->second << endl;
    }
};
int main() {


    Time* n = new Time[3];
    Time t1;
    t1.printTime();
    Time t2(12, 23, 30);
    t2.printTime();
    delete[] n;
    return 0;
}
