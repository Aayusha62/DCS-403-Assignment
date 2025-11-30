#include <iostream>
using namespace std;

int fibTailHelper(int n, int a, int b) {
    if (n == 0) return a;
    return fibTailHelper(n - 1, b, a + b);
}

int fibTail(int n) {
    return fibTailHelper(n, 0, 1);
}

int main() {
    int n;
    cout << "Enter n to compute nth Fibonacci: ";
    cin >> n;
    cout << fibTail(n) << endl;
    return 0;
}
