#include <iostream>
using namespace std;

// Recursive function to print individual digits
void printDigits(int n) {
    if (n < 10) {
        cout << "Digit: " << n << endl;
        return;
    }
    printDigits(n / 10);
    cout << "Digit: " << n % 10 << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check if input is positive
    if (num < 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    printDigits(num);
    return 0;
}
