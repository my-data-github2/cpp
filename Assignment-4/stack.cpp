#include <iostream>
using namespace std;

class stack
{
private:
    int top;
    int size;
    int *n;

public:
    stack(int size = 5)
    {
        this->size = size;
        n = new int[this->size];
        int top = -1;
    }
    ~stack()
    {
        delete[] n;
    }
    void push(int x)
    {
        if (top >= size)

            cout << "Stack Full" << endl;

        else
            n[++top] = x;
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "stack empty";
            return 0;
        }
        else
        {
            int x = n[top--];
            return x;
        }
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        else
        {
            int x = n[top];
            return x;
        }
    }
    bool isEmpty()
    {
        if (top <= -1)
        {
            return true;
        }
        else
            return false;
    }
    bool isFull()
    {
        if (top = -1)
        {
            return true;
        }
        else
            return false;
    }
    void print()
    {
        cout << "Stack ->" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << n[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.print();
    cout << s1.pop() << endl;
    cout << s1.peek() << endl;
    cout << s1.isEmpty() << endl;
    cout << s1.isFull() << endl;

    return 0;
}