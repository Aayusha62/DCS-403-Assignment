#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // upper half
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++)
            cout << " ";
        for (int star = 1; star <= 2*i - 1; star++)
            cout << "*";
        cout << endl;
    }

    // lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++)
            cout << " ";
        for (int star = 1; star <= 2*i - 1; star++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
