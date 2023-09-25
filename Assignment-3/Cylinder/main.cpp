#include"/home/sunbeam/Sunbeam/cpp/Assignment-3/Cylinder/cylinder.h"

int main()
{

    Cylinder v1;
    Cylinder v2(23.3, 20.12);
    int choice = -1;
    cout<<"Enter the choice: ";
    cin>>choice;
        switch (choice)
        {
        case 1:
            v1.printVolume();
            break;
        case 2:
            v2.printVolume();
            break;
        default:
            cout << "Invalid Choice";
        }


    return 0;
}