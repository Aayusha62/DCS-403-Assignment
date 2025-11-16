#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {

        for (int space = 1; space <= n - i; space++)
            cout << " ";                     // spaces

        for (int star = 1; star <= 2*i - 1; star++)
            cout << "*";                     // stars

        cout << endl;
    }

    return 0;
}
