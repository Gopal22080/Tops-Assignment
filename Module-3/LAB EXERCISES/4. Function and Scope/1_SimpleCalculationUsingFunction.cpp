#include <iostream>
using namespace std;

// Function Declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2, choice;

    cout << "===== Simple Calculator =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;


    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "\nEnter your choice (1-4): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Result = " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result = " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result = " << multiply(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Result = " << divide(num1, num2) << endl;
            else
                cout << "Error: Division by zero not allowed!" << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

