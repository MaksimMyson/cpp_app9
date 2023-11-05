#include <iostream>
#include <cstdlib> 

int main() {
    using namespace std;

    const int arraySize = 5;
    int numbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        numbers[i] = rand() % 100;  
    }

    int sum = 0;

    int* ptr = numbers;

    cout << "Array elements: ";
    for (int i = 0; i < arraySize; i++) {
        cout << numbers[i] << " ";
        sum += *ptr;
        ptr++;
    }
    cout << endl;

    cout << "Sum of elements in the array: " << sum << endl;

    return 0;
}



