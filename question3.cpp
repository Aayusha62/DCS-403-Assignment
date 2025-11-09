#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "Enter any two numbers: ";
    cin >> a >> b;

    cout << "The Largest is = " << fmax(a, b) << endl;
    cout << "The Smallest is = " << fmin(a, b) << endl;
    return 0;
}

