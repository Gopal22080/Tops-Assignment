#include <iostream>
using namespace std;

// Class definition
class Calculator {
public:
    // Member functions
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc; // Object of Calculator
    double num1, num2;
    char op;

    cout << "Simple Calculator using Class" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    double result;

    // Using class functions
    switch (op) {
        case '+':
            result = calc.add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '-':
                        result = calc.subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = calc.multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '/':
            result = calc.divide(num1, num2);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

