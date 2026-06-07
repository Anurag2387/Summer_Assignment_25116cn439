#include <iostream>
using namespace std;

int main() {
    int decimalNum;
    
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    if (decimalNum == 0) {
        cout << "Binary equivalent: 0";
        return 0;
    }

    string binary = "";

    while (decimalNum > 0) {
        binary = char((decimalNum % 2) + '0') + binary;
        decimalNum /= 2;
    }

    cout << "Binary equivalent: " << binary << endl;

    return 0;
}