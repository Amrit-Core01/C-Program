 //Write a Program to Check Whether a number is even or odd using if-else
 #include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    // A number is even if it is divisible by 2 (remainder is 0)
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
    }

    return 0;
}
