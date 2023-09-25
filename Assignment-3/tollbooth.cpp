#include <iostream>
using namespace std;

class tollbooth
{
private:
    unsigned int total_car;
    double total_amt;

public:
    tollbooth()
    {
        this->total_car = 0;
        this->total_amt = 0;
    }

    int payingCar(int total_car, double total_amt)
    {
        this->total_car = this->total_car + 1;
        this->total_amt = this->total_amt + 0.50;
    }
    int nopayCar()
    {
        return this->total_car = this->total_car + 1;
    }

    int printOnConsole()
    {
        cout << payingCar(1,4.2);
        cout << nopayCar();
    }
};

int main()
{

    int choice;
    tollbooth t1;

    cout << "0. Exit" << endl;
    cout << "1. Number of Paying Cars: " << endl;
    cout << "2. Number of toll paying cars: " << endl;
    cout << "3. Print";

    cout << "Enter the Choice:" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        t1.payingCar(1,4.2);
        break;
    case 2:
        t1.nopayCar();
        break;
    case 3:
        t1.printOnConsole();
        break;
    }
}