#include <iostream>

using namespace std;

int findMax(int* num1, int* num2) {
    if (*num1 > *num2) {
        return *num1;
    }
    else {
        return *num2;
    }
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int result = findMax(&num1, &num2);

    cout << "The maximum number between " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}