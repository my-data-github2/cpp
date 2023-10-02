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

    void payingCar(int total_car, double total_amt)
    {
        this->total_car = this->total_car + 1;
        this->total_amt = this->total_amt + 0.50;
    }
    void nopayCar()
    {
     this->total_car = this->total_car + 1;
    }

    void  printOnConsole()
    {
      cout<<"Total cars "<<this->total_car <<endl;
      cout<<"Total cash "<<this->total_amt<<endl;
      cout<<"Total paying cars "<< this->total_car - (total_amt / 0.50)<<endl;
      cout<<"Total Non Paying cars "<<(total_amt / 0.50)<<endl;
    }
};

int main()
{

    int choice = -1;
    tollbooth t1;

    while (choice != 0)
    {
        cout << "0. Exit" << endl;
        cout << "1. Number of Paying Cars: " << endl;
        cout << "2. Number of toll paying cars: " << endl;
        cout << "3. Print"<<endl;

        cout << "Enter the Choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            t1.payingCar(1, 4.2);
            break;
        case 2:
            t1.nopayCar();
            break;
        case 3:
            t1.printOnConsole();
            break;
        default:
            cout << "invalid choice"<<endl;
        }
    }
    return 0;
}