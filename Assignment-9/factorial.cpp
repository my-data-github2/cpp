#include<iostream>
using namespace std;


int fact(int n) {
    if (n < 0) {
        throw 3;
    }
    else if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return (fact(n - 1) * n);
    }

}
int main() {
    int n;
    int factorial;
    cout << "Enter Valid Number To Perform Factorial: ";
    cin >> n;


    try { factorial = fact(n); }
    catch (int e) {
        cout << "Error 1101: Factorial of negative value is not possible."<<endl;
    }
    cout << "The Factorial of the Number is: " << factorial << endl;
    cout << "Execution done.";
    return 0;
}