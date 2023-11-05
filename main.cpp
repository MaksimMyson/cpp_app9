#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    double* ptr1 = &num1;
    double* ptr2 = &num2;

    switch (operation) {
    case '+':
        result = *ptr1 + *ptr2;
        break;
    case '-':
        result = *ptr1 - *ptr2;
        break;
    case '*':
        result = *ptr1 * *ptr2;
        break;
    case '/':
        if (*ptr2 != 0) {
            result = *ptr1 / *ptr2;
        }
        else {
            cout << "Error: Division by zero." << std::endl;
            return 1;
        }
        break;
    default:
        cout << "Error: Invalid operation." << std::endl;
        return 1;
    }

    cout << "Result: " << *ptr1 << " " << operation << " " << *ptr2 << " = " << result << std::endl;

    return 0;
}