#include <iostream>
using namespace std;

int main() {
    int intVal = 10;
    double doubleVal = intVal; 

    cout << "Implicit Type Conversion:" << endl;
    cout << "Integer value: " << intVal << endl;
    cout << "Converted to double: " << doubleVal << endl;
    double resultImplicit = intVal / 4.0;
    cout << "Result of intVal / 4.0 (implicit conversion): " << resultImplicit << endl;

    double num1 = 9.78;
    int num2 = (int)num1;
    int num3 = int(num1); 
    int num4 = static_cast<int>(num1); 

    cout << "\nExplicit Type Conversion:" << endl;
    cout << "Double value: " << num1 << endl;
    cout << "C-style cast to int: " << num2 << endl;
    cout << "Function-style cast to int: " << num3 << endl;
    cout << "static_cast to int: " << num4 << endl;

    double resultExplicit = (double)5 / 2; 
    cout << "Result of (double)5 / 2 (explicit conversion): " << resultExplicit << endl;
    return 0;
}

