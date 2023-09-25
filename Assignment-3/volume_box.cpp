#include <iostream>
using namespace std;

class volume_box
{

private:
    float length;
    float width;
    float height;

public:
    volume_box()
    {
        this->length = 5.23;
        this->height = 9.98;
        this->width = 2.453;
    }

    void accept_values()
    {
        cout << "Enter the Length: ";
        cin >> this->length;
        cout << "Enter the Width: ";
        cin >> this->width;
        cout << "Enter the Height: ";
        cin >> this->height;
    }
    float print_volume()
    {
        cout << "The Volume of the box is: ";
        return this->length * this->width * this->height;
    }
};
int main()
{
    volume_box v1;
    int choice;

    while (choice != 0)
    {
        cout << "0. Exit" << endl;
        cout << "1. Give input for length, width and height: " << endl;
        cout << "2. To print the volume of the box." << endl;
        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            v1.accept_values();
            break;
        case 2:
            cout << v1.print_volume() << endl;
        default:
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}