#include<iostream>
using namespace std;

class Product {
private:
    int id;
    string title;
    double price;
    string type;

public:
    Product() {
        this->id = 0;
        this->title = "";
        this->price = 0;
    }
    Product(int id, string title, double price, string type) {
        this->id = id;
        this->title = title;
        this->price = price;
    }
    void acceptData() {
        cout << "Enter the product ID : ";
        cin >> this->id;
        cout << "Enter the Title: ";
        cin >> this->title;
        cout << "Enter the price: ";
        cin >> this->price;
    }
    double getPrice() {
        return this->price;
    }
    virtual void calculateDiscount() = 0;


};

class Books : public Product {
private:
    string author;
public:
    Books() {
        this->author = "";
    }
    Books(string author) {
        this->author = author;
    }
    void acceptdata() {
        cout << "Enter the Auhtor: ";
        cin >> this->author;
        Product::acceptData();
    }
    void calculateDiscount() {
        cout << this->getPrice() - (getPrice() * (10 / 100.0));
    }
};

class Tapes : public Product {
private:
    string artist;
public:
    Tapes() {
        this->artist = "";
    }
    Tapes(string artist) {

        this->artist = artist;
    }
    void acceptdata() {
        cout << "Enter The Tape Artist: ";
        cin >> this->artist;
        Product::acceptData();
    }
    void calculateDiscount() {
        cout << this->getPrice() - (getPrice() * (5 / 100.0));
    }
};

int menu() {
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Book" << endl;
    cout << "2.Tape" << endl;
    cout << "3.Your Bill" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;
    return choice;
}
int main() {
    Books b1;
    int choice;
    Product* arr[3];
    int index = 0;
    while ((choice = menu()) != 0) {
        switch (choice)
        {
        case 1:
            if (index < 3) {
                arr[index] = new Books();
                arr[index]->acceptData();
                arr[index]->calculateDiscount();
                index++;
                cout << endl;
            }
            else
                cout << "Array is Full, Cannot add the Book Object.." << endl;
            break;
        case 2:
            if (index < 3) {
                arr[index] = new Tapes();
                arr[index]->acceptData();
                arr[index]->calculateDiscount();
                index++;
                cout << endl;
            }
            else
                cout << "Array is Full, Cannot add the Tape Object.." << endl;
            break;
        case 3:
            for (int i = 0;i < index;i++) {
                arr[i]->calculateDiscount();
                index++;
                cout << endl;
            }
        default:
            cout << "Wrong Choice" << endl;
            break;
        }
    }
    for (int i = 0; i < index; i++)
    {
        delete arr[i];
    }
    cout << "Thank";
    return 0;

}