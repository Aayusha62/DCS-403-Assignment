#include <iostream>
using namespace std;

long long powerTail(long long a, int b, long long acc) {
    if (b == 0) return acc;
    return powerTail(a, b - 1, acc * a);
}

int main() {
    long long a;
    int b;
    cout << "Enter base and exponent (a b): ";
    cin >> a >> b;
    cout << powerTail(a, b, 1) << endl;
    return 0;
}
