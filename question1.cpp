#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cout << "Enter any number: ";
    cin >> num;

    cout << "The square root of " << fabs(num) << " = " << sqrt(fabs(num)) << endl;
    cout << "2 raised to power 3 = " << pow(2, 3) << endl;
    cout << "The absolute value of " << num << " = " << fabs(num) << endl;
    return 0;
}
