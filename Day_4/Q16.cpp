#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lower, upper;

    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;

    cout << "Armstrong numbers between " << lower << " and " << upper << " are:\n";

    for (int num = lower; num <= upper; num++) {
        int temp = num, digits = 0;
        double sum = 0;
        int n = temp;
        while (n != 0) {
            digits++;
            n /= 10;
        }

        n = temp;
        while (n != 0) {
            int rem = n % 10;
            sum += pow(rem, digits);
            n /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}