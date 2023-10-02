#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    float sal;
public:

    employee()
    {
        cout << "Inside Employee parameterless Ctor" << endl
            << "I'm Employee" << endl;
        this->id = 0;
        this->sal = 0;
    }
    employee(int id, float sal)
    {
        cout << "Inside Employee parameterized Ctor" << endl
            << "I'm Employee" << endl;
        this->id = id;
        this->sal = sal;
    }
    void print()
    {
        cout << "Employee ID is " << this->id << endl;
        cout << "Employee salary is " << this->sal << endl;
    }
    int get_id() {
        return this->id;
    }
    void set_id() {
        this->id = id;
    }
    int get_sal() {
        return this->sal;
    }
    void set_sal() {
        this->sal = sal;
    }

};

class manager : public virtual employee
{
private:
    float bonus;
public:

    manager()
    {
        cout << "Inside paramterless Manager Ctor" << endl
            << "I'm Manager" << endl;
        this->bonus = 0;

    }
    manager(float)
    {
        cout << "Inside Paramterized Manager Ctor" << endl
            << "I'm Manager" << endl;
        this->bonus = 350;
    }
    void print()
    {
        cout << "Manager Salary is " << this->bonus << endl;
    }
    int get_bonus() {
        return this->bonus;
    }
    void set_bonus() {
        this->bonus = bonus;
    }
    void accept() {
        cout << "Enter the Bonus: ";
        cin >> this->bonus;
    }
protected:
    void display_manager() {
        cout << "Bonus: " << this->bonus;
        // accept_manager();
    }
    void accept_manager() {
        cout << "Enter Bonus: ";
        cin >> this->bonus;
    }
};

class salesman : public virtual employee
{

private:
    float comm;
public:
    salesman()
    {
        cout << "Inside Salesperson parameterless Ctor" << endl
            << "I'm Salesperson" << endl;
        this->comm = 0;
    }

    salesman(float comm)
    {
        cout << "Inside Salesperson Parameterized Ctor" << endl
            << "I'm Salesperson" << endl;
        this->comm = 550;
    }
    float get_comm() {
        return this->comm;
    }
    void set_comm(float comm) {
        this->comm = comm;
    }
    void display() {
        cout << "Commission: " << this->comm;
    }
    void accept() {
        cout << "Enter Commission: ";
        cin >> this->comm;
    }
protected:
    void display_salesman() {
        cout << "Commission: " << this->comm;
        // accept_salesman();
    }
    void accept_salesman() {
        cout << "Enter Commission: ";
        cin >> this->comm;
    }


};

class sales_manager : public manager, public salesman
{

public:
    sales_manager()
    {
        cout << "Inside Sales Manager parameter less Ctor" << endl
            << "I'm Sales Manager" << endl;
    }
    sales_manager
    (int id, float sal, float bonus, float comm) {
        cout << "Inside Sales Manager Parametrized ctor" << endl;
    }
    void sales_manager_display() {
        // employee::get_id();
        // cout << endl;

        manager::display_manager();
        cout << endl;
        salesman::display_salesman();
        cout << endl;
    }
    void sales_manager_accept() {
        manager::accept_manager();
        cout << endl;
        salesman::accept_salesman();
        cout << endl;
    }
};

int main()
{
    employee e1(10, 45000);

    sales_manager sale;
    sale.sales_manager_accept();
    sale.sales_manager_display();
    e1.print();
    return 0;
}