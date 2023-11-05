#include <iostream>

using namespace std;

void determineSign(int* number) {
	if (*number > 0) {
		cout << "Positive" << endl;
	}
	else if (*number < 0) {
		cout << "Negative" << endl;
	}
	else {
		cout << "Zero" << endl;
	}
}

int main() {
	int num;

	cout << "Enter a number: ";
	cin >> num;

	determineSign(&num);

	return 0;
}