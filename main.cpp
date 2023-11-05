#include <iostream>
using namespace std;

void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    swapValues(&num1, &num2);

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}