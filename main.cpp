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
        sourceArray[i] = rand() % 100;
    }

    cout << "Source Array: ";
    for (int i = 0; i < size; i++) {
        cout << sourceArray[i] << " ";
    }
    cout << endl;

    int* sourcePtr = sourceArray;
    int* destinationPtr = destinationArray;

    for (int i = 0; i < size; i++) {
        *destinationPtr = *sourcePtr;
        sourcePtr++;
        destinationPtr++;
    }

    cout << "Destination Array: ";
    for (int i = 0; i < size; i++) {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

    return 0;
}