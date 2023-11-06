#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int size = 5;

    int sourceArray[size];
    int destinationArray[size];

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < size; i++) {
        sourceArray[i] = rand() % 100; // Генерируем случайные числа от 0 до 99
    }

    int* sourcePtr = sourceArray;
    int* destinationPtr = destinationArray + size - 1;

    cout << "Source Array: ";
    for (int i = 0; i < size; i++) {
        cout << sourceArray[i] << " ";
    }
    cout << endl;

    while (sourcePtr < sourceArray + size) {
        *destinationPtr = *sourcePtr;
        sourcePtr++;
        destinationPtr--;
    }

    cout << "Destination Array (reversed): ";
    for (int i = 0; i < size; i++) {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

    return 0;
}